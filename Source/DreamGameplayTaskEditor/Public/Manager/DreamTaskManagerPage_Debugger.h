#pragma once

#include "CoreMinimal.h"
#include "DreamGameplayTaskTypes.h"
#include "Widgets/SCompoundWidget.h"

class SDreamTaskManagerPage_Debugger_Detail;
class UDreamTaskComponent;

typedef TSharedPtr<UDreamTaskComponent*> FSharedTaskComponent;

class DREAMGAMEPLAYTASKEDITOR_API SDreamTaskManagerPage_Debugger : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SDreamTaskManagerPage_Debugger)
		{
		}

	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs);
	virtual ~SDreamTaskManagerPage_Debugger() override;

	void RegisterLister();
	void UnregisterLister();

	void BeginPIE(const bool bIsSimulating);
	void EndPIE(const bool bIsSimulating);

	void HandleUpdate();

	FText OnGetComboBoxText();

protected:
	TSharedPtr<SWidgetSwitcher> WidgetSwitcher;
	TSharedPtr<STextBlock> ComboBoxSelectedTextBlock;
	TSharedPtr<SComboBox<FSharedTaskComponent>> TaskComponentComboBox;
	TSharedPtr<SDreamTaskManagerPage_Debugger_Detail> TaskComponentDetail;
	TArray<FSharedTaskComponent> TaskComponents;
	FSharedTaskComponent SelectedComponent;
};

class DREAMGAMEPLAYTASKEDITOR_API SDreamTaskManagerPage_Debugger_Detail : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SDreamTaskManagerPage_Debugger_Detail) : _TaskComponent()
		{
		}

		SLATE_ARGUMENT(FSharedTaskComponent, TaskComponent)
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs);
	void SetComponent(FSharedTaskComponent InComponent);
private:

	FSharedTaskComponent TaskComponent;
};

typedef TSharedPtr<FDreamTaskSpecHandle> FDreamTaskSpecHandlePtr;

class DREAMGAMEPLAYTASKEDITOR_API SDreamTaskManagerPage_Debugger_Detail_Row : public SMultiColumnTableRow<FDreamTaskSpecHandlePtr>
{
public:
	SLATE_BEGIN_ARGS(SDreamTaskManagerPage_Debugger_Detail_Row): _Handle()
		{
		}

		SLATE_ARGUMENT(FDreamTaskSpecHandlePtr, Handle)
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs, const TSharedRef<STableViewBase> InOwnerTableView);

public:
	FDreamTaskSpecHandlePtr Handle;
};
