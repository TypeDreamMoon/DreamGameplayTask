#pragma once

#include "CoreMinimal.h"
#include "Manager/DreamTaskManagerTypes.h"
#include "Widgets/SCompoundWidget.h"


class SDreamTaskManagerDebugger_Detail;

class DREAMGAMEPLAYTASKEDITOR_API SDreamTaskManagerDebugger_Detail_SpecRow : public SMultiColumnTableRow<FDreamTaskSpecHandlePtr>
{
public:
	SLATE_BEGIN_ARGS(SDreamTaskManagerDebugger_Detail_SpecRow): _Handle(), _Detail()
		{
		}

		SLATE_ARGUMENT(FDreamTaskSpecHandlePtr, Handle)
		SLATE_ARGUMENT(TSharedPtr<SDreamTaskManagerDebugger_Detail>, Detail)
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs, const TSharedRef<STableViewBase> InOwnerTableView);

	virtual TSharedRef<SWidget> GenerateWidgetForColumn(const FName& InColumnName);
	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

public:
	FDreamTaskSpecHandlePtr Handle;
	TSharedPtr<SDreamTaskManagerDebugger_Detail> Detail;
};
