// Fill out your copyright notice in the Description page of Project Settings.


#include "Manager/DreamTaskManager.h"

#include "SlateOptMacros.h"
#include "Components/WidgetSwitcher.h"
#include "Manager/DreamTaskManager_Util.h"
#include "Manager/DreamTaskManagerPage_Debugger.h"
#include "Manager/DreamTaskManagerPage_Manager.h"

#define LOCTEXT_NAMESPACE "DreamGameplayTaskManager"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

using namespace FDreamTaskManagerUtil;

void SDreamGameplayTaskManager::Construct(const FArguments& InArgs)
{
	ChildSlot[
		SNew(SOverlay)


		+ SOverlay::Slot()
		.Padding(5.f)
		[
			SNew(SVerticalBox)

			VSLOT() // Header
			.AutoHeight()
			[
				SNew(SHorizontalBox)

				HSLOT() // Title
				VA(VFILL)
				HA(HFILL)
				.Padding(5.f)
				[
					SNew(STextBlock)
					.Font(GetTextFont(15.f))
					.Text(LOCTEXT("Title", "Dream Gameplay Task"))
				] // End Title


				HSLOT()
				HA(HRIGHT)
				VA(VFILL)
				.Padding(2.f)
				[
					SNew(HB)

					HSLOT()
					HA(HFILL)
					VA(VFILL)
					.Padding(2.f)
					[
						SNew(SButton)
						.Text(LOCTEXT("ManagerButton", "Manager"))
						.OnClicked_Lambda([this]()
						{
							PageSwitcher->SetActiveWidget(Page_Manager.ToSharedRef());
							return FReply::Handled();
						})
					]

					HSLOT()
					.AutoWidth()
					HA(HRIGHT)
					VA(VFILL)
					.Padding(2.f)
					[
						SNew(SButton)
						.Text(LOCTEXT("DebuggerButton", "Debugger"))
						.OnClicked_Lambda([this]()
						{
							PageSwitcher->SetActiveWidget(Page_Debugger.ToSharedRef());
							return FReply::Handled();
						})
					]

				]
			] // End Header

			VSLOT()
			HA(HFILL)
			VA(VFILL)
			[
				SAssignNew(PageSwitcher, SWidgetSwitcher)

				+ SWidgetSwitcher::Slot()
				[
					SAssignNew(Page_Manager, SDreamTaskManagerPage_Manager)
				]

				+ SWidgetSwitcher::Slot()
				[
					SAssignNew(Page_Debugger, SDreamTaskManagerPage_Debugger)
				]
			]
		]
	];
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION

#undef LOCTEXT_NAMESPACE
