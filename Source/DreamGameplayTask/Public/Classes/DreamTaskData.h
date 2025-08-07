// Copyright 2022 - 2025 Dream Moon Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/Texture2D.h"
#include "DreamTaskData.generated.h"

class UWorld;

/**
 * Custom Task Data
 */
UCLASS(EditInlineNew, Blueprintable, Category = "Task Data")
class DREAMGAMEPLAYTASK_API UDreamTaskData : public UObject
{
	GENERATED_BODY()

public:
	// 任务图标
	UPROPERTY(EditAnywhere, Category = "Task Assets")
	TSoftObjectPtr<UTexture2D> TaskIcon;

	// 任务图片
	UPROPERTY(EditAnywhere, Category = "Task Assets")
	TSoftObjectPtr<UTexture2D> TaskImage;

public:
	// 获取任务图标
	UFUNCTION(BlueprintPure, Category = "Task Functions")
	UTexture2D* GetTaskIcon() const;

	// 获取任务图片
	UFUNCTION(BlueprintPure, Category = "Task Functions")
	UTexture2D* GetTaskImage() const;

public:
	virtual UWorld* GetWorld() const override;
};
