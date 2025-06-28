#include "DreamGameplayTaskTypes.h"

#include "DreamGameplayTaskBlueprintLibrary.h"
#include "DreamGameplayTaskLog.h"
#include "Classes/DreamTask.h"
#include "Classes/DreamTaskConditionTemplate.h"

FDreamTaskSaveSingle::FDreamTaskSaveSingle(const UDreamTask* Task)
{
	TaskGuid = UDreamGameplayTaskBlueprintLibrary::GetDreamTaskGuid(Task->StaticClass());
	TaskProgress = Task->GetTaskConditionProgress();
}

FDreamTaskSaveData::FDreamTaskSaveData(const TArray<UDreamTask*>& InSaveArray)
{
	SaveData.Empty();
	for (auto Element : InSaveArray)
	{
		SaveData.Add(FDreamTaskSaveSingle(Element));
	}
}

FDreamTaskSpecHandle::FDreamTaskSpecHandle()
{
	Guid.Invalidate();
}

FDreamTaskSpecHandle::FDreamTaskSpecHandle(TObjectPtr<UDreamTask> InTask, FDateTime InStartTime)
	: Guid(FGuid::NewGuid()), Task(InTask), OwnerComponent(InTask->GetOwnerComponent()), StartTime(InStartTime), RunningTime(0.f), EndTime(0.f)
{
	StartTime = InStartTime;
	Task = InTask;
	Guid = FGuid::NewGuid();
}

const FDreamTaskSpecHandle& FDreamTaskSpecHandle::InvalidHandle()
{
	static const FDreamTaskSpecHandle InvalidHandle = FDreamTaskSpecHandle();
	return InvalidHandle;
}


EDreamTaskState FDreamTaskSpecHandle::GetTaskState() const
{
	return Task->GetTaskState();
}

FTimespan FDreamTaskSpecHandle::GetRunningTime() const
{
	return RunningTime;
}

FDateTime FDreamTaskSpecHandle::GetStartTime() const
{
	return StartTime;
}

FDateTime FDreamTaskSpecHandle::GetEndTime() const
{
	return EndTime;
}

bool FDreamTaskSpecHandle::IsUseMaximumTime() const
{
	return GetTask()->bUseMaximumCompletionTime;
}

bool FDreamTaskSpecHandle::IsTimeout() const
{
	if (GetTask()->bUseMaximumCompletionTime)
	{
		if (GetStartTime() + GetTask()->MaximumCompletionTime.ToTimespan(FFrameRate()) < FDateTime::Now())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

bool FDreamTaskSpecHandle::IsCompleted() const
{
	return Task->IsCompleted();
}

bool FDreamTaskSpecHandle::IsFailed() const
{
	return GetTaskState() == EDreamTaskState::EDTS_Failed;
}

bool FDreamTaskSpecHandle::IsValid() const
{
	return Guid.IsValid();
}

void FDreamTaskSpecHandle::SetRunningTime(FTimespan InTime)
{
	RunningTime = InTime;
}

void FDreamTaskSpecHandle::SetStartTime(FDateTime InTime)
{
	StartTime = InTime;
}

void FDreamTaskSpecHandle::SetEndTime(FDateTime InTime)
{
	EndTime = InTime;
}

void FDreamTaskSpecHandle::AddTime(float InSeconds)
{
	RunningTime += FTimespan::FromSeconds(InSeconds);
}

void FDreamTaskSpecHandle::AddTime(FTimespan InTime)
{
	RunningTime += InTime;
}

void FDreamTaskSpecHandle::Update(float DeltaTime)
{
	AddTime(DeltaTime);
	if (IsTimeout())
	{
		GetTask()->SetTaskState(EDreamTaskState::EDTS_Failed | EDreamTaskState::EDTS_Timeout);
	}
}

bool FDreamTaskSpecHandle::operator==(const FDreamTaskSpecHandle& Other) const
{
	return Guid == Other.Guid;
}

bool FDreamTaskSpecHandle::operator==(const UDreamTask* Other) const
{
	return Task == Other;
}

bool FDreamTaskSpecHandle::operator==(const FName& InName) const
{
	return Task->GetTaskName() == InName;
}

bool FDreamTaskSpecHandle::operator==(const TSubclassOf<UDreamTask>& Class) const
{
	return Task.GetClass() == Class;
}

FDreamTaskSpecHandleContainer::FDreamTaskSpecHandleContainer(const FDreamTaskSpecHandleContainer& Other)
{
	Handles = Other.Handles;
}

TArray<FDreamTaskSpecHandle>& FDreamTaskSpecHandleContainer::GetHandles()
{
	return Handles;
}

FDreamTaskSpecHandle& FDreamTaskSpecHandleContainer::AddHandle(FDreamTaskSpecHandle InHandle)
{
	InHandle.StartTime = FDateTime::Now();
	InHandle.Guid = FGuid::NewGuid();

	Handles.Add(InHandle);

	return InHandle;
}

bool FDreamTaskSpecHandleContainer::RemoveHandle(const FDreamTaskSpecHandle& InHandle)
{
	return GetHandles().RemoveSingle(InHandle) == 1;
}

const FDreamTaskSpecHandle& FDreamTaskSpecHandleContainer::FindHandle(UDreamTask* InTask)
{
	FDreamTaskSpecHandle* Handle = GetHandles().FindByPredicate([InTask](const FDreamTaskSpecHandle& InHandle)
	{
		return InTask == InHandle;
	});

	return Handle ? *Handle : FDreamTaskSpecHandle::InvalidHandle();
}

const FDreamTaskSpecHandle& FDreamTaskSpecHandleContainer::FindHandle(TSubclassOf<UDreamTask> InClass)
{
	FDreamTaskSpecHandle* Handle = GetHandles().FindByPredicate([InClass](const FDreamTaskSpecHandle& InHandle)
	{
		return InClass == InHandle.GetTask()->GetClass();
	});

	return Handle ? *Handle : FDreamTaskSpecHandle::InvalidHandle();
}

const FDreamTaskSpecHandle& FDreamTaskSpecHandleContainer::FindHandle(FName InName)
{
	FDreamTaskSpecHandle* Handle = GetHandles().FindByPredicate([InName](const FDreamTaskSpecHandle& InHandle)
	{
		return InName == InHandle.GetTask()->GetTaskName();
	});

	return Handle ? *Handle : FDreamTaskSpecHandle::InvalidHandle();
}

int32 FDreamTaskSpecHandleContainer::FindHandleIndex(const FDreamTaskSpecHandle& InHandle)
{
	for (int i = 0; i < Handles.Num(); ++i)
	{
		if (Handles[i] == InHandle)
		{
			return i;
		}
	}

	return INDEX_NONE;
}

void FDreamTaskSpecHandleContainer::ClearHandles()
{
	GetHandles().Empty();
}

int FDreamTaskSpecHandleContainer::SetHandles(const TArray<FDreamTaskSpecHandle>& InHandles)
{
	Handles = InHandles;
	return Handles.Num();
}

void FDreamTaskSpecHandleContainer::UpdateHandles(float DeltaTime)
{
	for (FDreamTaskSpecHandle& Handle : GetHandles())
	{
		Handle.Update(DeltaTime);
	}
}

UDreamTaskConditionTemplate* FDreamTaskCompletedCondition::GetConditionByName(FName InConditionName) const
{
	for (auto Element : Conditions)
	{
		if (Element.Key == InConditionName)
		{
			return Element.Value;
		}
	}

	return nullptr;
}

TArray<UDreamTaskConditionTemplate*> FDreamTaskCompletedCondition::GetConditions()
{
	TArray<UDreamTaskConditionTemplate*> Result;
	Conditions.GenerateValueArray(Result);
	return Result;
}

bool FDreamTaskCompletedCondition::UpdateConditionByName(FName InConditionName)
{
	UDreamTaskConditionTemplate* Condition = GetConditionByName(InConditionName);
	if (Condition)
	{
		Condition->Update();
		return true;
	}
	return false;
}

int FDreamTaskCompletedCondition::ConditionCompletedCount() const
{
	int Count = 0;
	for (auto Element : Conditions)
	{
		if (Element.Value->IsCompleted())
		{
			Count++;
		}
	}

	return Count;
}

bool FDreamTaskCompletedCondition::IsConditionsCompleted() const
{
	int CompletedCount = ConditionCompletedCount();

	if (CompletionMode == EDreamTaskConditionalCompletionMode::EDTCCM_Custom)
	{
		return CompletedCount >= CustomConditionCount;
	}

	if (CompletionMode == EDreamTaskConditionalCompletionMode::EDTCCM_Any)
	{
		return CompletedCount > 0;
	}

	if (CompletionMode == EDreamTaskConditionalCompletionMode::EDTCCM_All)
	{
		return CompletedCount == Conditions.Num();
	}

	return false;
}

void FDreamTaskCompletedCondition::Reset()
{
	for (TPair<FName, UDreamTaskConditionTemplate*>& Condition : Conditions)
	{
		Condition.Value->Reset();
	}
}
