// Copyright 2022 - 2024 Dream Moon Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
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
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTaskListDelegate, const TArray<UDreamTask*>&, TaskList);

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
	UPROPERTY(BlueprintReadOnly, Category = Data)
	TArray<UDreamTask*> TaskList;

public:
	/**
	 * 给予任务 (Class)
	 * @param InClass 要给予的任务类
	 * @param InPayload 任务的载荷
	 * @return 给予的任务
	 */
	UFUNCTION(BlueprintCallable, Category = Functions, meta=(DeterminesOutputType = InClass))
	UDreamTask* GiveTaskByClass(TSubclassOf<UDreamTask> InClass, UObject* InPayload = nullptr);

	/**
	 * 初始化任务列表
	 * @param NewList 新的任务列表
	 */
	UFUNCTION(BlueprintCallable, Category = Functions)
	void InitializeTaskList(const TArray<UDreamTask*>& NewList);

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
	 * @param InRemoveTaskClass 要移除的任务类
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
	 * 更新任务 (Class) (ConditionNames)
	 * @param InTaskClass 要更新的任务类
	 * @param InConditionNames 要更新的任务条件名称
	 */
	UFUNCTION(BlueprintCallable, Category = Functions)
	void UpdateTaskOfConditionNamesByClass(TSubclassOf<UDreamTask> InTaskClass, const TArray<FName>& InConditionNames);

	/**
	 * 更新任务 (Class) (ConditionName)
	 * @param InTaskClass 要更新的任务类
	 * @param InConditionName 要更新的任务条件名称
	 */
	UFUNCTION(BlueprintCallable, Category = Functions)
	void UpdateTaskOfConditionNameByClass(TSubclassOf<UDreamTask> InTaskClass, FName InConditionName);

	/**
	 * 更新任务 (Name) (ConditionNames)
	 * @param TaskName 要更新的任务名称
	 * @param InConditionNames 要更新的任务条件名称
	 */
	UFUNCTION(BlueprintCallable, Category = Functions)
	void UpdateTaskOfConditionNamesByName(FName TaskName, const TArray<FName>& InConditionNames);

	/**
	 * 更新任务 (Name) (ConditionName)
	 * @param TaskName 要更新的任务名称
	 * @param InConditionName 要更新的任务条件名称
	 */
	UFUNCTION(BlueprintCallable, Category = Functions)
	void UpdateTaskOfConditionNameByName(FName TaskName, FName InConditionName);

	/**
	 * 获取任务列表
	 * @return 任务列表
	 */
	UFUNCTION(BlueprintPure, Category = Functions)
	TArray<UDreamTask*>& GetTaskList() { return TaskList; }

	/**
	 * 获取任务 (Class)
	 * @param InTaskClass 要获取的任务类
	 * @return 获取到的任务
	 */
	UFUNCTION(BlueprintPure, Category = Functions)
	UDreamTask* GetTaskByClass(TSubclassOf<UDreamTask> InTaskClass);

	/**
	 * 获取任务 (Name)
	 * @param InTaskName 要获取的任务名称
	 * @return 获取到的任务
	 */
	UFUNCTION(BlueprintPure, Category = Functions)
	UDreamTask* GetTaskByName(FName InTaskName);
};
