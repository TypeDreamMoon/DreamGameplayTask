#include "Manager/DreamTaskManagerPage_Debugger.h"

#include "ClassViewerModule.h"
#include "ClassViewerFilter.h"
#include "Classes/DreamTaskComponent.h"
#include "Components/WidgetSwitcher.h"
#include "Kismet2/SClassPickerDialog.h"
#include "Manager/DreamTaskManager_Util.h"
#include "Manager/Widgets/DreamTaskManagerDebugger_Detail.h"

#define LOCTEXT_NAMESPACE "DreamTaskManagerPage_Debugger"


#define DECODE_TSharedPtr(Var) Var.ToSharedRef().Get()

class FDreamGameplayTaskManagerTaskClassFiler : public IClassViewerFilter
{
public:
	/** All children of these classes will be included unless filtered out by another setting. */
	TSet<const UClass*> AllowedChildrenOfClasses;

	/** Disallowed class flags. */
	EClassFlags DisallowedClassFlags = CLASS_None;

	virtual bool IsClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const UClass* InClass, TSharedRef<FClassViewerFilterFuncs> InFilterFuncs) override
	{
		return !InClass->HasAnyClassFlags(DisallowedClassFlags)
			&& InFilterFuncs->IfInChildOfClassesSet(AllowedChildrenOfClasses, InClass) != EFilterReturn::Failed;
	}

	virtual bool IsUnloadedClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const TSharedRef<const IUnloadedBlueprintData> InUnloadedClassData, TSharedRef<FClassViewerFilterFuncs> InFilterFuncs) override
	{
		return !InUnloadedClassData->HasAnyClassFlags(DisallowedClassFlags)
			&& InFilterFuncs->IfInChildOfClassesSet(AllowedChildrenOfClasses, InUnloadedClassData) != EFilterReturn::Failed;
	}
};

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
							TaskComponentDetail->SetVisibility(EVisibility::Visible);
						}
					})
					[
						SAssignNew(ComboBoxSelectedTextBlock, STextBlock)
						.Text(OnGetComboBoxText())
					]
				]

				HSLOT()
				.Padding(5.f)
				[
					SNew(SButton)
					.Text(LOCTEXT("GiveTask", "Give Task"))
					.OnClicked_Lambda([this]()
					{
						if (!SelectedComponent.IsValid()) return FReply::Handled();

						UClass* Class = UDreamTask::StaticClass();
						UClass* ChosenClass = UDreamTask::StaticClass();

						FClassViewerInitializationOptions Options;
						Options.DisplayMode = EClassViewerDisplayMode::Type::TreeView;
						Options.Mode = EClassViewerMode::ClassPicker;
						Options.bShowNoneOption = false;
						Options.bExpandAllNodes = true;

						TSharedPtr<FDreamGameplayTaskManagerTaskClassFiler> Filter = MakeShareable(new FDreamGameplayTaskManagerTaskClassFiler);
						Options.ClassFilters.Add(Filter.ToSharedRef());

						Filter->DisallowedClassFlags = CLASS_Deprecated | CLASS_NewerVersionExists | CLASS_Abstract | CLASS_HideDropDown;
						Filter->AllowedChildrenOfClasses.Add(Class);

						const FText TitleText = LOCTEXT("GiveTask", "Pick Task Class");
						SClassPickerDialog::PickClass(TitleText, Options, ChosenClass, Class);

						DECODE_TSharedPtr(SelectedComponent)->GiveTaskByClass(ChosenClass);

						return FReply::Handled();
					})
				]
			]

			VSLOT()
			HA(HFILL)
			VA(VFILL)
			[
				SAssignNew(TaskComponentDetail, SDreamTaskManagerDebugger_Detail)
				.Visibility(EVisibility::Collapsed)
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
	TaskComponentDetail->SetVisibility(EVisibility::Collapsed);
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


#undef LOCTEXT_NAMESPACE
