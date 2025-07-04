// Copyright 2022 - 2025 Dream Moon Team. All Rights Reserved.


#include "Classes/DreamTaskData.h"

UTexture2D* UDreamTaskData::GetTaskIcon() const
{
	return TaskIcon.LoadSynchronous();
}

UTexture2D* UDreamTaskData::GetTaskImage() const
{
	return TaskImage.LoadSynchronous();
}

UWorld* UDreamTaskData::GetWorld() const
{
	return GWorld;
}
