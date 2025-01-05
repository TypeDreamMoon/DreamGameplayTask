// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DreamGameplayTaskTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DreamGameplayTaskBlueprintLibrary.generated.h"

class UDreamTaskComponent;
class UDreamTaskType;
class UDreamTask;
/**
 * 
 */
UCLASS()
class DREAMGAMEPLAYTASK_API UDreamGameplayTaskBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "DreamGameplayTaskBlueprint")
	static UDreamTaskComponent* GetDreamTaskComponent(AActor* Actor);

	UFUNCTION(BlueprintPure, Category = "DreamGameplayTaskBlueprint")
	static TSubclassOf<UDreamTask> GetDreamTaskClassByGUID(FGuid Guid);

	UFUNCTION(BlueprintCallable, Category = "DreamGameplayTaskBlueprint")
	static FGuid GetDreamTaskGuid(TSubclassOf<UDreamTask> InTaskClass);

	UFUNCTION(BlueprintCallable, Category = "DreamGameplayTaskBlueprint")
	static FDreamTaskSaveData ConstructDreamGameplayTaskSaveData(TArray<UDreamTask*> Tasks);

	UFUNCTION(BlueprintCallable, Category = "DreamGameplayTaskBlueprint")
	static TArray<UDreamTask*> DestructDreamGameplayTaskSaveData(const FDreamTaskSaveData& Data);
	
public:
	UFUNCTION(BlueprintCallable, Category = "DreamGameplayTaskBlueprint")
	static TArray<UDreamTask*> FilterTasksByType(const TArray<UDreamTask*>& Tasks, UDreamTaskType* TaskType);

	UFUNCTION(BlueprintCallable, Category = "DreamGameplayTaskBlueprint")
	static TArray<UDreamTask*> FilterTasksByPriority(const TArray<UDreamTask*>& Tasks, EDreamTaskPriority Priority);

	UFUNCTION(BlueprintCallable, Category = "DreamGameplayTaskBlueprint")
	static TArray<UDreamTask*> FilterTasksByState(const TArray<UDreamTask*>& Tasks, EDreamTaskState State);
};
