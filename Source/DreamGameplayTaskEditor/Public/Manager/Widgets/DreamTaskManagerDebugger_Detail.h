#pragma once

#include "CoreMinimal.h"
#include "Manager/DreamTaskManagerTypes.h"
#include "Widgets/SCompoundWidget.h"

struct FDreamTaskSpecHandleContainer;
struct FDreamTaskConditionContainer;

class DREAMGAMEPLAYTASKEDITOR_API SDreamTaskManagerDebugger_Detail : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SDreamTaskManagerDebugger_Detail) : _TaskComponent()
		{
		}

		SLATE_ARGUMENT(FSharedTaskComponent, TaskComponent)
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs);
	void SetComponent(FSharedTaskComponent InComponent);
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
	void OnTaskListChanged(FDreamTaskSpecHandleContainer& InTaskList);
	const TArray<FDreamTaskSpecHandlePtr>* GetTaskHandles();
	TArray<FDreamTaskSpecHandlePtr> Handles;


	TSharedRef<ITableRow> OnGenerateRow(FDreamTaskSpecHandlePtr InItem, const TSharedRef<STableViewBase>& OwnerTable);
	TSharedRef<SHeaderRow> MakeHeaderRow();

private:
	FSharedTaskComponent TaskComponent;

	TSharedPtr<SWidgetSwitcher> Switcher;
	TSharedPtr<SListView<FDreamTaskSpecHandlePtr>> TaskListView;
};
