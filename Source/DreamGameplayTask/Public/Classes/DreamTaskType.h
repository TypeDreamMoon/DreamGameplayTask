// Copyright 2022 - 2024 Dream Moon Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/Texture2D.h"
#include "DreamTaskType.generated.h"

/**
 * 任务类型数据
 */
UCLASS(Category = "Task Types")
class DREAMGAMEPLAYTASK_API UDreamTaskType : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	// 任务类型名称
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Task Type Data")
	FName TypeName = FName(TEXT("TaskType"));

	// 任务类型显示名称
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Task Type Data")
	FText TypeDisplayName = FText::FromString(TEXT("New Task Type"));

	// 任务类型图标
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Task Type Assets")
	TSoftObjectPtr<UTexture2D> TypeIcon = nullptr;
};
