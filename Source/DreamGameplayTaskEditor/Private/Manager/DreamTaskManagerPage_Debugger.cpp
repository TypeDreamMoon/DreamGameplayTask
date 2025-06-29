#include "Manager/DreamTaskManagerPage_Debugger.h"

#include "DreamGameplayTaskEditorLog.h"
#include "DreamGameplayTaskWorldSubsystem.h"
#include "Classes/DreamTaskComponent.h"
#include "Components/WidgetSwitcher.h"
#include "Manager/DreamTaskManager_Util.h"

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
					SAssignNew(TaskComponentComboBox, SComboBox<FSharedTaskComponent>)
					.OptionsSource(&TaskComponents)
					.OnComboBoxOpening(this, &SDreamTaskManagerPage_Debugger::HandleUpdate)
					.OnGenerateWidget_Lambda([](FSharedTaskComponent Comp)
					{
						return SNew(STextBlock)
							.Text(MAKE_TEXT(TEXT("Owner : %s Component : %s"),
							                *Comp.ToSharedRef().Get()->GetOwner()->GetName(), *Comp.ToSharedRef().Get()->GetName()));
					})
					.OnSelectionChanged_Lambda([this](FSharedTaskComponent Component, ESelectInfo::Type SelectInfo)
					{
						if (SelectInfo == ESelectInfo::Type::OnMouseClick)
						{
							SelectedComponent = Component;
							ComboBoxSelectedTextBlock->SetText(OnGetComboBoxText());
							TaskComponentDetail->SetComponent(SelectedComponent);
						}
					})
					[
						SAssignNew(ComboBoxSelectedTextBlock, STextBlock)
						.Text(OnGetComboBoxText())
					]
				]
			]

			VSLOT()
			[
				SAssignNew(TaskComponentDetail, SDreamTaskManagerPage_Debugger_Detail)
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
}

void SDreamTaskManagerPage_Debugger::EndPIE(const bool bIsSimulating)
{
	if (bIsSimulating)
		return;

	WidgetSwitcher->SetActiveWidgetIndex(0);
	SelectedComponent = nullptr;
	TaskComponents.Empty();
	TaskComponentComboBox->SetSelectedItem(nullptr);
}

void SDreamTaskManagerPage_Debugger::HandleUpdate()
{
	TaskComponents.Empty();
	for (TObjectIterator<UDreamTaskComponent> It; It; ++It)
	{
		UDreamTaskComponent* Comp = *It;
		if (Comp->HasAnyFlags(RF_ClassDefaultObject) || Comp->GetOwner() == nullptr
			|| Comp->GetOwner()->HasAnyFlags(RF_ClassDefaultObject)
			|| TaskComponents.Contains(MakeShared<UDreamTaskComponent*>(Comp)))
		{
			continue;
		}

		TaskComponents.Add(MakeShared<UDreamTaskComponent*>(Comp));
	}

	TaskComponentComboBox->RefreshOptions();
}

FText SDreamTaskManagerPage_Debugger::OnGetComboBoxText()
{
	FText Text = SELECT(SelectedComponent.IsValid(),
	                    MAKE_TEXT(TEXT("%s -> %s"), *SelectedComponent.ToSharedRef().Get()->GetOwner()->GetName(), *SelectedComponent.ToSharedRef().Get()->GetName()),
	                    MAKE_TEXT(TEXT("No Selected")));
	return Text;
}

void SDreamTaskManagerPage_Debugger_Detail::Construct(const FArguments& InArgs)
{
	ChildSlot[
		SNew(STextBlock)
	];
}

void SDreamTaskManagerPage_Debugger_Detail::SetComponent(FSharedTaskComponent InComponent)
{
}


#undef LOCTEXT_NAMESPACE
