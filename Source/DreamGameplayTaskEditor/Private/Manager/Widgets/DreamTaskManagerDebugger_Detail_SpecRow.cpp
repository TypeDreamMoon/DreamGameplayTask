#include "Manager/Widgets/DreamTaskManagerDebugger_Detail_SpecRow.h"

#include "Classes/DreamTaskConditionTemplate.h"
#include "Manager/DreamTaskManager_Util.h"
#include "DreamGameplayTaskTypes.h"
#include "Classes/DreamTask.h"
#include "Classes/DreamTaskConditionTemplate.h"
#include "Manager/Widgets/DreamTaskManagerDebugger_Detail.h"

#define LOCTEXT_NAMESPACE "DreamTaskManagerDebugger_Detail_SpecRow"

void SDreamTaskManagerDebugger_Detail_SpecRow::Construct(const FArguments& InArgs, const TSharedRef<STableViewBase> InOwnerTableView)
{
	Handle = InArgs._Handle;
	Detail = InArgs._Detail;
	FSuperRowType::Construct(FSuperRowType::FArguments().Padding(2.f), InOwnerTableView);
}

TSharedRef<SWidget> SDreamTaskManagerDebugger_Detail_SpecRow::GenerateWidgetForColumn(const FName& InColumnName)
{
	if (InColumnName == "Name")
	{
		return SNew(TB)
			.Text(MAKE_FORMATTED_TEXT(LOCTEXT("Name", "Name : {0}"),
			                          Handle->GetTask()->GetTaskDisplayName())
			);
	}

	if (InColumnName == "State")
	{
		return SNew(TB)
			.Text(MAKE_FORMATTED_TEXT(LOCTEXT("State", "State : {0}"),
			                          StaticEnum<EDreamTaskState>()->GetDisplayValueAsText(Handle->GetTaskState())
			));
	}

	if (InColumnName == "CompletedCondition")
	{
		TSharedRef<VB> VBox = SNew(VB);

		for (auto Condition : Handle->GetTask()->TaskCompletedCondition.Conditions)
		{
			VBox->AddSlot()[
				SNew(SHorizontalBox)
				HSLOT()
				[
					SNew(TB)
					.Text(MAKE_FORMATTED_TEXT(
						LOCTEXT("Condition", "ID : {0} Display Name : {1} Progress : {2} / {3}"),
						FText::FromString(Condition.Key.ToString()), // Convert FName to FText
						FText::FromString(Condition.Value->ConditionDisplayName.ToString()), // Convert FString to FText
						FText::AsNumber(Condition.Value->GetCount()), // Convert int32 to FText
						FText::AsNumber(Condition.Value->GetCompletedCount()) // Convert int32 to FText
					)					)
				]
			];
		}

		return VBox;
	}

	return SNew(TB)
		.Text(LOCTEXT("Error", "Error"));
}

#define BUILD_ACTION(Name, ToolTip, Action) \
	MenuBuilder.AddMenuEntry( \
		FText::FromString(Name), \
		FText::FromString(ToolTip), \
		FSlateIcon(), \
		FUIAction(Action) \
	);

FReply SDreamTaskManagerDebugger_Detail_SpecRow::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (MouseEvent.GetEffectingButton() == EKeys::RightMouseButton)
	{
		// 创建菜单构建器
		FMenuBuilder MenuBuilder(true, nullptr);

		MenuBuilder.AddSearchWidget();

		MenuBuilder.AddWidget(
			SNew(TB)
			.Text(MAKE_TEXT(TEXT("Target Task : %s"), *Handle->GetTask()->GetTaskDisplayName().ToString())),
			LOCTEXT("Target", "Target"));

		MenuBuilder.AddSeparator("BasicSetup");

		BUILD_ACTION(FString("Direct completion"), FString("Complete the task directly"),
		             FExecuteAction::CreateLambda(
			             [this]()
			             {
			             for (auto Element : Handle->GetTask()->GetTaskConditions())
			             {
			             Element->SetCount(Element->GetCompletedCount());
			             }
			             Handle->GetTask()->CheckTaskCompleted();
			             Detail->Refresh();
			             })
		);

		BUILD_ACTION(FString("Resetting tasks"), FString("Reset the task"),
		             FExecuteAction::CreateLambda(
			             [this]()
			             {
			             Handle->GetTask()->ResetTask();
			             Detail->Refresh();
			             })
		);

		MenuBuilder.AddSeparator("Condition setting");

		for (auto Element : Handle->GetTask()->GetTaskConditions())
		{
			BUILD_ACTION(FString::Printf(TEXT("Update %s conditional progress"), *Element->ConditionDisplayName.ToString()), "Adding conditional progress",
			             FExecuteAction::CreateLambda(
				             [Element, this]()
				             {
				             Element->Update();
				             Detail->Refresh();
				             })
			);
		}

		for (auto Element : Handle->GetTask()->GetTaskConditions())
		{
			BUILD_ACTION(FString::Printf(TEXT("Remove the %s conditional progress"), *Element->ConditionDisplayName.ToString()), "Remove conditional progress",
			             FExecuteAction::CreateLambda(
				             [Element, this]()
				             {
				             Element->SetCount(FMath::Clamp(Element->GetCount() - 1, 0, Element->GetCompletedCount()));
				             Detail->Refresh();
				             })
			);
		}

		// 使用 FPopupTransitionEffect 替代 FPopupMethodReply
		FPopupTransitionEffect PopupEffect = FPopupTransitionEffect::ContextMenu;

		// 显示菜单
		FSlateApplication::Get().PushMenu(
			SharedThis(this), // 传递父控件
			FWidgetPath(),
			MenuBuilder.MakeWidget(),
			MouseEvent.GetScreenSpacePosition(),
			PopupEffect, // 使用过渡效果
			true // 聚焦菜单
		);

		return FReply::Handled(); // 表示已经处理了右键事件
	}

	return FReply::Unhandled(); // 如果不是右键点击则不处理
}

#undef LOCTEXT_NAMESPACE
