// Copyright 2022 - 2025 Dream Moon Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DreamGameplayTaskSubsystem.generated.h"

#define UPDATE_TIME 0.1f


class UDreamTask;
struct FDreamTaskSubsystemHandle;
/**
 * World Subsystem
 */
UCLASS()
class DREAMGAMEPLAYTASK_API UDreamGameplayTaskSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	TArray<FDreamTaskSubsystemHandle> TaskSubsystemHandles;

	UPROPERTY(BlueprintReadOnly)
	TArray<FDreamTaskSubsystemHandle> TaskSubsystemCompletedHandles;

public:
	UFUNCTION(BlueprintCallable)
	FDreamTaskSubsystemHandle FindHandle(UDreamTask* InFindTask);

public:
	FDreamTaskSubsystemHandle Push(TObjectPtr<UDreamTask> Task);
	void UpdateHandles();

protected:
	FTimerHandle UpdateTimerHandle;
};
