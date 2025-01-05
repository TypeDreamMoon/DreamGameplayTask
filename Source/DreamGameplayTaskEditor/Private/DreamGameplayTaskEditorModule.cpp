#include "DreamGameplayTaskEditorModule.h"

#include "ContentBrowserModule.h"
#include "DreamGameplayTaskEditorCommands.h"
#include "DreamGameplayTaskEditorLog.h"
#include "DreamGameplayTaskEditorTools.h"
#include "DreamGameplayTaskEditorStyle.h"
#include "DreamGameplayTaskManager.h"
#include "LevelEditor.h"
#include "Classes/DreamTask.h"
#include "Classes/DreamTaskConditionTemplate.h"
#include "Classes/DreamTaskType.h"

#define LOCTEXT_NAMESPACE "FDreamGameplayTaskEditorModule"

void FDreamGameplayTaskEditorModule::StartupModule()
{
	FDreamGameplayTaskEditorStyle::Initialize();
	FDreamGameplayTaskEditorStyle::Register();

	RegisterContentBrowserPathChange();

	RegisterCommand();
	MakeCommandList();
	RegisterToolbar();
}

void FDreamGameplayTaskEditorModule::ShutdownModule()
{
	FDreamGameplayTaskEditorStyle::Unreginster();
}

void FDreamGameplayTaskEditorModule::RegisterContentBrowserPathChange()
{
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	ContentBrowserModule.GetOnAssetPathChanged().AddLambda([this](const FString& Path)
	{
		CurrentContentBrowserPath = Path;
		DGT_ED_LOG(Log, TEXT("Content Browser Path Changed: %s"), *Path);
	});
}

void FDreamGameplayTaskEditorModule::RegisterCommand()
{
	if (!CommandList.IsValid())
	{
		CommandList = MakeShareable(new FUICommandList);
	}
	FDreamGameplayTaskEditorCommands::Register();
}

void FDreamGameplayTaskEditorModule::RegisterToolbar()
{
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
	ToolbarExtender->AddToolBarExtension("Play", EExtensionHook::After, CommandList, FToolBarExtensionDelegate::CreateRaw(this, &FDreamGameplayTaskEditorModule::AddEditorToolsToToolbarExtension));
	LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	LevelEditorModule.GetGlobalLevelEditorActions()->Append(CommandList.ToSharedRef());
}

void FDreamGameplayTaskEditorModule::MakeCommandList()
{
	auto EditorCommand = FDreamGameplayTaskEditorCommands::Get();

	CommandList->MapAction(
		EditorCommand.CreateTask,
		FExecuteAction::CreateLambda([]()
		{
			FDreamGameplayTaskEditorTools::CreateObjectBlueprintByClass(
				UDreamTask::StaticClass(), FString("NewTask"));
		})
	);

	CommandList->MapAction(
		EditorCommand.CreateTaskType,
		FExecuteAction::CreateLambda([]()
		{
			FDreamGameplayTaskEditorTools::CreateDataAssetByClass(
				UDreamTaskType::StaticClass(), FString("NewTaskType"));
		}));

	CommandList->MapAction(
		EditorCommand.CreateCondition,
		FExecuteAction::CreateLambda([]()
		{
			FDreamGameplayTaskEditorTools::CreateObjectBlueprintByClass(
				UDreamTaskConditionTemplate::StaticClass(), FString("NewCondition"));
		}));

	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(GetTaskManagerName(),
	                                                  FOnSpawnTab::CreateRaw(this, &FDreamGameplayTaskEditorModule::OnSpawnPluginTab))
	                        .SetDisplayName(FText::FromString(TEXT("DreamTaskManager")))
	                        .SetMenuType(ETabSpawnerMenuType::Disabled)
	                        .SetIcon(FSlateIcon(
		                        FSlateIcon(FDreamGameplayTaskEditorStyle::StyleName(),
		                                   TEXT("DreamGameplayTaskEditor.DreamTaskManager.TabIcon"))));

	CommandList->MapAction(
		EditorCommand.OpenManager,
		FExecuteAction::CreateLambda([this]()
			{
				FGlobalTabmanager::Get()->TryInvokeTab(GetTaskManagerName());
			}
		));
}

void FDreamGameplayTaskEditorModule::AddEditorToolsToToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.BeginSection("DreamGameplay");
	Builder.AddComboButton(
		FUIAction(),
		FOnGetContent::CreateRaw(this, &FDreamGameplayTaskEditorModule::MakeEditorToolsMenu, true, true, true, true, true, true),
		LOCTEXT("DreamGameplayTaskEditor", "DreamGameplayTools"),
		LOCTEXT("DreamGameplayTaskEditor", "DreamGameplayTools"),
		FSlateIcon(DREAMGAMEPLAY_TASK_STYLENAME, "Editor.Toolbar"));
	Builder.EndSection();
}

TSharedRef<class SDockTab> FDreamGameplayTaskEditorModule::OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs)
{
	const TSharedRef<SDockTab> DockTab = SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			SNew(SDreamGameplayTaskManager)
		];
	return DockTab;
}

FName FDreamGameplayTaskEditorModule::GetTaskManagerName()
{
	static FName DreamGameplayTaskEditorManagerWindowName = FName(TEXT("DreamTaskManager"));
	return DreamGameplayTaskEditorManagerWindowName;
}

TSharedRef<SWidget> FDreamGameplayTaskEditorModule::MakeEditorToolsMenu(bool InitialSetup, bool ComponentAction, bool OpenWindow, bool PreviewInViewport, bool EditorCameraControl, bool Others)
{
	FMenuBuilder MenuBuilder(true, CommandList);
	auto BufCommandList = FDreamGameplayTaskEditorCommands::Get();
	MenuBuilder.BeginSection("TaskTools", LOCTEXT("DreamGameplayTaskEditor", "Task Tools"));
	{
		MenuBuilder.AddMenuEntry(BufCommandList.CreateTask);
		MenuBuilder.AddMenuEntry(BufCommandList.CreateTaskType);
		MenuBuilder.AddMenuEntry(BufCommandList.CreateCondition);
		MenuBuilder.AddMenuEntry(BufCommandList.OpenManager);
	}

	return MenuBuilder.MakeWidget();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FDreamGameplayTaskEditorModule, DreamGameplayTaskEditor)
