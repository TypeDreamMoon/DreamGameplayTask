#include "DreamGameplayTaskConditionContainer.h"

#include "Classes/DreamTaskConditionTemplate.h"

UDreamTaskConditionTemplate* FDreamTaskConditionContainer::GetConditionByName(FName InConditionName) const
{
	for (auto Element : Conditions)
	{
		if (Element.Key == InConditionName)
		{
			return Element.Value;
		}
	}

	return nullptr;
}

TArray<UDreamTaskConditionTemplate*> FDreamTaskConditionContainer::GetConditions()
{
	TArray<UDreamTaskConditionTemplate*> Result;
	Conditions.GenerateValueArray(Result);
	return Result;
}

bool FDreamTaskConditionContainer::UpdateConditionByName(FName InConditionName)
{
	UDreamTaskConditionTemplate* Condition = GetConditionByName(InConditionName);
	if (Condition)
	{
		Condition->Update();
		return true;
	}
	return false;
}

int FDreamTaskConditionContainer::ConditionCompletedCount() const
{
	int Count = 0;
	for (auto Element : Conditions)
	{
		if (Element.Value->IsCompleted())
		{
			Count++;
		}
		else
		{
			if (Element.Value->MustTaskBeCompleted())
				return TASK_CONDITION_NOT_COMPLETED;
		}
	}

	return Count;
}

bool FDreamTaskConditionContainer::IsConditionsCompleted() const
{
	int CompletedCount = ConditionCompletedCount();

	// 未完成
	if (CompletedCount == TASK_CONDITION_NOT_COMPLETED)
	{
		return false;
	}

	// 自定义
	if (CompletionMode == EDreamTaskConditionalCompletionMode::EDTCCM_Custom)
	{
		return CompletedCount >= CustomConditionCount;
	}

	// 任意
	if (CompletionMode == EDreamTaskConditionalCompletionMode::EDTCCM_Any)
	{
		return CompletedCount > 0;
	}

	// 全部
	if (CompletionMode == EDreamTaskConditionalCompletionMode::EDTCCM_All)
	{
		return CompletedCount == Conditions.Num();
	}

	return false;
}

void FDreamTaskConditionContainer::Reset()
{
	for (TPair<FName, UDreamTaskConditionTemplate*>& Condition : Conditions)
	{
		Condition.Value->Reset();
	}
}
