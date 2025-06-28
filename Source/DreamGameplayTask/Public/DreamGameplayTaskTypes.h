// Copyright 2022 - 2024 Dream Moon Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DreamGameplayTaskTypes.generated.h"

class UDreamTaskConditionTemplate;
class UDreamTaskComponent;
class UDreamTask;

/**
 *  Task State
 */
UENUM(BlueprintType)
enum class EDreamTaskState : uint8
{
	EDTS_Accept = 0 UMETA(DisplayName = "Accept"),
	EDTS_Going = 1 << 0 UMETA(DisplayName = "Going"),
	EDTS_Completed = 1 << 1 UMETA(DisplayName = "Completed"),
	EDTS_Failed = 1 << 2 UMETA(DisplayName = "Failed"),
	EDTS_Timeout = 1 << 3 UMETA(DisplayName = "Timeout"),
};

inline EDreamTaskState operator|(EDreamTaskState A, EDreamTaskState B)
{
	return static_cast<EDreamTaskState>(static_cast<uint8>(A) | static_cast<uint8>(B));
}

inline bool operator&(EDreamTaskState A, EDreamTaskState B)
{
	return static_cast<uint8>(A) & static_cast<uint8>(B);
}

/**
 *  Task Priority
 */
UENUM(BlueprintType)
enum class EDreamTaskPriority : uint8
{
	EDTP_Low = 0 UMETA(DisplayName = "Low"),
	EDTP_Normal = 1 UMETA(DisplayName = "Normal"),
	EDTP_High = 2 UMETA(DisplayName = "High"),
	EDTP_Urgent = 3 UMETA(DisplayName = "Urgent"),
};

/**
 *  Task Conditional Completion Mode
 */
UENUM(BlueprintType)
enum class EDreamTaskConditionalCompletionMode : uint8
{
	EDTCCM_All = 0 UMETA(DisplayName = "All"),
	EDTCCM_Any = 1 UMETA(DisplayName = "Any"),
	EDTCCM_Custom = 2 UMETA(DisplayName = "Custom"),
};

USTRUCT(BlueprintType)
struct FDreamTaskSaveSingle
{
	GENERATED_BODY()

public:
	FDreamTaskSaveSingle()
	{
	};
	FDreamTaskSaveSingle(const UDreamTask* Task);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGuid TaskGuid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, int32> TaskProgress;
};

USTRUCT(BlueprintType)
struct FDreamTaskSaveData
{
	GENERATED_BODY()

public:
	FDreamTaskSaveData()
	{
	};
	FDreamTaskSaveData(const TArray<UDreamTask*>& InSaveArray);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDreamTaskSaveSingle> SaveData;
};

/**
 * @struct FDreamTaskSpecHandle
 * @brief 用于管理和跟踪任务状态的蓝图可访问结构体
 * 
 * 该结构体包含任务的基本信息、时间记录和状态查询功能，
 * 适用于需要跟踪任务执行情况的场景。
 */
USTRUCT(BlueprintType)
struct FDreamTaskSpecHandle
{
	GENERATED_BODY()

public:
	FDreamTaskSpecHandle();

	FDreamTaskSpecHandle(TObjectPtr<UDreamTask> InTask, FDateTime InStartTime);

	static const FDreamTaskSpecHandle& InvalidHandle(); 

public:
	// 用于标记此Handle是否有效
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGuid Guid;

	// 任务
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UDreamTask> Task = nullptr;

	// 拥有任务的组件
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UDreamTaskComponent> OwnerComponent = nullptr;

	// 任务开始时间
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime StartTime = 0.f;

	// 任务运行时间
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTimespan RunningTime = 0.f;

	// 任务结束时间
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime EndTime = 0.f;

public:
	UDreamTask* GetTask() const { return Task; }
	UDreamTaskComponent* GetOwnerComponent() const { return OwnerComponent; }
	FGuid GetGuid() const { return Guid; }
	EDreamTaskState GetTaskState() const;

	FTimespan GetRunningTime() const;
	FDateTime GetStartTime() const;
	FDateTime GetEndTime() const;

	bool IsUseMaximumTime() const;
	bool IsTimeout() const;
	bool IsCompleted() const;
	bool IsFailed() const;
	bool IsValid() const;

	void SetRunningTime(FTimespan InTime);
	void SetStartTime(FDateTime InTime);
	void SetEndTime(FDateTime InTime);
	void AddTime(float InSeconds);
	void AddTime(FTimespan InTime);

	void Update(float DeltaTime);

public:
	bool operator==(const FDreamTaskSpecHandle& Other) const;
	bool operator==(const UDreamTask* Other) const;
	bool operator==(const FName& InName) const;
	bool operator==(const TSubclassOf<UDreamTask>& Class) const;
};

/**
 * @struct FDreamTaskSpecHandleContainer
 * @brief 蓝图可用的结构体，用于管理一组FDreamTaskSpecHandle对象
 * 
 * 该结构体包含一个可编辑的FDreamTaskSpecHandle数组，并提供相关操作方法
 */
USTRUCT(BlueprintType)
struct FDreamTaskSpecHandleContainer
{
	GENERATED_BODY()

	FDreamTaskSpecHandleContainer()
	{
	}

	FDreamTaskSpecHandleContainer(const FDreamTaskSpecHandleContainer& Other);

private:
	UPROPERTY()
	TArray<FDreamTaskSpecHandle> Handles;

public:
	TArray<FDreamTaskSpecHandle>& GetHandles();
	// 添加 Handle 会自动初始化 StartTime 和 Guid
	FDreamTaskSpecHandle& AddHandle(FDreamTaskSpecHandle InHandle);
	// 移除 Handle
	bool RemoveHandle(const FDreamTaskSpecHandle& InHandle);
	// 查找 Handle
	const FDreamTaskSpecHandle& FindHandle(UDreamTask* InTask);
	// 查找 Handle
	const FDreamTaskSpecHandle& FindHandle(TSubclassOf<UDreamTask> InClass);
	// 查找 Handle
	const FDreamTaskSpecHandle& FindHandle(FName InName);
	// 获取 Handle Index 没有返回 INDEX_NONE
	int32 FindHandleIndex(const FDreamTaskSpecHandle& InHandle);
	// 清空所有 Handle
	void ClearHandles();
	// 设置 Handles
	int SetHandles(const TArray<FDreamTaskSpecHandle>& InHandles);

public:
	// 更新所有 Handle
	void UpdateHandles(float DeltaTime);
};

USTRUCT(BlueprintType)
struct FDreamTaskCompletedCondition
{
	GENERATED_BODY()

public:
	// 任务条件
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced)
	TMap<FName, UDreamTaskConditionTemplate*> Conditions;

	// 任务的条件完成模式
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition)
	EDreamTaskConditionalCompletionMode CompletionMode = EDreamTaskConditionalCompletionMode::EDTCCM_All;

	// 自定义条件数量
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Condition, meta = (EditCondition = "CompletionMode == EDreamTaskConditionalCompletionMode::EDTCCM_Custom", EditConditionHides))
	int CustomConditionCount = 1;

public:
	UDreamTaskConditionTemplate* GetConditionByName(FName InConditionName) const;
	TArray<UDreamTaskConditionTemplate*> GetConditions();
	bool UpdateConditionByName(FName InConditionName);
	int ConditionCompletedCount() const;
	bool IsConditionsCompleted() const;
	void Reset();
};
