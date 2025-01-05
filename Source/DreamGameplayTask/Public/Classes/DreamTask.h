// Copyright 2022 - 2024 Dream Moon Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DreamGameplayTaskTypes.h"
#include "UObject/Object.h"
#include "DreamTask.generated.h"

class UDreamTaskConditionTemplate;
class UDreamTaskType;
class UDreamTaskComponent;
/**
 * 
 */
UCLASS(Blueprintable)
class DREAMGAMEPLAYTASK_API UDreamTask : public UObject
{
	GENERATED_BODY()
public:
	UDreamTask() {}

public:
	/**
	 * 初始化任务
	 * @param InOwnerComponent 任务的拥有组件
	 * @param InPayload 额外数据
	 */
	virtual void InitializeTask(UDreamTaskComponent* InOwnerComponent, UObject* InPayload = nullptr);
public:
	// 任务的管理组件
	UPROPERTY(BlueprintReadOnly, Category = System)
	TObjectPtr<UDreamTaskComponent> OwnerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Task)
	FName TaskName = FName(TEXT("Task"));
	
	// 任务的名称
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Task)
	FText TaskDisplayName = FText::FromString(TEXT("NewTask"));

	// 任务的描述
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Task)
	FText TaskDesc = FText::FromString(TEXT("This is a new task."));

	// 任务的类型
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Task)
	UDreamTaskType* TaskType = nullptr;

	// 子任务
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Task)
	TArray<TSubclassOf<UDreamTask>> SubTasks;

	// 相关的Actor
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Task)
	TArray<TSubclassOf<AActor>> RelatedActorsClasses;

	// 任务的优先级
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Task)
	EDreamTaskPriority TaskPriority = EDreamTaskPriority::EDTP_Normal;

	// 任务的条件完成模式
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition)
	EDreamTaskConditionalCompletionMode TaskConditionalCompletionMode = EDreamTaskConditionalCompletionMode::EDTCCM_All;

	// 自定义条件数量
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition, meta = (EditCondition = "TaskConditionalCompletionMode==EDreamTaskConditionalCompletionMode::EDTCCM_Custom", EditConditionHides))
	int CustomConditionCount = 1;

	// 任务的条件
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced, Category= Condition)
	TArray<UDreamTaskConditionTemplate*> TaskConditions;
	
	// 任务的状态
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = State)
	EDreamTaskState TaskState = EDreamTaskState::EDTS_Accept;

	// 任务的额外数据 此数据无法保存
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Data)
	TObjectPtr<UObject> Payload = nullptr;

public:
	// 获取条件名称
	UFUNCTION(BlueprintPure, Category = Functions)
	FName GetTaskName() const { return TaskName; }

	UFUNCTION(BlueprintPure, Category = Functions)
	FText GetTaskDisplayName() const { return TaskDisplayName; }

	UFUNCTION(BlueprintPure, Category = Functions)
	FText GetTaskDesc() const { return TaskDesc; }

	UFUNCTION(BlueprintPure, Category = Functions)
	UDreamTaskType* GetTaskType() const { return TaskType; }

	UFUNCTION(BlueprintPure, Category = Functions)
	EDreamTaskState GetTaskState() const { return TaskState; }

	UFUNCTION(BlueprintPure, Category = Functions)
	UDreamTaskComponent* GetOwnerComponent() const { return OwnerComponent; }

	UFUNCTION(BlueprintPure, Category = Functions)
	UObject* GetPayload() const { return Payload; }
	
	// 获取任务条件列表
	UFUNCTION(BlueprintPure, Category = Functions)
	TArray<UDreamTaskConditionTemplate*>& GetTaskConditions() { return TaskConditions; }

	UFUNCTION(BlueprintPure, Category = Functions)
	TArray<TSubclassOf<UDreamTask>> GetSubTasks() { return SubTasks; }

	/**
	 * 获取条件
	 * @param ConditionName 要获取的条件名称
	 * @return 找到的条件
	 */
	UFUNCTION(BlueprintPure, Category = Functions)
	UDreamTaskConditionTemplate* GetTaskCondition(FName ConditionName);
	
	// 检查任务是否完成
	UFUNCTION(BlueprintPure, Category = Functions)
	bool CheckTaskCompleted();

	// 获取相关Actor
	UFUNCTION(BlueprintPure, Category = Functions)
	TArray<AActor*> GetRelatedActors();

	/**
	 * 更新任务的条件 通过名称
	 * @param ConditionNames 要更新的条件名称
	 */
	UFUNCTION(BlueprintCallable, Category = Functions)
	void UpdateTaskByName(TArray<FName> ConditionNames);

	/**
	 * 更新任务的条件 通过类别
	 * @param ConditionClasses 要更新的条件类别
	 */
	UFUNCTION(BlueprintCallable, Category = Functions)
	void UpdateTaskByClass(TArray<TSubclassOf<UDreamTaskConditionTemplate>> ConditionClasses);

	/**
	 * 设置任务状态
	 * @param NewState 新的任务状态
	 */
	UFUNCTION(BlueprintCallable, Category = Functions)
	void SetTaskState(EDreamTaskState NewState);

	/**
	 * 设置任务进度
	 * @param InValue 任务进度 <任务条件名称, 新的进度>
	 */
	UFUNCTION(BlueprintCallable, Category = Functions)
	void SetTaskConditionProgress(const TMap<FName, int32>& InValue);

	/**
	 * 获取任务进度
	 * @return 任务进度 <任务条件名称, 当前任务进度>
	 */
	UFUNCTION(BlueprintPure, Category = Functions)
	TMap<FName, int32> GetTaskConditionProgress() const;

	/**
	 * 任务是否完成
	 * @return 任务是否完成
	 */
	UFUNCTION(BlueprintCallable, Category = Functions)
	bool IsCompleted() const { return TaskState == EDreamTaskState::EDTS_Completed; }

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTaskDelegate, UDreamTask*, Task);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTaskSimpleDelegate);
public:
	// 任务更新时
	UPROPERTY(BlueprintAssignable, Category = Delegates)
	FTaskDelegate OnTaskUpdate;
	
	// 任务状态更新时
	UPROPERTY(BlueprintAssignable, Category = Delegates)
	FTaskDelegate OnTaskStateUpdate;
	
	// 任务条件更新时
	UPROPERTY(BlueprintAssignable, Category = Delegates)
	FTaskDelegate OnTaskConditionUpdate;
	
	// 任务完成时 
	UPROPERTY(BlueprintAssignable, Category = Delegate)
	FTaskDelegate OnTaskCompleted;

public:
	// 任务初始化时
	UFUNCTION(BlueprintImplementableEvent, Category = Events)
	void BP_TaskInitialize();

	// 任务更新时
	UFUNCTION(BlueprintImplementableEvent, Category = Events)
	void BP_TaskUpdate();

	// 任务条件更新时
	UFUNCTION(BlueprintImplementableEvent, Category = Events)
	void BP_TaskConditionUpdate();

	// 任务完成时
	UFUNCTION(BlueprintImplementableEvent, Category = Events)
	void BP_TaskCompleted();

public:
	static UDreamTask* Create(TSubclassOf<UDreamTask> Class, TMap<FName, int32> Progress);
};
