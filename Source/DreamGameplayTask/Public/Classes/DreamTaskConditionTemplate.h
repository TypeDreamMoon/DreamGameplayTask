﻿// Copyright 2022 - 2024 Dream Moon Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DreamTaskConditionTemplate.generated.h"

class UDreamTask;
/**
 * Dream Task Condition Template
 */
UCLASS(Blueprintable, Abstract, EditInlineNew)
class DREAMGAMEPLAYTASK_API UDreamTaskConditionTemplate : public UObject
{
	GENERATED_BODY()
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTaskConditionNumDelegate, int, Num);

public:
	// 条件内部名称
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Data)
	FName ConditionName = FName(TEXT("00"));

	// 条件显示名称
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Data)
	FText ConditionDisplayName = FText::FromString(TEXT("New Condition"));

	// 条件描述
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Data)
	FText ConditionDesc = FText::FromString(TEXT("This is a new condition."));

	// 条件数量
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Data)
	int32 Count = 0;

	// 完成数量
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Data)
	int32 CompletedCount = 1;

	// 条件拥有者
	UPROPERTY(BlueprintReadOnly, Category = Data)
	UDreamTask* OwnerTask = nullptr;

public:
	// 条件完成实现事件
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, DisplayName = "CompletedCondition", Category = Functions)
	bool BP_CompletedCondition();
		bool BP_CompletedCondition_Implementation();
	
public:
	// 是否完成
	UFUNCTION(BlueprintPure, Category = Functions)
	bool IsCompleted() const;

	// 获取数量
	UFUNCTION(BlueprintPure, Category = Functions)
	int32 GetCount() const { return Count; }

	// 获取完成数量
	UFUNCTION(BlueprintPure, Category = Functions)
	int32 GetCompletedCount() const { return CompletedCount; }

	// 设置数量
	UFUNCTION(BlueprintCallable, Category = Functions)
	void SetCount(int32 InValue);

	// 更新条件
	UFUNCTION(BlueprintCallable, Category = Functions)
	void UpdateByName(TArray<FName> Names);

	// 更新条件
	UFUNCTION(BlueprintCallable, Category = Functions)
	void UpdateByClass(const TArray<TSubclassOf<UDreamTaskConditionTemplate>>& Classes);

public:
	// 条件更新事件
	UPROPERTY(BlueprintAssignable, Category = Delegates)
	FTaskConditionNumDelegate OnConditionUpdate;
};
