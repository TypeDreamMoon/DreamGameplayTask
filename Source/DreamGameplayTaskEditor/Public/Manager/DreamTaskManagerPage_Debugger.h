#pragma once

#include "CoreMinimal.h"
#include "DreamGameplayTaskTypes.h"
#include "Manager/DreamTaskManagerTypes.h"
#include "Widgets/SCompoundWidget.h"

class SDreamTaskManagerDebugger_Detail;
class UDreamTaskComponent;

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
	TSharedPtr<SDreamTaskManagerDebugger_Detail> TaskComponentDetail;
	TArray<FSharedTaskComponent> TaskComponents;
	FSharedTaskComponent SelectedComponent;
};