// Fill out your copyright notice in the Description page of Project Settings.


#include "Classes/DreamTaskConditionTemplate.h"

#include "Classes/DreamTask.h"

bool UDreamTaskConditionTemplate::BP_CompletedCondition_Implementation()
{
	return IsCompleted();
}

bool UDreamTaskConditionTemplate::IsCompleted() const
{
	return GetCount() >= GetCompletedCount();
}

void UDreamTaskConditionTemplate::SetCount(int32 InValue)
{
	Count = FMath::Clamp(InValue, 0, GetCompletedCount());
	OnConditionUpdate.Broadcast(GetCount());
	if (OwnerTask)
		OwnerTask->BP_TaskConditionUpdate();
}

void UDreamTaskConditionTemplate::Update()
{
	SetCount(GetCount() + 1);
}

void UDreamTaskConditionTemplate::Reset()
{
	SetCount(0);
	OnConditionUpdate.Broadcast(GetCount());
}
