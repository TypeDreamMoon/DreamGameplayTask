// Copyright 2022 - 2025 Dream Moon Team. All Rights Reserved.


#include "DreamGameplayTaskSubsystem.h"

#include "DreamGameplayTaskLog.h"
#include "Classes/DreamTask.h"
#include "DreamGameplayTaskTypes.h"

FDreamTaskSubsystemHandle UDreamGameplayTaskSubsystem::FindHandle(UDreamTask* InFindTask)
{
	for (auto Element : TaskSubsystemHandles)
	{
		if (Element == InFindTask)
			return Element;
	}

	return FDreamTaskSubsystemHandle();
}

FDreamTaskSubsystemHandle UDreamGameplayTaskSubsystem::Push(TObjectPtr<UDreamTask> Task)
{
	if (!Task->bUseCompletionTime)
		return FDreamTaskSubsystemHandle();

	FDreamTaskSubsystemHandle Handle(Task);

	TaskSubsystemHandles.Add(Handle);

	if (!UpdateTimerHandle.IsValid())
	{
		GWorld->GetTimerManager().SetTimer(UpdateTimerHandle,
		                                   this, &UDreamGameplayTaskSubsystem::UpdateHandles, UPDATE_TIME, true);
	}

	return Handle;
}

void UDreamGameplayTaskSubsystem::UpdateHandles()
{
	if (TaskSubsystemHandles.IsEmpty())
	{
		GWorld->GetTimerManager().ClearTimer(UpdateTimerHandle);
		UpdateTimerHandle = FTimerHandle();
		DGT_LOG(Log, TEXT("Exit Update Handle."));
		return;
	}

	for (auto& Element : TaskSubsystemHandles)
	{
		if (Element.GetIsCompleted()) // 任务完成
		{
			TaskSubsystemHandles.Remove(Element);
			TaskSubsystemCompletedHandles.Add(Element);
			continue;
		}

		Element.SetTime(Element.GetCurrentTime() - UPDATE_TIME);
	}

	// Clean

	TArray<FDreamTaskSubsystemHandle> CleanHandles;
	
	for (auto Element : TaskSubsystemHandles)
	{
		if (Element.TaskIsFailed())
		{
			Element.GetTask()->SetTaskState(EDreamTaskState::EDTS_Failed);
			CleanHandles.Add(Element);
		}
	}

	for (auto Handle : CleanHandles)
	{
		TaskSubsystemHandles.Remove(Handle);
	}
}
