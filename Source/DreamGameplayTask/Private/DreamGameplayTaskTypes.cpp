#include "DreamGameplayTaskTypes.h"

#include "DreamGameplayTaskBlueprintLibrary.h"
#include "Classes/DreamTask.h"

FDreamTaskSaveSingle::FDreamTaskSaveSingle(const UDreamTask* Task)
{
	if (!Task) return;
	
	TaskGuid = UDreamGameplayTaskBlueprintLibrary::GetDreamTaskGuid(TSubclassOf<UDreamTask>(Task->GetClass()));
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