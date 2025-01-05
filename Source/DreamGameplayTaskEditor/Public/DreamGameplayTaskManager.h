// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Components/WidgetSwitcher.h"
#include "Widgets/SCompoundWidget.h"

class UDreamTask;

struct FManagerRowData
{
public:
	FManagerRowData() : Task(nullptr), Blueprint(nullptr) {}
	FManagerRowData(UDreamTask* InTask, UBlueprint* InBlueprint) : Task(InTask), Blueprint(InBlueprint) {}
public:
	UDreamTask* Task;
	UBlueprint* Blueprint;
};

/**
 * 
 */
class DREAMGAMEPLAYTASKEDITOR_API SDreamGameplayTaskManager : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SDreamGameplayTaskManager)
		{
		}

	SLATE_END_ARGS()
public:
	typedef TSharedPtr<FManagerRowData> FRowData;
	
public:
	void Construct(const FArguments& InArgs);
	virtual ~SDreamGameplayTaskManager() override;
	
	void RefreshList();
	void ClearList();
	void CheckList();

	void ListerAssetRemoved(const FAssetData& Data);
	void ListerAssetSaved(const FString& PackageName, UPackage* Package, FObjectPostSaveContext ObjectSavedContext);
	
	void RegisterAutoRefreshList();
	void UnregisteredAutoRefreshList();
private:
	FSlateFontInfo GetTextFont(float Size = 10.0f) const;
	TSharedRef<SHorizontalBox> MakeIconAndTextWidget(const FText& Text, const FSlateBrush* IconBrush, int IconSize = 16.0f, float FontSize = 10.0f);
	TSharedRef<STableRow<FRowData>> MakeRow(FRowData RowData, const TSharedRef<STableViewBase>& OwnerTable);
	TSharedRef<ITableRow> OnGenerateRowForList(FRowData InItem, const TSharedRef<STableViewBase>& OwnerTable);
	
protected:
	TSharedPtr<SListView<FRowData>> ListView;
	TSharedPtr<SWidgetSwitcher> Switcher;

	TArray<FRowData> List;
	
	FAssetRegistryModule* AssetRegistryModule = nullptr;

	bool bIsSort = false;
};
