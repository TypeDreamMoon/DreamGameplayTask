// Fill out your copyright notice in the Description page of Project Settings.


#include "DreamGameplayTaskEditorSetting.h"
#if WITH_EDITOR
#include "ISettingsModule.h"
#endif

UDreamGameplayTaskEditorSetting* UDreamGameplayTaskEditorSetting::Get()
{
	return GetMutableDefault<UDreamGameplayTaskEditorSetting>();
}

void UDreamGameplayTaskEditorSetting::Register()
{
#if WITH_EDITOR
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		// Register Setting Page
		SettingsModule->RegisterSettings(
			"Editor",
			"DreamPlugin",
			"TaskPluginEditorSetting",
			FText::FromString(TEXT("Task Editor Settings")),
			FText::FromString(TEXT("Task Editor Settings")),
			GetMutableDefault<UDreamGameplayTaskEditorSetting>()
		);
	}
#endif
}

void UDreamGameplayTaskEditorSetting::Unregistered()
{
#if WITH_EDITOR
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Editor", "DreamPlugin", "TaskPluginEditorSetting");
	}
#endif
}
