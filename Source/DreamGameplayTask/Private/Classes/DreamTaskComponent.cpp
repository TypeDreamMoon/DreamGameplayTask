// Copyright 2022 - 2024 Dream Moon Team. All Rights Reserved.


#include "Classes/DreamTaskComponent.h"

#include "DreamGameplayTaskLog.h"
#include "DreamGameplayTaskSetting.h"
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

void UDreamTaskComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

FDreamTaskSpecHandle UDreamTaskComponent::GiveTaskByClass(TSubclassOf<UDreamTask> InClass, UObject* InPayload)
{
	if (!InClass) return FDreamTaskSpecHandle();

	if (!HasTaskByClass(InClass))
	{
		UDreamTask* Task = NewTask<UDreamTask>(InClass);
		Task->InitializeTask(this, InPayload);
		FDreamTaskSpecHandle& SpecHandle = TaskData.AddHandle(FDreamTaskSpecHandle(Task, FDateTime::Now()));
		OnTaskListChanged.Broadcast(TaskData);
		OnTaskListChangedDelegate.Broadcast(TaskData);
		return SpecHandle;
	}

	return FDreamTaskSpecHandle();
}

void UDreamTaskComponent::InitializeTaskList(FDreamTaskSpecHandleContainer NewList)
{
	TaskData.ClearHandles();
	TaskData.SetHandles(NewList.GetHandles());
	OnTaskListChanged.Broadcast(TaskData);
	OnTaskListChangedDelegate.Broadcast(TaskData);
}

bool UDreamTaskComponent::HasTaskByClass(TSubclassOf<UDreamTask> InCheckTaskClass)
{
	return GetTaskList().ContainsByPredicate([InCheckTaskClass](const FDreamTaskSpecHandle& Handle)
	{
		return Handle == InCheckTaskClass;
	});
}

bool UDreamTaskComponent::HasTaskByName(FName InCheckTaskName)
{
	return GetTaskList().ContainsByPredicate([InCheckTaskName](const FDreamTaskSpecHandle& Handle)
	{
		return Handle == InCheckTaskName;
	});
}

bool UDreamTaskComponent::RemoveTaskByClass(TSubclassOf<UDreamTask> InRemoveTaskClass)
{
	for (auto Element : GetTaskList())
	{
		if (Element == InRemoveTaskClass)
		{
			TaskData.RemoveHandle(Element);
			OnTaskListChanged.Broadcast(TaskData);
			OnTaskListChangedDelegate.Broadcast(TaskData);
			return true;
		}
	}

	return false;
}

bool UDreamTaskComponent::RemoveTaskByName(FName InRemoveTaskName)
{
	for (auto Element : GetTaskList())
	{
		if (Element == InRemoveTaskName)
		{
			TaskData.RemoveHandle(Element);
			OnTaskListChanged.Broadcast(TaskData);
			OnTaskListChangedDelegate.Broadcast(TaskData);
			return true;
		}
	}

	return false;
}

void UDreamTaskComponent::UpdateTask(FName TaskName, const TArray<FName>& InConditionNames)
{
	TaskData.FindHandle(TaskName).GetTask()->UpdateTaskByName(InConditionNames);
}

void UDreamTaskComponent::UpdateTaskByClass(TSubclassOf<UDreamTask> InClass, const TArray<FName>& InConditionNames)
{
	TaskData.FindHandle(InClass).GetTask()->UpdateTaskByName(InConditionNames);
}

const FDreamTaskSpecHandle& UDreamTaskComponent::GetTaskByClass(TSubclassOf<UDreamTask> InTaskClass)
{
	if (!HasTaskByClass(InTaskClass)) return FDreamTaskSpecHandle::InvalidHandle();

	return *GetTaskList().FindByPredicate([InTaskClass](const FDreamTaskSpecHandle& Handle)
	{
		return Handle == InTaskClass;
	});
}

const FDreamTaskSpecHandle& UDreamTaskComponent::GetTaskByName(FName InTaskName)
{
	if (!HasTaskByName(InTaskName)) return FDreamTaskSpecHandle::InvalidHandle();

	return *GetTaskList().FindByPredicate([InTaskName](const FDreamTaskSpecHandle& Handle)
	{
		return Handle == InTaskName;
	});
}

void UDreamTaskComponent::ActiveTimer()
{
	DGT_DEBUG_LOG(Log, TEXT("Timer Active."))
	GetOwner()->GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UDreamTaskComponent::Updater, TimerDeltaTime, true);
}

void UDreamTaskComponent::Updater()
{
	DGT_DEBUG_LOG(Log, TEXT("Update Handles."))
	TaskData.UpdateHandles(TimerDeltaTime);

	if (bTimerAutomation)
	{
		if (TaskData.IsAllCompleted() || TaskData.IsEmpty())
		{
			DGT_DEBUG_LOG(Log, TEXT("Handle is All Completed or Empty. TimerAutomation Have helped turn off the timer."))
			GetOwner()->GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
		}
	}
}
