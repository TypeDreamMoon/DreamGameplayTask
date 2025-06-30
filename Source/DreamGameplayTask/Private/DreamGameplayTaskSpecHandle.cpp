#include "DreamGameplayTaskSpecHandle.h"

#include "Classes/DreamTask.h"

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
