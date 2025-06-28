// Copyright 2022 - 2024 Dream Moon Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DreamGameplayTaskTypes.h"
#include "DreamTask.h"
#include "Components/ActorComponent.h"
#include "DreamTaskComponent.generated.h"

class UDreamTask;

/**
 * Dream Gameplay Task Manager Component
 */
UCLASS(ClassGroup=(DreamPlugin), meta=(BlueprintSpawnableComponent))
class DREAMGAMEPLAYTASK_API UDreamTaskComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UDreamTaskComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

public:
	virtual void BeginPlay() override;

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTaskListDelegate, const FDreamTaskSpecHandleContainer&, TaskData);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTaskDelegate, UDreamTask*, Task);

public:
	// 任务列表更新时
	UPROPERTY(BlueprintAssignable, Category = Delegates)
	FTaskListDelegate OnTaskListChanged;

	// 任务更新时
	UPROPERTY(BlueprintAssignable, Category = Delegates)
	FTaskDelegate OnTaskUpdate;

	// 任务状态更新时
	UPROPERTY(BlueprintAssignable, Category = Delegates)
	FTaskDelegate OnTaskStateUpdate;

public:
	// 任务列表
	UPROPERTY(BlueprintReadOnly)
	FDreamTaskSpecHandleContainer TaskData;

public:
	/**
	 * 给予任务 (Class)
	 * @param InClass 要给予的任务类
	 * @param InPayload 任务的载荷
	 * @return 给予的任务
	 */
	UFUNCTION(BlueprintCallable, Category = Functions, meta=(DeterminesOutputType = InClass))
	FDreamTaskSpecHandle GiveTaskByClass(TSubclassOf<UDreamTask> InClass, UObject* InPayload = nullptr);

	/**
	 * 初始化任务列表
	 * @param NewList 新的任务列表
	 */
	UFUNCTION(BlueprintCallable, Category = Functions)
	void InitializeTaskList(FDreamTaskSpecHandleContainer NewList);

	/**
	 * 任务类是否在列表内
	 * @param InCheckTaskClass 要检测的任务类别
	 * @return 任务列表内是否有这个类
	 */
	UFUNCTION(BlueprintPure, Category = Functions)
	bool HasTaskByClass(TSubclassOf<UDreamTask> InCheckTaskClass);

	/**
	 * 任务名称是否在列表内
	 * @param InCheckTaskName 要检测的任务名称
	 * @return 任务列表内是否有这个任务名称
	 */
	UFUNCTION(BlueprintPure, Category = Functions)
	bool HasTaskByName(FName InCheckTaskName);

	/**
	 * 移除任务 (Class)
	 * @param InRemoveTaskName 要移除的任务名称
	 * @return 是否成功移除
	 */
	UFUNCTION(BlueprintCallable, Category = Functions)
	bool RemoveTaskByClass(TSubclassOf<UDreamTask> InRemoveTaskClass);

	/**
	 * 移除任务 (Name)
	 * @param InRemoveTaskName 要移除的任务名称
	 * @return 是否成功移除
	 */
	UFUNCTION(BlueprintCallable, Category = Functions)
	bool RemoveTaskByName(FName InRemoveTaskName);

	/**
	 * 更新任务 (Name) (ConditionNames)
	 * @param TaskName 要更新的任务名称
	 * @param InConditionNames 要更新的任务条件名称
	 */
	UFUNCTION(BlueprintCallable, Category = Functions)
	void UpdateTask(FName TaskName, const TArray<FName>& InConditionNames);

	/**
	 * 获取任务 (Class) (ConditionNames)
	 * @param InClass 要更新的任务类
	 * @param InConditionNames 要更新的任务条件名称
	 */
	UFUNCTION(BlueprintCallable, Category = Functions)
	void UpdateTaskByClass(TSubclassOf<UDreamTask> InClass, const TArray<FName>& InConditionNames);

	/**
	 * 获取任务列表
	 * @return 任务列表
	 */
	UFUNCTION(BlueprintPure, Category = Functions)
	TArray<FDreamTaskSpecHandle>& GetTaskList() { return TaskData.GetHandles(); }

	/**
	 * 获取任务 (Class)
	 * @param InTaskClass 要获取的任务类
	 * @return 获取到的任务
	 */
	UFUNCTION(BlueprintPure, Category = Functions)
	const FDreamTaskSpecHandle& GetTaskByClass(TSubclassOf<UDreamTask> InTaskClass);

	/**
	 * 获取任务 (Name)
	 * @param InTaskName 要获取的任务名称
	 * @return 获取到的任务
	 */
	UFUNCTION(BlueprintPure, Category = Functions)
	const FDreamTaskSpecHandle& GetTaskByName(FName InTaskName);

private:
	void Updater();

public:
	template <typename T>
	T* NewTask(TSubclassOf<T> Class, UObject* Payload = nullptr)
	{
		if (Class->IsChildOf(UDreamTask::StaticClass()))
		{
			UDreamTask* Task = NewObject<UDreamTask>(this, Class);
			Task->InitializeTask(this, Payload);
			return Task;
		}
		else
		{
			return nullptr;
		}
	}
};
