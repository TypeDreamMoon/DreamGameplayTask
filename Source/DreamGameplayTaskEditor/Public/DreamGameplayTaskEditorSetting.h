// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DreamGameplayTaskEditorSetting.generated.h"

/**
 * 
 */
UCLASS(Config = DreamGameplayTaskEditor, DefaultConfig)
class DREAMGAMEPLAYTASKEDITOR_API UDreamGameplayTaskEditorSetting : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	static UDreamGameplayTaskEditorSetting* Get();
	static void Register();
	static void Unregistered();
public:
	virtual FName GetContainerName() const override { return TEXT("Editor"); }
	virtual FName GetCategoryName() const override { return TEXT("DreamPlugin"); }
	virtual FName GetSectionName() const override { return TEXT("TaskPluginEditorSetting"); }

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Config, meta=(LongPackageName), Category = "Manager")
	TArray<FDirectoryPath> TaskLoadPaths = { FDirectoryPath(TEXT("/Game")) };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Config, Category = "Manager")
	bool bManagerStartupRefresh = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Config, Category = "Manager|Style")
	FSlateFontInfo ManagerFont = FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Regular.ttf"), 12);
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Config, Category = "Version")
	FName ManagerVersion = FName(TEXT("2.0.1"));

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Config, Category = "Version")
	FName PluginVersion = FName(TEXT("2.0.1"));
};
