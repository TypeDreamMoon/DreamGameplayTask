// Copyright 2022 - 2024 Dream Moon Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DreamGameplayTaskTypes.generated.h"

class UDreamTask;
/**
 *  Task State
 */
UENUM(BlueprintType)
enum class EDreamTaskState : uint8
{
	EDTS_Accept			= 0		UMETA(DisplayName = "Accept"),
	EDTS_Going			= 1		UMETA(DisplayName = "Going"),
	EDTS_Completed		= 2		UMETA(DisplayName = "Completed"),
	EDTS_Failed			= 3		UMETA(DisplayName = "Failed"),
};

/**
 *  Task Priority
 */
UENUM(BlueprintType)
enum class EDreamTaskPriority : uint8
{
	EDTP_Low			= 0		UMETA(DisplayName = "Low"),
	EDTP_Normal			= 1		UMETA(DisplayName = "Normal"),
	EDTP_High			= 2		UMETA(DisplayName = "High"),
	EDTP_Urgent			= 3		UMETA(DisplayName = "Urgent"),
};

/**
 *  Task Conditional Completion Mode
 */
UENUM(BlueprintType)
enum class EDreamTaskConditionalCompletionMode : uint8
{
	EDTCCM_All			= 0		UMETA(DisplayName = "All"),
	EDTCCM_Any			= 1		UMETA(DisplayName = "Any"),
	EDTCCM_Custom		= 2		UMETA(DisplayName = "Custom"),
};

USTRUCT(BlueprintType)
struct FDreamTaskSaveSingle
{
	GENERATED_BODY()
public:
	FDreamTaskSaveSingle() {};
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
	FDreamTaskSaveData() {};
	FDreamTaskSaveData(const TArray<UDreamTask*>& InSaveArray);
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDreamTaskSaveSingle> SaveData;
};
