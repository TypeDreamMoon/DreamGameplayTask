#include "Manager/Widgets/DreamTaskManagerDebugger_Detail_SpecRow.h"

#include "Classes/DreamTaskConditionTemplate.h"
#include "Manager/DreamTaskManager_Util.h"
#include "DreamGameplayTaskTypes.h"
#include "Classes/DreamTask.h"
#include "Classes/DreamTaskConditionTemplate.h"
#include "Manager/Widgets/DreamTaskManagerDebugger_Detail.h"

#define LOCTEXT_NAMESPACE "DreamTaskManagerDebugger_Detail_SpecRow"

void SDreamTaskManagerDebugger_Detail_SpecRow::Construct(const FArguments& InArgs,
                                                         const TSharedRef<STableViewBase> InOwnerTableView)
{
	Handle = InArgs._Handle;
	Detail = InArgs._Detail;
	FSuperRowType::Construct(FSuperRowType::FArguments().Padding(2.f), InOwnerTableView);
}

#define LOCPADDING 4.f

TSharedRef<SWidget> SDreamTaskManagerDebugger_Detail_SpecRow::GenerateWidgetForColumn(const FName& InColumnName)
{
	if (InColumnName == "Name")
	{
		return SNew(SOverlay)
				OSLOT()
				.Padding(LOCPADDING)
				[
					SNew(TB)
					.Text(MAKE_FORMATTED_TEXT(LOCTEXT("Name", "Name : {0}"),
					                          Handle->GetTask()->GetTaskDisplayName())
					)
				];
	}

	if (InColumnName == "State")
	{
		return SNew(SOverlay)
				OSLOT()
				.Padding(LOCPADDING)
				[
					SNew(TB)
					.Text(MAKE_FORMATTED_TEXT(LOCTEXT("State", "State : {0}"),
					                          StaticEnum<EDreamTaskState>()->GetDisplayValueAsText(Handle->GetTaskState(
					                          ))
						)
					)
				];
	}

	if (InColumnName == "CompletedCondition")
	{
		TSharedRef<VB> VBox = SNew(VB);

		VBox->AddSlot()
		[
			SNew(SOverlay)
			OSLOT()
			.Padding(LOCPADDING / 2.f)
			[
				SNew(TB)
				.Text(MAKE_FORMATTED_TEXT(LOCTEXT("ConditionTitle", "Condition Number: %s"),
				                          FText::AsNumber(Handle->GetTaskConditions().Num())))
			]
		];

		for (auto Condition : Handle->GetTask()->TaskCompletedCondition.Conditions)
		{
			VBox->AddSlot()[
				SNew(SHorizontalBox)
				HSLOT()
				.Padding(LOCPADDING)
				[
					SNew(SOverlay)
					OSLOT()
					.Padding(LOCPADDING / 2.f)
					[
						SNew(TB)
						.Text(MAKE_FORMATTED_TEXT(
								LOCTEXT("Condition",
									"> ID : {0} Display Name : {1} Progress : {2} / {3} Must Be Completed : %s"),
								FText::FromString(Condition.Key.ToString()),
								FText::FromString(Condition.Value->ConditionDisplayName.ToString()),
								FText::AsNumber(Condition.Value->GetCount()),
								FText::AsNumber(Condition.Value->GetCompletedCount()),
								FText::FromString(Condition.Value->bTaskMustBeCompleted ? TEXT("Yes") : TEXT("No"))
							)
						)
					]
				]
			];
		}

		VBox->AddSlot()
		[
			SNew(SOverlay)
			OSLOT()
			.Padding(LOCPADDING / 2.f)
			[
				SNew(TB)
				.Text(MAKE_FORMATTED_TEXT(LOCTEXT("ConditionTool", "Completed Mode : %s"),
				                          StaticEnum<EDreamTaskConditionalCompletionMode>()->GetDisplayValueAsText(
					                          Handle->GetTask()->TaskCompletedCondition.CompletionMode))				)
			]
		];

		return VBox;
	}

	return SNew(TB)
		.Text(LOCTEXT("Error", "Error"));
}

#undef LOCPADDING

#define BUILD_ACTION(Name, ToolTip, Action) \
	MenuBuilder.AddMenuEntry( \
		FText::FromString(Name), \
		FText::FromString(ToolTip), \
		FSlateIcon(), \
		FUIAction(Action) \
	);

FReply SDreamTaskManagerDebugger_Detail_SpecRow::OnMouseButtonDown(const FGeometry& MyGeometry,
                                                                   const FPointerEvent& MouseEvent)
{
	if (!Handle.IsValid()) return FReply::Unhandled();

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

		for (TPair<FName, UDreamTaskConditionTemplate*>& Element : Handle->GetTaskConditions())
		{
			BUILD_ACTION(
				FString::Printf(TEXT("Update %s conditional progress"), *Element.Value->ConditionDisplayName.ToString()
				),
				"Adding conditional progress",
				FExecuteAction::CreateLambda([Element, this]()
					{
					Element.Value->Update();
					Handle->GetTask()->UpdateTaskByName({ Element.Key });
					Detail->Refresh();
					})
			);
		}

		for (TPair<FName, UDreamTaskConditionTemplate*>& Element : Handle->GetTaskConditions())
		{
			BUILD_ACTION(
				FString::Printf(TEXT("Remove the %s conditional progress"), *Element.Value->ConditionDisplayName.
					ToString()),
				"Remove conditional progress",
				FExecuteAction::CreateLambda([Element, this]()
					{
					Element.Value->SetCount(FMath::Clamp(Element.Value->GetCount() - 1, 0, Element.Value->
						GetCompletedCount()));
					Handle->GetTask()->UpdateTaskByName({ Element.Key });
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
