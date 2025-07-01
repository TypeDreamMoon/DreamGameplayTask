// Fill out your copyright notice in the Description page of Project Settings.


#include "Classes/DreamTask.h"

#include "DreamGameplayTaskLog.h"
#include "DreamGameplayTaskSetting.h"
#include "Classes/DreamTaskConditionTemplate.h"
#include "Classes/DreamTaskInterface.h"
#include "Classes/DreamTaskComponent.h"
#include "Kismet/GameplayStatics.h"

UDreamTask::UDreamTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UDreamTask::InitializeTask(UDreamTaskComponent* InOwnerComponent, UObject* InPayload)
{
	DGT_DEBUG_LOG(Log, TEXT("Task initialize. Name: %s"), *TaskName.ToString())

	// Start Pre Initialize.

	OwnerComponent = InOwnerComponent;
	Payload = InPayload;

	for (TPair<FName, UDreamTaskConditionTemplate*>& Condition : TaskCompletedCondition.GetConditionMapping())
	{
		Condition.Value->InitializeCondition(this);
	}

	// Pre Initialized Successful. Start Post Initialize

	for (auto Element : GetRelatedActors())
	{
		Cast<IDreamTaskInterface>(Element)->Execute_TaskInitialize(Element, this);
	}

	BP_TaskInitialize();

	// Post Initialize Successful. Start Begin

	SetTaskState(TaskState);
}

UDreamTaskConditionTemplate* UDreamTask::GetTaskCondition(FName ConditionName)
{
	return TaskCompletedCondition.GetConditionByName(ConditionName);
}

bool UDreamTask::CheckTaskCompleted()
{
	if (TaskCompletedCondition.IsConditionsCompleted())
	{
		SetTaskState(EDreamTaskState::EDTS_Completed);
		return true;
	}
	else
	{
		return false;
	}
}

TArray<AActor*> UDreamTask::GetRelatedActors()
{
	TArray<AActor*> RelatedActors;

	for (TSubclassOf<AActor> ActorClass : RelatedActorsClasses)
	{
		if (ActorClass->ImplementsInterface(UDreamTaskInterface::StaticClass()))
		{
			TArray<AActor*> FoundActors;
			UGameplayStatics::GetAllActorsOfClass(GEngine->GetCurrentPlayWorld(), ActorClass, FoundActors);
			RelatedActors.Append(FoundActors);
		}
	}

	return RelatedActors;
}

void UDreamTask::UpdateTaskByName(TArray<FName> ConditionNames)
{
	if (EnumHasAnyFlags(TaskState, (EDreamTaskState::EDTS_Accept | EDreamTaskState::EDTS_Going)))
	{
		for (auto Element : ConditionNames)
		{
			bool bUpdate = TaskCompletedCondition.UpdateConditionByName(Element);

			if (bUpdate)
			{
				OnTaskConditionUpdate.Broadcast(this);
				OwnerComponent->OnTaskUpdate.Broadcast(this);
				OnTaskUpdate.Broadcast(this);
				BP_TaskUpdate();
				for (auto RelatedActor : GetRelatedActors())
				{
					Cast<IDreamTaskInterface>(RelatedActor)->Execute_TaskUpdate(RelatedActor, this);
				}
			}
		}

		CheckTaskCompleted();
	}
}

void UDreamTask::SetTaskState(EDreamTaskState NewState)
{
	UpdateTaskState_Internal(NewState);
}

void UDreamTask::SetTaskConditionProgress(const TMap<FName, int32>& InValue)
{
	for (auto Element : InValue)
	{
		if (UDreamTaskConditionTemplate* Conditon = GetTaskCondition(Element.Key))
		{
			Conditon->SetCount(Element.Value);
		}
		CheckTaskCompleted();
	}
}

TMap<FName, int32> UDreamTask::GetTaskConditionProgress() const
{
	TMap<FName, int32> Result;
	for (auto Element : TaskCompletedCondition.Conditions)
	{
		Result.Add(Element.Key, Element.Value->GetCount());
	}
	return Result;
}

UDreamTaskData* UDreamTask::GetTaskData() const
{
	return TaskData;
}

void UDreamTask::ResetTask()
{
	TaskCompletedCondition.Reset();
	SetTaskState(EDreamTaskState::EDTS_Accept);
}

void UDreamTask::BP_TaskCompleted_Implementation()
{
}

void UDreamTask::BP_TaskInitialize_Implementation()
{
}

void UDreamTask::BP_TaskUpdate_Implementation()
{
}

void UDreamTask::BP_TaskConditionUpdate_Implementation()
{
}

void UDreamTask::BP_TaskFailed_Implementation()
{
}

void UDreamTask::BP_TaskTimeout_Implementation()
{
}

void UDreamTask::BP_TaskAccept_Implementation()
{
}

void UDreamTask::BP_TaskGoing_Implementation()
{
}

UDreamTask* UDreamTask::Create(TSubclassOf<UDreamTask> Class, TMap<FName, int32> Progress)
{
	if (!Class) return nullptr;

	UDreamTask* Task = NewObject<UDreamTask>(Class);
	Task->SetTaskConditionProgress(Progress);
	return Task;
}

UWorld* UDreamTask::GetWorld() const
{
	if (HasAllFlags(RF_ClassDefaultObject))
	{
		// If we are a CDO, we must return nullptr instead of calling Outer->GetWorld() to fool UObject::ImplementsGetWorld.
		return nullptr;
	}
	return GetOuter()->GetWorld();
}

void UDreamTask::CompletedTask_Internal()
{
	BP_TaskCompleted();
}

void UDreamTask::AcceptTask_Internal()
{
	BP_TaskAccept();
}

void UDreamTask::GoingTask_Internal()
{
	BP_TaskGoing();
}

void UDreamTask::TimeoutTask_Internal()
{
	BP_TaskTimeout();
}

void UDreamTask::FailedTask_Internal()
{
	BP_TaskFailed();
}

// TODO : Updater 待更新
void UDreamTask::UpdateTaskState_Internal(EDreamTaskState NewState)
{
	TaskState = NewState;

	OnTaskUpdate.Broadcast(this);
	OnTaskStateUpdate.Broadcast(this);
	OwnerComponent->OnTaskUpdate.Broadcast(this);
	OwnerComponent->OnTaskStateUpdate.Broadcast(this);
	BP_TaskUpdate();

	// DGT_DEBUG_LOG(Log, TEXT("NewState : %s"), *UEnum::GetValueAsString(NewState))
	// DGT_DEBUG_LOG(Log, TEXT("EnumHasAnyFlags(NewState, EDreamTaskState::EDTS_Accept) : %d"), EnumHasAnyFlags(NewState, EDreamTaskState::EDTS_Accept))

	if (EnumHasAnyFlags(NewState, EDreamTaskState::EDTS_Accept))
	{
		AcceptTask_Internal();
		GetOwnerComponent()->ActiveTimer();
	}
	else if (EnumHasAnyFlags(NewState, EDreamTaskState::EDTS_Completed))
	{
		CompletedTask_Internal();
	}
	else if (EnumHasAnyFlags(NewState, EDreamTaskState::EDTS_Failed))
	{
		FailedTask_Internal();
	}
	else if (EnumHasAnyFlags(NewState, EDreamTaskState::EDTS_Going))
	{
		GoingTask_Internal();
		GetOwnerComponent()->ActiveTimer();
	}
	else if (EnumHasAnyFlags(NewState, EDreamTaskState::EDTS_Timeout))
	{
		TimeoutTask_Internal();
	}
}
