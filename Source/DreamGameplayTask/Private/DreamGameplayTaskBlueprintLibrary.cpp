// Fill out your copyright notice in the Description page of Project Settings.


#include "DreamGameplayTaskBlueprintLibrary.h"

#include "DreamGameplayTaskSetting.h"
#include "Classes/DreamTask.h"
#include "Classes/DreamTaskComponent.h"

UDreamTaskComponent* UDreamGameplayTaskBlueprintLibrary::GetDreamTaskComponent(AActor* Actor)
{
	return Actor->FindComponentByClass<UDreamTaskComponent>();
}

TSubclassOf<UDreamTask> UDreamGameplayTaskBlueprintLibrary::GetDreamTaskClassByGUID(FGuid Guid)
{
	for (auto Element : GetDefault<UDreamGameplayTaskSetting>()->TaskMapping)
	{
		if (Element.Value == Guid)
		{
			return Element.Key;
		}
	}

	return nullptr;
}

FGuid UDreamGameplayTaskBlueprintLibrary::GetDreamTaskGuid(TSubclassOf<UDreamTask> InTaskClass)
{
	return GetDefault<UDreamGameplayTaskSetting>()->TaskMapping.FindRef(InTaskClass);
}

FDreamTaskSaveData UDreamGameplayTaskBlueprintLibrary::ConstructDreamGameplayTaskSaveData(TArray<UDreamTask*> Tasks)
{
	return FDreamTaskSaveData(Tasks);
}

TArray<UDreamTask*> UDreamGameplayTaskBlueprintLibrary::DestructDreamGameplayTaskSaveData(const FDreamTaskSaveData& Data)
{
	TArray<UDreamTask*> Result;

	for (auto Element : Data.SaveData)
	{
		if (UDreamTask* Task = UDreamTask::Create(GetDreamTaskClassByGUID(Element.TaskGuid), Element.TaskProgress))
		{
			Result.Add(Task);			
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("DreamGameplayTask: Failed to create task with guid %s"), *Element.TaskGuid.ToString());
		}
	}

	return Result;
}

TArray<UDreamTask*> UDreamGameplayTaskBlueprintLibrary::FilterTasksByType(const TArray<UDreamTask*>& Tasks, UDreamTaskType* TaskType)
{
	TArray<UDreamTask*> Result;
	for (UDreamTask* Task : Tasks)
	{
		if (Task->TaskType == TaskType)
		{
			Result.Add(Task);
		}
	}
	return Result;
}

TArray<UDreamTask*> UDreamGameplayTaskBlueprintLibrary::FilterTasksByPriority(const TArray<UDreamTask*>& Tasks, EDreamTaskPriority Priority)
{
	TArray<UDreamTask*> Result;
	for (UDreamTask* Task : Tasks)
	{
		if (Task->TaskPriority == Priority)
		{
			Result.Add(Task);
		}
	}
	return Result;
}

TArray<UDreamTask*> UDreamGameplayTaskBlueprintLibrary::FilterTasksByState(const TArray<UDreamTask*>& Tasks, EDreamTaskState State)
{
	TArray<UDreamTask*> Result;
	for (UDreamTask* Task : Tasks)
	{
		if (Task->TaskState == State)
		{
			Result.Add(Task);
		}
	}
	return Result;
}
