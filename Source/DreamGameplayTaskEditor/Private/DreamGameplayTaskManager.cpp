// Fill out your copyright notice in the Description page of Project Settings.


#include "DreamGameplayTaskManager.h"

#include "DreamGameplayTaskEditorLog.h"
#include "Components/WidgetSwitcher.h"

#include "DreamGameplayTaskEditorSetting.h"
#include "DreamGameplayTaskEditorStyle.h"
#include "DreamGameplayTaskEditorTools.h"
#include "SlateOptMacros.h"

#include "Classes/DreamTaskConditionTemplate.h"
#include "Classes/DreamTaskType.h"
#include "Classes/DreamTask.h"

#define SLATE_HFILL HAlign_Fill
#define SLATE_HCENTER HAlign_Center
#define SLATE_HLEFT HAlign_Left
#define SLATE_HRIGHT HAlign_Right
#define SLATE_VFILL VAlign_Fill
#define SLATE_VCENTER VAlign_Center
#define MARGIN(Value) FMargin(Value)
#define GET_STYLE FDreamGameplayTaskEditorStyle::Get()

#define MAKE_TEXT(Format, ...) FText::FromString(FString::Printf(Format, ##__VA_ARGS__))

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

TSharedRef<SHorizontalBox> FDreamTaskManagerTools::MakeIconAndTextWidget(const FText& Text, const FSlateBrush* IconBrush, int IconSize, float FontSize)
{
	return SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.VAlign(VAlign_Center)
		.HAlign(HAlign_Center)
		.AutoWidth()
		[
			SNew(SBox)
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			.WidthOverride(IconSize)
			.HeightOverride(IconSize)
			[
				SNew(SImage)
				.Image(IconBrush)
			]
		]

		+ SHorizontalBox::Slot()
		.VAlign(VAlign_Center)
		.AutoWidth()
		.Padding(2.f, 0.f)
		[
			SNew(STextBlock)
			.Font(GetTextFont(FontSize))
			.Text(Text)
		];
}

FSlateFontInfo FDreamTaskManagerTools::GetTextFont(float Size)
{
	FSlateFontInfo Font = UDreamGameplayTaskEditorSetting::Get()->ManagerFont;
	Font.Size = Size;
	return Font;
}

using namespace FDreamTaskManagerTools;

void SDreamGameplayTaskManager::Construct(const FArguments& InArgs)
{
	AssetRegistryModule = &FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));

	RegisterAutoRefreshList();

	// Begin Slate
	ChildSlot[
		SNew(SOverlay)

		+ SOverlay::Slot()
		.HAlign(SLATE_HFILL)
		.VAlign(SLATE_VFILL)
		[
			SNew(SVerticalBox)

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(MARGIN(5.0f))
			[

				// Begin Title
				SNew(SHorizontalBox)

				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(SLATE_VCENTER)
				.Padding(MARGIN(5.0f))
				[
					SNew(STextBlock)
					.Font(GetTextFont(20.0f))
					.Text(MAKE_TEXT(TEXT("Dream Task Manager")))
				]

				+ SHorizontalBox::Slot()
				.HAlign(SLATE_HFILL)
				[
					SNew(SHorizontalBox)

					// Create Task
					+ SHorizontalBox::Slot()
					.VAlign(SLATE_VFILL)
					.HAlign(SLATE_HRIGHT)
					.FillWidth(1.0f)
					.Padding(MARGIN(5.0f))
					[
						SNew(SButton)
						.OnClicked_Lambda([]()
						{
							UBlueprint* Blueprint = FDreamGameplayTaskEditorTools::CreateObjectBlueprintByClass(
								UDreamGameplayTaskEditorSetting::Get()->GetCreateTaskClass(), FString(TEXT("NewTask")));

							if (!Blueprint) return FReply::Handled();

							GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAsset(Blueprint);

							return FReply::Handled();
						})
						[
							MakeIconAndTextWidget(MAKE_TEXT(TEXT("Create Task")),
							                      GET_STYLE->GetBrush(TEXT("DreamGameplayTaskEditor.CreateTaskIcon")))
						]
					]

					// Force Load Memory
					+ SHorizontalBox::Slot()
					.VAlign(SLATE_VFILL)
					.AutoWidth()
					.Padding(MARGIN(5.0f))
					[
						SNew(SButton)
						.OnClicked_Lambda([this]()
						{
							FDreamGameplayTaskEditorTools::ForceLoadAssetToMemory();
							RefreshList();
							return FReply::Handled();
						})
						[
							MakeIconAndTextWidget(MAKE_TEXT(TEXT("Force Load Memory")),
							                      GET_STYLE->GetBrush(TEXT("DreamGameplayTaskEditor.ForceLoadMemory")))
						]
					]

					+ SHorizontalBox::Slot()
					.VAlign(SLATE_VFILL)
					.AutoWidth()
					.Padding(MARGIN(5.0f))
					[
						SNew(SButton)
						.OnClicked_Lambda([this]()
						{
							RefreshList();
							return FReply::Handled();
						})
						[
							MakeIconAndTextWidget(MAKE_TEXT(TEXT("Refresh")),
							                      GET_STYLE->GetBrush(TEXT("DreamGameplayTaskEditor.Refresh")))
						]
					]
				]
			]

			+ SVerticalBox::Slot()
			.HAlign(SLATE_HFILL)
			.VAlign(SLATE_VFILL)
			.Padding(MARGIN(5.0f))
			[
				SAssignNew(Switcher, SWidgetSwitcher)

				+ SWidgetSwitcher::Slot()
				.HAlign(SLATE_HFILL)
				.VAlign(SLATE_VFILL)
				[
					SAssignNew(ListView, SListView<FRowData>)
					.EnableAnimatedScrolling(true)
					.OnGenerateRow(this, &SDreamGameplayTaskManager::OnGenerateRowForList)
					.ListItemsSource(&List)
					.HeaderRow(
						SNew(SHeaderRow)
						+ SHeaderRow::Column(TEXT("TaskName"))
						.DefaultLabel(FText::FromString(TEXT("TaskName")))
						.HAlignHeader(HAlign_Center)
						.VAlignHeader(VAlign_Center)
						.HAlignCell(HAlign_Left)
						.VAlignCell(VAlign_Center)
						+ SHeaderRow::Column(TEXT("BlueprintName"))
						.DefaultLabel(FText::FromString(TEXT("BlueprintName")))
						.HAlignHeader(HAlign_Center)
						.VAlignHeader(VAlign_Center)
						.HAlignCell(HAlign_Left)
						.VAlignCell(VAlign_Center)
						+ SHeaderRow::Column(TEXT("TaskDisplayName"))
						.DefaultLabel(FText::FromString(TEXT("TaskDisplayName")))
						.HAlignHeader(HAlign_Center)
						.VAlignHeader(VAlign_Center)
						.HAlignCell(HAlign_Left)
						.VAlignCell(VAlign_Center)
						+ SHeaderRow::Column(TEXT("TaskAction"))
						.DefaultLabel(FText::FromString(TEXT("TaskAction")))
						.HAlignHeader(HAlign_Center)
						.VAlignHeader(VAlign_Center)
						.HAlignCell(HAlign_Fill)
						.VAlignCell(VAlign_Fill))
				]

				+ SWidgetSwitcher::Slot()
				.HAlign(SLATE_HFILL)
				.VAlign(SLATE_VFILL)
				[
					SNew(SErrorText)
					.Font(GetTextFont(20.0f))
					.ErrorText(MAKE_TEXT(TEXT("No task found. Refresh or create the task.")))
				]
			]

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(MARGIN(5.0f))
			.HAlign(SLATE_HFILL)
			.VAlign(SLATE_VCENTER)
			[
				SNew(SHorizontalBox)

				+ SHorizontalBox::Slot()
				.Padding(MARGIN(5.0f))
				.VAlign(SLATE_VCENTER)
				.HAlign(SLATE_HLEFT)
				[
					SNew(STextBlock)
					.Text_Lambda([&List = this->List]()
					{
						return MAKE_TEXT(TEXT("Task Number : %d"), List.Num());
					})
				]

				+ SHorizontalBox::Slot()
				.Padding(MARGIN(5.0f))
				.VAlign(SLATE_VCENTER)
				.HAlign(SLATE_HRIGHT)
				[
					SNew(STextBlock)
					.Text_Lambda([]()
					{
						return MAKE_TEXT(TEXT("Manager Version : %s Plugin Version : %s"),
						                 *UDreamGameplayTaskEditorSetting::Get()->ManagerVersion.ToString(),
						                 *UDreamGameplayTaskEditorSetting::Get()->PluginVersion.ToString())						;
					})
				]
			]
		]
	];

	if (UDreamGameplayTaskEditorSetting::Get()->bManagerStartupRefresh)
	{
		RefreshList();
	}
}

SDreamGameplayTaskManager::~SDreamGameplayTaskManager()
{
	UnregisteredAutoRefreshList();
}

void SDreamGameplayTaskManager::RefreshList()
{
	ClearList();

	FDreamGameplayTaskEditorTools::LoadAssetToMemory();

	TArray<FAssetData> AssetData = FDreamGameplayTaskEditorTools::GetTaskAssetData();

	for (auto Data : AssetData)
	{
		UBlueprint* Blueprint = Cast<UBlueprint>(Data.FastGetAsset(true));

		if (!Blueprint) continue;
		if (!Blueprint->ParentClass) continue;

		if (Blueprint->ParentClass->IsChildOf(UDreamTask::StaticClass()) || Blueprint->ParentClass == UDreamTask::StaticClass())
		{
			UDreamTask* Task = Cast<UDreamTask>(Blueprint->GeneratedClass.GetDefaultObject());
			if (Task && Blueprint)
			{
				TSharedPtr<FManagerRowData> Item = MakeShared<FManagerRowData>(Task, Blueprint);
				if (Item.IsValid())
				{
					List.Add(Item);
				}
			}
		}
	}

	CheckList();
}

void SDreamGameplayTaskManager::ClearList()
{
	List.Empty();
	ListView->RequestListRefresh();
	CheckList();
}

void SDreamGameplayTaskManager::CheckList()
{
	if (List.IsEmpty())
	{
		Switcher->SetActiveWidgetIndex(1);
	}
	else
	{
		Switcher->SetActiveWidgetIndex(0);
	}
}

void SDreamGameplayTaskManager::ListerAssetRemoved(const FAssetData& Data)
{
	ClearList();
}

void SDreamGameplayTaskManager::ListerAssetSaved(const FString& PackageName, UPackage* Package, FObjectPostSaveContext ObjectSavedContext)
{
	FSoftObjectPath Path(Package);
	if (UBlueprint* Blueprint = Cast<UBlueprint>(Path.TryLoad()))
	{
		if (Blueprint->ParentClass->IsChildOf(UDreamTask::StaticClass()))
		{
			RefreshList();
		}
	}
}

void SDreamGameplayTaskManager::RegisterAutoRefreshList()
{
	UPackage::PackageSavedWithContextEvent.AddRaw(this, &SDreamGameplayTaskManager::ListerAssetSaved);
	AssetRegistryModule->Get().OnAssetRemoved().AddRaw(this, &SDreamGameplayTaskManager::ListerAssetRemoved);
}

void SDreamGameplayTaskManager::UnregisteredAutoRefreshList()
{
	UPackage::PackageSavedWithContextEvent.RemoveAll(this);
	AssetRegistryModule->Get().OnAssetRemoved().RemoveAll(this);
}

TSharedRef<STableRow<SDreamGameplayTaskManager::FRowData>> SDreamGameplayTaskManager::MakeRow(FRowData RowData, const TSharedRef<STableViewBase>& OwnerTable)
{
	FSlateFontInfo Font = GetTextFont(15.0f);

	auto GetTask = [RowData]()
	{
		return RowData.Get()->Task;
	};

	auto TooltipText = [GetTask]()
	{
		FString TaskName = GetTask()->GetTaskName().ToString();
		FString TaskDisplayName = GetTask()->GetTaskDisplayName().ToString();
		FString TaskDesc = GetTask()->GetTaskDesc().ToString();
		FString TaskType = GetTask()->GetTaskType() ? GetTask()->GetTaskType()->TypeName.ToString() : TEXT("Null");
		FString NextTasks = TEXT("EMPTY");
		FString ConditionsName = TEXT("EMPTY");

		{
			// NEXT TASK
			if (!GetTask()->GetSubTasks().IsEmpty())
			{
				NextTasks.Empty();
				for (auto Element : GetTask()->GetSubTasks())
				{
					NextTasks += FString::Printf(TEXT("\n Task Name : %s"), *Element.GetDefaultObject()->GetTaskName().ToString());
				}
			}
		}

		{
			// CONDITIONS
			if (!GetTask()->GetTaskConditions().IsEmpty())
			{
				ConditionsName.Empty();
				for (auto Element : GetTask()->TaskCompletedCondition.Conditions)
				{
					ConditionsName += FString::Printf(TEXT("\n Condition Name : %s"), *Element.Key.ToString());
				}
			}
		}

		return FText::FromString(FString::Printf(TEXT(
			"Task Name : %s \n"
			"Task DisplayName : %s \n"
			"Task Desc : %s \n"
			"Task Type   : %s \n"
			"Sub Tasks : %s \n"
			"Conditions : %s"
		),
		                                         *TaskName,
		                                         *TaskDisplayName,
		                                         *TaskDesc,
		                                         *TaskType,
		                                         *NextTasks,
		                                         *ConditionsName
		));
	};

	return SNew(SDreamGameplayTaskManagerItemRow, OwnerTable)
		.ItemShow(RowData)
		.ToolTipText(TooltipText());
}

TSharedRef<ITableRow> SDreamGameplayTaskManager::OnGenerateRowForList(FRowData InItem, const TSharedRef<STableViewBase>& OwnerTable)
{
	return MakeRow(InItem, OwnerTable);
}

void SDreamGameplayTaskManagerItemRow::Construct(const FArguments& InArgs, const TSharedRef<STableViewBase> InOwnerTableView)
{
	ItemShow = InArgs._ItemShow;
	FSuperRowType::Construct(FSuperRowType::FArguments().Padding(2.f), InOwnerTableView);
}

TSharedRef<SWidget> SDreamGameplayTaskManagerItemRow::GenerateWidgetForColumn(const FName& ColumnName)
{
	if (ColumnName == "TaskName")
	{
		return SNew(STextBlock)
			.Text_Lambda([this]()
			{
				return FText::FromString(ItemShow->Task->GetTaskName().ToString());
			});
	}
	else if (ColumnName == "BlueprintName")
	{
		return SNew(STextBlock)
			.Text_Lambda([this]()
			{
				return FText::FromString(ItemShow->Blueprint->GetName());
			});
	}
	else if (ColumnName == "TaskDisplayName")
	{
		return SNew(STextBlock)
			.Text_Lambda([this]()
			{
				return ItemShow->Task->GetTaskDisplayName();
			});
	}
	else if (ColumnName == "TaskAction")
	{
		auto OpenEditorAction = [this]()
		{
			if (ItemShow->Blueprint)
			{
				GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAsset(
					ItemShow->Blueprint);
			}
		};
		return SNew(SButton)
			.OnClicked_Lambda([OpenEditorAction]()
			{
				OpenEditorAction();
				return FReply::Handled();
			})
			[
				MakeIconAndTextWidget(
					MAKE_TEXT(TEXT("Open In Editor")),
					GET_STYLE.Get()->GetBrush(TEXT("DreamGameplayTaskEditor.OpenEditor")),
					15.0f
				)
			]; // END BUTTON
	}

	return SNew(STextBlock)
		.Text(FText::FromString("ERROR"));
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
