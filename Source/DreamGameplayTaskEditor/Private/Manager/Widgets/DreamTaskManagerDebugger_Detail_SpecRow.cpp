#include "Manager/Widgets/DreamTaskManagerDebugger_Detail_SpecRow.h"

void SDreamTaskManagerDebugger_Detail_SpecRow::Construct(const FArguments& InArgs, const TSharedRef<STableViewBase> InOwnerTableView)
{
}

TSharedRef<SWidget> SDreamTaskManagerDebugger_Detail_SpecRow::GenerateWidgetForColumn(const FName& InColumnName)
{
	return SNew(STextBlock);
}
