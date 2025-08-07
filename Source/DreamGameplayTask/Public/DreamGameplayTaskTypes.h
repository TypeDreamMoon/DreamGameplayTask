// Copyright 2022 - 2024 Dream Moon Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DreamGameplayTaskTypes.generated.h"

class UDreamTaskConditionTemplate;
class UDreamTaskComponent;
class UDreamTask;

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



USTRUCT(BlueprintType, Blueprintable, Category = "DreamGameplayTask")
struct FDreamTaskSaveSingle
{
	GENERATED_BODY()

public:
	FDreamTaskSaveSingle()
	{
	};
	FDreamTaskSaveSingle(const UDreamTask* Task);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save")
	FGuid TaskGuid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save")
	TMap<FName, int32> TaskProgress;
};

USTRUCT(BlueprintType, Blueprintable, Category = "DreamGameplayTask")
struct FDreamTaskSaveData
{
	GENERATED_BODY()

public:
	FDreamTaskSaveData()
	{
	};
	FDreamTaskSaveData(const TArray<UDreamTask*>& InSaveArray);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save")
	TArray<FDreamTaskSaveSingle> SaveData;
};
