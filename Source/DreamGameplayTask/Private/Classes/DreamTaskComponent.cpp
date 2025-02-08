// Copyright 2022 - 2024 Dream Moon Team. All Rights Reserved.


#include "Classes/DreamTaskComponent.h"
#include "Classes/DreamTask.h"
#include "Classes/DreamTaskConditionTemplate.h"


UDreamTaskComponent::UDreamTaskComponent(const FObjectInitializer& ObjectInitializer)
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UDreamTaskComponent::BeginPlay()
{
	Super::BeginPlay();
}

UDreamTask* UDreamTaskComponent::GiveTaskByClass(TSubclassOf<UDreamTask> InClass, UObject* InPayload)
{
	if (!InClass) return nullptr;

	if (!HasTaskByClass(InClass))
	{
		UDreamTask* NewTask = NewObject<UDreamTask>(GetOwner(), InClass);
		NewTask->InitializeTask(this, InPayload);
		GetTaskList().Add(NewTask);
		OnTaskListChanged.Broadcast(GetTaskList());
		return NewTask;
	}

	return nullptr;
}

void UDreamTaskComponent::InitializeTaskList(const TArray<UDreamTask*>& NewList)
{
	TaskList.Empty();
	TaskList = NewList;
	OnTaskListChanged.Broadcast(GetTaskList());
}

bool UDreamTaskComponent::HasTaskByClass(TSubclassOf<UDreamTask> InCheckTaskClass)
{
	return GetTaskList().ContainsByPredicate([InCheckTaskClass](const UDreamTask* Target)
	{
		return Target->GetClass() == InCheckTaskClass;
	});
}

bool UDreamTaskComponent::HasTaskByName(FName InCheckTaskName)
{
	return GetTaskList().ContainsByPredicate([InCheckTaskName](const UDreamTask* Target)
	{
		return Target->GetTaskName() == InCheckTaskName;
	});
}

bool UDreamTaskComponent::RemoveTaskByClass(TSubclassOf<UDreamTask> InRemoveTaskClass)
{
	for (auto Element : GetTaskList())
	{
		if (Element->GetClass() == InRemoveTaskClass)
		{
			GetTaskList().Remove(Element);
			OnTaskListChanged.Broadcast(GetTaskList());
			return true;
		}
	}

	return false;
}

bool UDreamTaskComponent::RemoveTaskByName(FName InRemoveTaskName)
{
	for (auto Element : GetTaskList())
	{
		if (Element->GetTaskName() == InRemoveTaskName)
		{
			GetTaskList().Remove(Element);
			OnTaskListChanged.Broadcast(GetTaskList());
			return true;
		}
	}

	return false;
}

void UDreamTaskComponent::UpdateTaskOfConditionNamesByClass(TSubclassOf<UDreamTask> InTaskClass, const TArray<FName>& InConditionNames)
{
	if (InTaskClass)
	{
		GetTaskByClass(InTaskClass)->UpdateTaskByName(InConditionNames);
	}
}

void UDreamTaskComponent::UpdateTaskOfConditionNameByClass(TSubclassOf<UDreamTask> InTaskClass, FName InConditionName)
{
	if (InTaskClass)
	{
		GetTaskByClass(InTaskClass)->UpdateTaskByName(TArray<FName>{InConditionName});
	}
}

void UDreamTaskComponent::UpdateTaskOfConditionNamesByName(FName TaskName, const TArray<FName>& InConditionNames)
{
	GetTaskByName(TaskName)->UpdateTaskByName(InConditionNames);
}

void UDreamTaskComponent::UpdateTaskOfConditionNameByName(FName TaskName, FName InConditionName)
{
	GetTaskByName(TaskName)->UpdateTaskByName(TArray<FName>{InConditionName});
}

UDreamTask* UDreamTaskComponent::GetTaskByClass(TSubclassOf<UDreamTask> InTaskClass)
{
	if (!HasTaskByClass(InTaskClass)) return nullptr;

	return *GetTaskList().FindByPredicate([InTaskClass](const UDreamTask* Target)
	{
		return Target->GetClass() == InTaskClass;
	});
}

UDreamTask* UDreamTaskComponent::GetTaskByName(FName InTaskName)
{
	if (!HasTaskByName(InTaskName)) return nullptr;

	return *GetTaskList().FindByPredicate([InTaskName](const UDreamTask* Target)
	{
		return Target->GetTaskName() == InTaskName;
	});
}
