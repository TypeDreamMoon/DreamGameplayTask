#include "Manager/DreamTaskManagerPage_Debugger.h"

#include "ClassViewerModule.h"
#include "ClassViewerFilter.h"
#include "DreamGameplayTaskEditorLog.h"
#include "Classes/DreamTaskComponent.h"
#include "Components/WidgetSwitcher.h"
#include "Manager/DreamTaskManager_Util.h"
#include "Manager/Widgets/DreamTaskManagerDebugger_Detail.h"

#define LOCTEXT_NAMESPACE "DreamTaskManagerPage_Debugger"


void SDreamTaskManagerPage_Debugger::Construct(const FArguments& InArgs)
{
	RegisterLister();
	ChildSlot[
		SAssignNew(WidgetSwitcher, SWidgetSwitcher)

		+ SWidgetSwitcher::Slot()
		[
			SNew(SErrorText)
			.ErrorText(LOCTEXT("ErrorText", "Current is not PIE (Play In Editor) Running Mode, Please Running."))
		]

		+ SWidgetSwitcher::Slot()
		[
			SNew(VB)

			VSLOT()
			.AutoHeight()
			[
				SNew(HB)

				HSLOT()
				.AutoWidth()
				.Padding(5.f)
				[
					SNew(STextBlock)
					.Text(LOCTEXT("Components", "Components"))
				]

				HSLOT()
				.Padding(5.f)
				[
					SAssignNew(TaskComponentPicker, SComboBox<FSharedTaskComponent>)
					.OptionsSource(&TaskComponents)
					.OnComboBoxOpening(this, &SDreamTaskManagerPage_Debugger::HandleUpdateComponentPicker)
					.OnGenerateWidget_Lambda([](FSharedTaskComponent Comp)
					{
						return SNew(STextBlock)
							.Text(MAKE_TEXT(TEXT("Owner : %s Component : %s"),
							                *Comp.ToSharedRef().Get()->GetOwner()->GetName(),
							                *Comp.ToSharedRef().Get()->GetName())							);
					})
					.OnSelectionChanged_Lambda([this](FSharedTaskComponent Component, ESelectInfo::Type SelectInfo)
					{
						if (SelectInfo == ESelectInfo::Type::OnMouseClick)
						{
							SelectedComponent = Component;
							TaskComponentPickerTextBlock->SetText(OnGetPickerText());
							TaskComponentDetail->SetComponent(SelectedComponent);
							TaskComponentDetail->SetVisibility(EVisibility::Visible);
						}
					})
					[
						SAssignNew(TaskComponentPickerTextBlock, STextBlock)
						.Text(OnGetPickerText())
					]
				]
			]

			VSLOT()
			HA(HFILL)
			VA(VFILL)
			[
				SNew(SBorder)
				.Padding(5.f)
				[
					SAssignNew(TaskComponentDetail, SDreamTaskManagerDebugger_Detail)
					.Visibility(EVisibility::Collapsed)
				]
			]
		]
	];
}

SDreamTaskManagerPage_Debugger::~SDreamTaskManagerPage_Debugger()
{
	UnregisterLister();
}

void SDreamTaskManagerPage_Debugger::RegisterLister()
{
	FEditorDelegates::PostPIEStarted.AddRaw(this, &SDreamTaskManagerPage_Debugger::BeginPIE);
	FEditorDelegates::ShutdownPIE.AddRaw(this, &SDreamTaskManagerPage_Debugger::EndPIE);
}

void SDreamTaskManagerPage_Debugger::UnregisterLister()
{
	FEditorDelegates::PostPIEStarted.RemoveAll(this);
	FEditorDelegates::ShutdownPIE.RemoveAll(this);
}

void SDreamTaskManagerPage_Debugger::BeginPIE(const bool bIsSimulating)
{
	if (bIsSimulating)
		return;

	WidgetSwitcher->SetActiveWidgetIndex(1);
	HandleUpdateComponentPicker();
	TaskComponentPicker->SetItemsSource(&TaskComponents);
}

void SDreamTaskManagerPage_Debugger::EndPIE(const bool bIsSimulating)
{
	if (bIsSimulating)
		return;

	WidgetSwitcher->SetActiveWidgetIndex(0);
	SelectedComponent = nullptr;
	TaskComponents.Empty();
	TaskComponentDetail->Clear();
	TaskComponentPicker->ClearSelection();
	TaskComponentDetail->SetVisibility(EVisibility::Collapsed);
	TaskComponentPickerTextBlock->SetText(LOCTEXT("Please PickComponent", "Please Pick Task Component"));
}

void SDreamTaskManagerPage_Debugger::HandleUpdateComponentPicker()
{
	TaskComponents.Empty();

	for (TObjectIterator<UDreamTaskComponent> It; It; ++It)
	{
		UDreamTaskComponent* Component = *It;

		if (Component->HasAnyFlags(RF_ClassDefaultObject) || !IsValid(Component))
		{
			continue;
		}

		AActor* Owner = Component->GetOwner();
		if (!IsValid(Owner) || Owner->HasAnyFlags(RF_ClassDefaultObject))
		{
			continue;
		}

		if (!(Component->GetWorld()->WorldType == EWorldType::PIE
			|| Component->GetWorld()->WorldType == EWorldType::Editor))
		{
			continue;
		}

		TaskComponents.Add(MakeShared<UDreamTaskComponent*>(Component));
	}

	TaskComponentPicker->RefreshOptions();
}

FText SDreamTaskManagerPage_Debugger::OnGetPickerText()
{
	FText Text = SELECT(SelectedComponent.IsValid(),
	                    MAKE_TEXT(TEXT("%s -> %s"), *SelectedComponent.ToSharedRef().Get()->GetOwner()->GetName(), *
		                    SelectedComponent.ToSharedRef().Get()->GetName()),
	                    MAKE_TEXT(TEXT("No Selected")));
	return Text;
}


#undef LOCTEXT_NAMESPACE
