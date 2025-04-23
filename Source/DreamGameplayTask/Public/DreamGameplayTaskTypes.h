// Copyright 2022 - 2024 Dream Moon Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DreamGameplayTaskTypes.generated.h"

class UDreamTaskComponent;
class UDreamTask;
/**
 *  Task State
 */
UENUM(BlueprintType)
enum class EDreamTaskState : uint8
{
	EDTS_Accept = 0 UMETA(DisplayName = "Accept"),
	EDTS_Going = 1 UMETA(DisplayName = "Going"),
	EDTS_Completed = 2 UMETA(DisplayName = "Completed"),
	EDTS_Failed = 3 UMETA(DisplayName = "Failed"),
};

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


USTRUCT(BlueprintType)
struct FDreamTaskSubsystemHandle
{
	GENERATED_BODY()

public:
	FDreamTaskSubsystemHandle()
	{
	}

	FDreamTaskSubsystemHandle(TObjectPtr<UDreamTask> InTask);

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
	float Time = 0.f;

public:
	UDreamTask* GetTask() const { return Task; }
	UDreamTaskComponent* GetOwnerComponent() const { return OwnerComponent; }
	FGuid GetGuid() const { return Guid; }
	
	// 获取任务完成时间
	float GetCompletionTime() const;
	// 获取当前时间
	float GetCurrentTime() const;
	bool GetIsCompleted() const;
	bool IsValid() const;
	void SetTime(float NewTime);
	bool TaskIsFailed() const;
	FString ToString();

public:
	bool operator==(const FDreamTaskSubsystemHandle& Other) const;
	bool operator==(const UDreamTask* Other) const;
};
