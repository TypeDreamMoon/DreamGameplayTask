// Fill out your copyright notice in the Description page of Project Settings.


#include "DreamGameplayTaskSetting.h"

UDreamGameplayTaskSetting::UDreamGameplayTaskSetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

UDreamGameplayTaskSetting* UDreamGameplayTaskSetting::Get()
{
	return GetMutableDefault<UDreamGameplayTaskSetting>();
}
