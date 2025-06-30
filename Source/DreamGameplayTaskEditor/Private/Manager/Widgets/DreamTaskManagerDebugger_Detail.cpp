#include "Manager/Widgets/DreamTaskManagerDebugger_Detail.h"

#include "Components/ListView.h"

#include "Classes/DreamTaskComponent.h"
#include "DreamGameplayTaskTypes.h"
#include "Manager/Widgets/DreamTaskManagerDebugger_Detail_SpecRow.h"
#include "Manager/DreamTaskManager_Util.h"
#include "Widgets/Layout/SWidgetSwitcher.h"

#define LOCTEXT_NAMESPACE "DreamTaskManagerDebugger_Detail_SpecRow"
#define DECODE_SharedPtr(Val) Val.ToSharedRef().Get()

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
				SNew(TB)
				.Font(FDreamTaskManagerUtil::GetTextFont(15.f))
				.Text_Lambda([this]()
				{
					return MAKE_TEXT(TEXT("Owner : %15s -> Task Component : %s"),
					                 *DECODE_SharedPtr(TaskComponent)->GetOwner()->GetName(), *DECODE_SharedPtr(TaskComponent)->GetName()
					);
				})
			]

			VSLOT()
			HA(HFILL)
			VA(VFILL)
			[
				SAssignNew(Switcher, SWidgetSwitcher)

				+ SWidgetSwitcher::Slot()
				[
					SNew(TB)
					.Font(FDreamTaskManagerUtil::GetTextFont(8.f))
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
	if (TaskComponent.IsValid())
		DECODE_SharedPtr(TaskComponent)->OnTaskListChangedDelegate.RemoveAll(this);

	TaskComponent = InComponent;

	if (TaskComponent.IsValid())
		DECODE_SharedPtr(TaskComponent)->OnTaskListChangedDelegate.AddSP(this, &SDreamTaskManagerDebugger_Detail::OnTaskListChanged);
}

void SDreamTaskManagerDebugger_Detail::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	SCompoundWidget::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);
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

TSharedRef<ITableRow> SDreamTaskManagerDebugger_Detail::OnGenerateRow(FDreamTaskSpecHandlePtr InItem, const TSharedRef<STableViewBase>& OwnerTable)
{
	return SNew(SDreamTaskManagerDebugger_Detail_SpecRow, OwnerTable)
		.Handle(InItem);
}

TSharedRef<SHeaderRow> SDreamTaskManagerDebugger_Detail::MakeHeaderRow()
{
	return SNew(SHeaderRow)
			BUILD_HEADER(TEXT("Name"), LOCTEXT("Name", "Name"))
			BUILD_HEADER(TEXT("State"), LOCTEXT("State", "State"))
			BUILD_HEADER(TEXT("CompletedCondition"), LOCTEXT("CompletedCondition", "CompletedCondition"))
			BUILD_HEADER(TEXT("Actions"), LOCTEXT("Actions", "Actions"));
}

#undef LOCTEXT_NAMESPACE
