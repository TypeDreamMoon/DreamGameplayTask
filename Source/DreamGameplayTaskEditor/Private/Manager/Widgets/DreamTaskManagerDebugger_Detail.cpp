#include "Manager/Widgets/DreamTaskManagerDebugger_Detail.h"

#include "Components/ListView.h"

#include "Classes/DreamTaskComponent.h"
#include "DreamGameplayTaskTypes.h"
#include "Kismet2/SClassPickerDialog.h"
#include "Manager/Widgets/DreamTaskManagerDebugger_Detail_SpecRow.h"
#include "Manager/DreamTaskManager_Util.h"
#include "Widgets/Layout/SWidgetSwitcher.h"
#include "Editor/ClassViewer/Public/ClassViewerFilter.h"

#define LOCTEXT_NAMESPACE "DreamTaskManagerDebugger_Detail_SpecRow"
#define DECODE_SharedPtr(Val) Val.ToSharedRef().Get()

class FDreamGameplayTaskManagerTaskClassFiler : public IClassViewerFilter
{
public:
	/** All children of these classes will be included unless filtered out by another setting. */
	TSet<const UClass*> AllowedChildrenOfClasses;

	/** Disallowed class flags. */
	EClassFlags DisallowedClassFlags = CLASS_None;

	virtual bool IsClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const UClass* InClass,
	                            TSharedRef<FClassViewerFilterFuncs> InFilterFuncs) override
	{
		return !InClass->HasAnyClassFlags(DisallowedClassFlags)
			&& InFilterFuncs->IfInChildOfClassesSet(AllowedChildrenOfClasses, InClass) != EFilterReturn::Failed;
	}

	virtual bool IsUnloadedClassAllowed(const FClassViewerInitializationOptions& InInitOptions,
	                                    const TSharedRef<const IUnloadedBlueprintData> InUnloadedClassData,
	                                    TSharedRef<FClassViewerFilterFuncs> InFilterFuncs) override
	{
		return !InUnloadedClassData->HasAnyClassFlags(DisallowedClassFlags)
			&& InFilterFuncs->IfInChildOfClassesSet(AllowedChildrenOfClasses, InUnloadedClassData) !=
			EFilterReturn::Failed;
	}
};

void SDreamTaskManagerDebugger_Detail::Construct(const FArguments& InArgs)
{
	ChildSlot[
		SNew(SOverlay)

		OSLOT()
		[
			SNew(VB)

			VSLOT()
			.AutoHeight()
			.Padding(5.f)
			[
				SNew(HB)

				HSLOT()
				[
					SNew(TB)
					.Font(FDreamTaskManagerUtil::GetTextFont(12.f))
					.Text_Lambda([this]()
					{
						return MAKE_TEXT(TEXT("Owner : %15s -> Task Component : %s"),
						                 *DECODE_SharedPtr(TaskComponent)->GetOwner()->GetName(),
						                 *DECODE_SharedPtr(TaskComponent)->GetName()
						)						;
					})
				]

				HSLOT()
				.AutoWidth()
				HA(HRIGHT)
				[
					SNew(SButton)
					.Text(MAKE_TEXT(TEXT("Refresh")))
					.OnClicked_Lambda([this]()
					{
						Refresh();
						return FReply::Handled();
					})
				]

				HSLOT()
				.AutoWidth()
				HA(HRIGHT)
				[
					SNew(SButton)
					.Text(LOCTEXT("GiveTask", "Give Task"))
					.OnClicked_Lambda([this]()
					{
						if (!TaskComponent.IsValid()) return FReply::Handled();

						UClass* Class = UDreamTask::StaticClass();
						UClass* ChosenClass = UDreamTask::StaticClass();

						FClassViewerInitializationOptions Options;
						Options.DisplayMode = EClassViewerDisplayMode::Type::TreeView;
						Options.Mode = EClassViewerMode::ClassPicker;
						Options.bShowNoneOption = false;
						Options.bExpandAllNodes = true;

						TSharedPtr<FDreamGameplayTaskManagerTaskClassFiler> Filter = MakeShareable(
							new FDreamGameplayTaskManagerTaskClassFiler);
						Options.ClassFilters.Add(Filter.ToSharedRef());

						Filter->DisallowedClassFlags = CLASS_Deprecated | CLASS_NewerVersionExists | CLASS_Abstract |
							CLASS_HideDropDown;
						Filter->AllowedChildrenOfClasses.Add(Class);

						const FText TitleText = LOCTEXT("GiveTask", "Pick Task Class");
						SClassPickerDialog::PickClass(TitleText, Options, ChosenClass, Class);

						GET_TSharedPtr(TaskComponent)->GiveTaskByClass(ChosenClass);

						return FReply::Handled();
					})
				]
			]

			VSLOT()
			HA(HFILL)
			VA(VFILL)
			[
				SAssignNew(Switcher, SWidgetSwitcher)

				+ SWidgetSwitcher::Slot()
				HA(HCENTER)
				VA(VCENTER)
				[
					SNew(TB)
					.Font(FDreamTaskManagerUtil::GetTextFont(15.f))
					.Text(LOCTEXT("EmptyText", "No task, task array is empty."))
				]

				+ SWidgetSwitcher::Slot()
				[
					SAssignNew(TaskListView, SListView<FDreamTaskSpecHandlePtr>)
					.EnableAnimatedScrolling(true)
					.ListItemsSource(&Handles)
					.OnGenerateRow(this, &SDreamTaskManagerDebugger_Detail::OnGenerateRow)
					.HeaderRow(MakeHeaderRow())
				]
			]
		]
	];
}

void SDreamTaskManagerDebugger_Detail::SetComponent(FSharedTaskComponent InComponent)
{
	TaskComponent = InComponent;

	if (TaskComponent.IsValid())
	{
		DECODE_SharedPtr(TaskComponent)->OnTaskListChangedDelegate.AddSP(
			this, &SDreamTaskManagerDebugger_Detail::OnTaskListChanged);
		
		OnTaskListChanged(GET_TSharedPtr(TaskComponent)->TaskData);
	}
}

void SDreamTaskManagerDebugger_Detail::Clear()
{
	TaskComponent.Reset();
}

void SDreamTaskManagerDebugger_Detail::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime,
                                            const float InDeltaTime)
{
	SCompoundWidget::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

	if (TaskComponent.IsValid())
	{
		Switcher->SetActiveWidgetIndex(DECODE_SharedPtr(TaskComponent)->TaskData.IsEmpty() ? 0 : 1);
	}
}

void SDreamTaskManagerDebugger_Detail::OnTaskListChanged(FDreamTaskSpecHandleContainer& InTaskList)
{
	Handles.Empty();
	for (auto Element : InTaskList.GetHandles())
	{
		Handles.Add(MakeShared<FDreamTaskSpecHandle>(Element));
	}


	TaskListView->RequestListRefresh();
}

TSharedRef<ITableRow> SDreamTaskManagerDebugger_Detail::OnGenerateRow(FDreamTaskSpecHandlePtr InItem,

const TSharedRef<STableViewBase>& OwnerTable)
{
	return SNew(SDreamTaskManagerDebugger_Detail_SpecRow, OwnerTable)
		.Handle(InItem)
		.Detail(SharedThis(this));
}

TSharedRef<SHeaderRow> SDreamTaskManagerDebugger_Detail::MakeHeaderRow()
{
	return SNew(SHeaderRow)
			BUILD_HEADER(TEXT("Name"), LOCTEXT("Name", "Name"))
			BUILD_HEADER(TEXT("State"), LOCTEXT("State", "State"))
			BUILD_HEADER(TEXT("CompletedCondition"), LOCTEXT("CompletedCondition", "CompletedCondition"));
}

void SDreamTaskManagerDebugger_Detail::Refresh()
{
	TaskListView->ClearItemsSource();
	TaskListView->RequestListRefresh();
	TaskListView->SetItemsSource(&Handles);
	TaskListView->RequestListRefresh();
}

#undef LOCTEXT_NAMESPACE
