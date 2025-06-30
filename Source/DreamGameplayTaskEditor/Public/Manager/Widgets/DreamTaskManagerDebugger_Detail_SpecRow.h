#pragma once

#include "CoreMinimal.h"
#include "Manager/DreamTaskManagerTypes.h"
#include "Widgets/SCompoundWidget.h"


class DREAMGAMEPLAYTASKEDITOR_API SDreamTaskManagerDebugger_Detail_SpecRow : public SMultiColumnTableRow<FDreamTaskSpecHandlePtr>
{
public:
	SLATE_BEGIN_ARGS(SDreamTaskManagerDebugger_Detail_SpecRow): _Handle()
		{
		}

		SLATE_ARGUMENT(FDreamTaskSpecHandlePtr, Handle)
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs, const TSharedRef<STableViewBase> InOwnerTableView);

	virtual TSharedRef<SWidget> GenerateWidgetForColumn( const FName& InColumnName ); 

public:
	FDreamTaskSpecHandlePtr Handle;
};
