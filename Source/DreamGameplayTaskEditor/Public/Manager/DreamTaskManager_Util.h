﻿#pragma once

#include "CoreMinimal.h"

#include "DreamGameplayTaskEditorStyle.h"

namespace FDreamTaskManagerUtil
{
#define MAKE_TEXT(Format, ...) FText::FromString(FString::Printf(Format, ##__VA_ARGS__))

	namespace Align
	{
#define HFILL HAlign_Fill
#define HCENTER HAlign_Center
#define HLEFT HAlign_Left
#define HRIGHT HAlign_Right
#define VFILL VAlign_Fill
#define VCENTER VAlign_Center

#define VB SVerticalBox
#define HB SHorizontalBox
#define VA(A) .VAlign(A)
#define HA(A) .HAlign(A)
#define OSLOT(Opt) + SOverlay::Slot()
#define HSLOT(Opt) + SHorizontalBox::Slot()
#define VSLOT(Opt) + SVerticalBox::Slot()
	}

#define MARGIN(Value) FMargin(Value)
#define GET_STYLE FDreamGameplayTaskEditorStyle::Get()
#define GET_STYLE_BRUSH(BrushName) GET_STYLE->GetBrush(TEXT("DreamGameplayTaskEditor." BrushName))
#define SELECT(Condition, True, False) Condition ? True : False

	DREAMGAMEPLAYTASKEDITOR_API TSharedRef<SHorizontalBox> MakeIconAndTextWidget(const FText& Text, const FSlateBrush* IconBrush, int IconSize = 16.0f, float FontSize = 10.0f);
	DREAMGAMEPLAYTASKEDITOR_API FSlateFontInfo GetTextFont(float Size = 10.0f);
	DREAMGAMEPLAYTASKEDITOR_API TSharedRef<SWidget> MakeText(const FText& InText);
	DREAMGAMEPLAYTASKEDITOR_API TSharedRef<SWidget> MakeText(const FString& InString);
};
