#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

#define DREAMGAMEPLAY_TASK_STYLENAME TEXT("DreamGameplayTaskEditorStyle")

class FDreamGameplayTaskEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

public:
    FString CurrentContentBrowserPath = TEXT("/All/Game");

protected:
    void RegisterContentBrowserPathChange();
    void RegisterCommand();
    void RegisterToolbar();
    void MakeCommandList();
    void AddEditorToolsToToolbarExtension(FToolBarBuilder& Builder);
    TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);
    FName GetTaskManagerName();
    TSharedRef<SWidget> MakeEditorToolsMenu(bool InitialSetup, bool ComponentAction, bool OpenWindow, bool PreviewInViewport, bool EditorCameraControl, bool Others);
    TSharedPtr<class FUICommandList> CommandList;
};
