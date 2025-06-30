#include "DreamGameplayTaskSpecHandleContainer.h"

#include "Classes/DreamTask.h"
#include "DreamGameplayTaskSpecHandle.h"

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

	ChangeContainerState();

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

TArray<UDreamTask*> FDreamTaskSpecHandleContainer::BuildTaskArray()
{
	TArray<UDreamTask*> Result;

	for (auto DreamTask : GetHandles())
	{
		Result.Add(DreamTask.GetTask());
	}

	return Result;
}

void FDreamTaskSpecHandleContainer::UpdateHandles(float DeltaTime)
{
	if (GetHandles().IsEmpty())
		ContainerState = EDreamTaskSpecHandleContainerState::Empty;

	int CompletedNumber = 0;

	for (FDreamTaskSpecHandle& Handle : GetHandles())
	{
		Handle.Update(DeltaTime);

		if (Handle.IsCompleted())
		{
			CompletedNumber++;
		}
	}

	if (CompletedNumber >= Handles.Num())
	{
		ContainerState = EDreamTaskSpecHandleContainerState::AllCompleted;
	}
	else if (CompletedNumber > 0)
	{
		ContainerState = EDreamTaskSpecHandleContainerState::SomeCompleted;
	}
	else if (CompletedNumber == 0)
	{
		ContainerState = EDreamTaskSpecHandleContainerState::NoCompleted;
	}
}

void FDreamTaskSpecHandleContainer::ChangeContainerState()
{
	if (ContainerState & (EDreamTaskSpecHandleContainerState::Empty | EDreamTaskSpecHandleContainerState::None)) // 全空
	{
		ContainerState = EDreamTaskSpecHandleContainerState::NoCompleted;
	}
	else if (ContainerState & EDreamTaskSpecHandleContainerState::AllCompleted) // 全满
	{
		ContainerState = EDreamTaskSpecHandleContainerState::SomeCompleted;
	}
	else if (ContainerState & EDreamTaskSpecHandleContainerState::SomeCompleted) // 一些
	{
		ContainerState = EDreamTaskSpecHandleContainerState::SomeCompleted;
	}
}

bool FDreamTaskSpecHandleContainer::IsAllCompleted() const
{
	return ContainerState & EDreamTaskSpecHandleContainerState::AllCompleted;
}

bool FDreamTaskSpecHandleContainer::IsSomeCompleted() const
{
	return ContainerState & EDreamTaskSpecHandleContainerState::SomeCompleted;
}

bool FDreamTaskSpecHandleContainer::IsNoCompleted() const
{
	return ContainerState & EDreamTaskSpecHandleContainerState::NoCompleted;
}

bool FDreamTaskSpecHandleContainer::IsEmpty() const
{
	return ContainerState & EDreamTaskSpecHandleContainerState::Empty;
}
