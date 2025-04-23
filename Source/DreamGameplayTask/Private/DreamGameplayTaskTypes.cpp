#include "DreamGameplayTaskTypes.h"

#include "DreamGameplayTaskBlueprintLibrary.h"
#include "DreamGameplayTaskLog.h"
#include "Classes/DreamTask.h"

FDreamTaskSaveSingle::FDreamTaskSaveSingle(const UDreamTask* Task)
{
	TaskGuid = UDreamGameplayTaskBlueprintLibrary::GetDreamTaskGuid(Task->StaticClass());
	TaskProgress = Task->GetTaskConditionProgress();
}

FDreamTaskSaveData::FDreamTaskSaveData(const TArray<UDreamTask*>& InSaveArray)
{
	SaveData.Empty();
	for (auto Element : InSaveArray)
	{
		SaveData.Add(FDreamTaskSaveSingle(Element));
	}
}

FDreamTaskSubsystemHandle::FDreamTaskSubsystemHandle(TObjectPtr<UDreamTask> InTask)
{
	Task = InTask;
	OwnerComponent = Task->GetOwnerComponent();
	Time = Task->TaskCompletionTime;
	Guid = FGuid::NewGuid();
}

float FDreamTaskSubsystemHandle::GetCompletionTime() const
{
	return Task->bUseCompletionTime ? Task->TaskCompletionTime : -1.f;
}

float FDreamTaskSubsystemHandle::GetCurrentTime() const
{
	return Time;
}

bool FDreamTaskSubsystemHandle::GetIsCompleted() const
{
	return Task->IsCompleted();
}

bool FDreamTaskSubsystemHandle::IsValid() const
{
	return Guid.IsValid();
}

void FDreamTaskSubsystemHandle::SetTime(float NewTime)
{
	Time = NewTime;
}

bool FDreamTaskSubsystemHandle::TaskIsFailed() const
{
	return Time <= 0.f;
}

FString FDreamTaskSubsystemHandle::ToString()
{
	return FString::Printf(TEXT("Guid: %s, Task: %s, Time: %f"), *Guid.ToString(), *Task->GetName(), Time);
}

bool FDreamTaskSubsystemHandle::operator==(const FDreamTaskSubsystemHandle& Other) const
{
	return Guid == Other.Guid;
}

bool FDreamTaskSubsystemHandle::operator==(const UDreamTask* Other) const
{
	return Task == Other;
}
