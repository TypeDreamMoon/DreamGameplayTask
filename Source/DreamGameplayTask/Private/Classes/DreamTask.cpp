// Fill out your copyright notice in the Description page of Project Settings.


#include "Classes/DreamTask.h"

#include "DreamGameplayTaskSetting.h"
#include "DreamGameplayTaskSubsystem.h"
#include "Classes/DreamTaskConditionTemplate.h"
#include "Classes/DreamTaskInterface.h"
#include "Classes/DreamTaskComponent.h"
#include "Classes/DreamTaskData.h"
#include "Kismet/GameplayStatics.h"

UDreamTask::UDreamTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UDreamTask::InitializeTask(UDreamTaskComponent* InOwnerComponent, UObject* InPayload)
{
	OwnerComponent = InOwnerComponent;
	Payload = InPayload;

	if (bUseCompletionTime)
	{
		GWorld->GetSubsystem<UDreamGameplayTaskSubsystem>()->Push(this);
	}

	StartTime = FDateTime::Now();
	BP_TaskInitialize();
	for (auto Element : GetRelatedActors())
	{
		Cast<IDreamTaskInterface>(Element)->Execute_TaskInitialize(Element, this);
	}
}

UDreamTaskConditionTemplate* UDreamTask::GetTaskCondition(FName ConditionName)
{
	return *GetTaskConditions().FindByPredicate([ConditionName](const UDreamTaskConditionTemplate* Pred)
	{
		return Pred->ConditionName == ConditionName;
	});
}

bool UDreamTask::CheckTaskCompleted()
{
	int ConditionCompletedCount = 0;
	int ConditionCount = TaskConditions.Num();

	if (ConditionCount == 0) return true;

	for (auto Element : TaskConditions)
	{
		if (Element->BP_CompletedCondition())
		{
			ConditionCompletedCount++;
		}
	}

	switch (TaskConditionalCompletionMode)
	{
	case EDreamTaskConditionalCompletionMode::EDTCCM_All:
		if (ConditionCompletedCount == ConditionCount)
		{
			SetTaskState(EDreamTaskState::EDTS_Completed);
			return true;
		}
	case EDreamTaskConditionalCompletionMode::EDTCCM_Any:
		if (ConditionCompletedCount > 0)
		{
			SetTaskState(EDreamTaskState::EDTS_Completed);
			return true;
		}
	case EDreamTaskConditionalCompletionMode::EDTCCM_Custom:
		if (ConditionCompletedCount >= CustomConditionCount)
		{
			SetTaskState(EDreamTaskState::EDTS_Completed);
			return true;
		}
	}

	return false;
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
	if (TaskState == EDreamTaskState::EDTS_Accept || TaskState == EDreamTaskState::EDTS_Going)
	{
		for (auto Element : TaskConditions)
		{
			Element->UpdateByName(ConditionNames);
			OwnerComponent->OnTaskUpdate.Broadcast(this);
			BP_TaskUpdate();
			for (auto RelatedActor : GetRelatedActors())
			{
				Cast<IDreamTaskInterface>(RelatedActor)->Execute_TaskUpdate(RelatedActor, this);
			}
		}

		CheckTaskCompleted();
	}

	OnTaskUpdate.Broadcast(this);
}

void UDreamTask::UpdateTaskByClass(TArray<TSubclassOf<UDreamTaskConditionTemplate>> ConditionClasses)
{
	if (TaskState == EDreamTaskState::EDTS_Accept || TaskState == EDreamTaskState::EDTS_Going)
	{
		for (auto Element : TaskConditions)
		{
			Element->UpdateByClass(ConditionClasses);
			OwnerComponent->OnTaskUpdate.Broadcast(this);
			BP_TaskUpdate();
			for (auto RelatedActor : GetRelatedActors())
			{
				Cast<IDreamTaskInterface>(RelatedActor)->Execute_TaskUpdate(RelatedActor, this);
			}
		}

		CheckTaskCompleted();
	}

	OnTaskUpdate.Broadcast(this);
}

void UDreamTask::SetTaskState(EDreamTaskState NewState)
{
	TaskState = NewState;

	OnTaskUpdate.Broadcast(this);
	OnTaskStateUpdate.Broadcast(this);
	OwnerComponent->OnTaskUpdate.Broadcast(this);
	OwnerComponent->OnTaskStateUpdate.Broadcast(this);
	BP_TaskUpdate();
	
	switch (NewState)
	{
	case EDreamTaskState::EDTS_Accept:
		break;
	case EDreamTaskState::EDTS_Completed:
		EndTime = FDateTime::Now();
		CompletedTask_Internal();
		break;
	case EDreamTaskState::EDTS_Failed:
		break;
	case EDreamTaskState::EDTS_Going:
		break;
	}
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
	for (auto Element : TaskConditions)
	{
		Result.Add(Element->ConditionName, Element->GetCount());
	}
	return Result;
}

UDreamTaskData* UDreamTask::GetTaskData() const
{
	return TaskData;
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
