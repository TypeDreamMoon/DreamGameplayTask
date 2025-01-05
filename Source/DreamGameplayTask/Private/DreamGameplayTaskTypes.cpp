#include "DreamGameplayTaskTypes.h"

#include "DreamGameplayTaskBlueprintLibrary.h"
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
