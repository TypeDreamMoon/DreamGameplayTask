#include "DreamGameplayTaskEditorTools.h"

#include "AssetToolsModule.h"
#include "DreamGameplayTaskEditorLog.h"
#include "DreamGameplayTaskEditorModule.h"
#include "DreamGameplayTaskEditorSetting.h"
#include "DreamGameplayTaskSetting.h"
#include "KismetCompilerModule.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Classes/DreamTask.h"
#include "Dialogs/DlgPickAssetPath.h"
#include "Dialogs/DlgPickPath.h"
#include "Engine/ObjectLibrary.h"
#include "Factories/DataAssetFactory.h"
#include "Kismet2/KismetEditorUtilities.h"

UBlueprint* FDreamGameplayTaskEditorTools::CreateObjectBlueprintByClass(TSubclassOf<UObject> Class, FString Name, EBlueprintType BlueprintType)
{
	if (!FKismetEditorUtilities::CanCreateBlueprintOfClass(Class))
	{
		DGT_ED_FLOG(Error, TEXT("Can't create blueprint for class"));
		return nullptr;
	}

	// Pre-generate a unique asset name to fill out the path picker dialog with.
	if (Name.Len() == 0)
	{
		Name = TEXT("NewBlueprint");
	}

	// Load required modules
	FModuleManager::LoadModuleChecked<IKismetCompilerInterface>("KismetCompiler");
	FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");

	// Get classes needed for blueprint creation
	UClass* BlueprintClass = nullptr;
	UClass* BlueprintGeneratedClass = nullptr;
	IKismetCompilerInterface& KismetCompilerModule = FModuleManager::GetModuleChecked<IKismetCompilerInterface>("KismetCompiler");
	KismetCompilerModule.GetBlueprintTypesForClass(Class, BlueprintClass, BlueprintGeneratedClass);

	// Generate initial package and asset names
	FString CurrentPath = FModuleManager::LoadModuleChecked<FDreamGameplayTaskEditorModule>("DreamGameplayTaskEditor").CurrentContentBrowserPath;
	FString PackageName = CurrentPath.Right(CurrentPath.Len() - 4) / Name;
	FString UName;
	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
	AssetToolsModule.Get().CreateUniqueAssetName(PackageName, TEXT(""), PackageName, UName);

	UBlueprint* Blueprint = nullptr;


	// Show the asset path picker dialog
	TSharedPtr<SDlgPickAssetPath> PickAssetPathWidget =
		SNew(SDlgPickAssetPath)
		.Title(FText::FromString(TEXT("Create New Asset")))
		.DefaultAssetPath(FText::FromString(PackageName));

	if (EAppReturnType::Ok == PickAssetPathWidget->ShowModal())
	{
		// Get the full name of where we want to create the Blueprint
		FString UserPackageName = PickAssetPathWidget->GetFullAssetPath().ToString();
		FName BPName(*FPackageName::GetLongPackageAssetName(UserPackageName));

		// Check if the user inputted a valid asset name, if they did not, use the generated default name
		if (BPName == NAME_None)
		{
			// Use the defaults that were already generated.
			UserPackageName = PackageName;
			BPName = *UName;
		}

		// Then find or create the package
		UPackage* Package = CreatePackage(*UserPackageName);
		check(Package);

		// Create and initialize a new Blueprint
		Blueprint = FKismetEditorUtilities::CreateBlueprint(Class, Package, BPName, BlueprintType, BlueprintClass, BlueprintGeneratedClass, FName("LevelEditorActions"));
		if (Blueprint)
		{
			// Notify the asset registry
			FAssetRegistryModule::AssetCreated(Blueprint);

			// Mark the package dirty
			Package->MarkPackageDirty();

			DGT_ED_FLOG(Log, TEXT("Create Blueprint %s"), *UserPackageName);

			if (Class->IsChildOf(UDreamTask::StaticClass()))
			{
				if (UDreamGameplayTaskSetting* Setting = UDreamGameplayTaskSetting::Get())
				{
					Setting->MakeTaskMapping(Blueprint->GeneratedClass->GetDefaultObject<UDreamTask>());
				}
			}

			GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAsset(Blueprint);
			return Blueprint;
		}
	}

	return nullptr;
}

UObject* FDreamGameplayTaskEditorTools::CreateDataAssetByClass(TSubclassOf<UPrimaryDataAsset> Class, FString Name)
{
	if (!Class)
	{
		DGT_ED_FLOG(Error, TEXT("Class is null."));
		return nullptr;
	}

	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");

	UDataAssetFactory* Factory = NewObject<UDataAssetFactory>();
	if (!Factory)
	{
		DGT_ED_FLOG(Error, TEXT("Factory is null."));
		return nullptr;
	}

	Factory->SupportedClass = Class;

	FString CurrentPath = FModuleManager::LoadModuleChecked<FDreamGameplayTaskEditorModule>("DreamGameplayTaskEditor").CurrentContentBrowserPath;
	const FString DefaultPath = CurrentPath.Right(CurrentPath.Len() - 4) / Name;

	DGT_ED_LOG(Log, TEXT("%s"), *DefaultPath);

	TSharedPtr<SDlgPickPath> PickAssetPathWidget =
		SNew(SDlgPickPath)
		.Title(FText::FromString(TEXT("Create New Data Asset")))
		.DefaultPath(FText::FromString(DefaultPath));

	if (EAppReturnType::Ok == PickAssetPathWidget->ShowModal())
	{
		FString SelectedPath = PickAssetPathWidget->GetPath().ToString();
		FString UName, UPath;
		AssetToolsModule.Get().CreateUniqueAssetName(SelectedPath / Name, TEXT(""), UPath, UName);

		FString AssetName = UName;

		UObject* NewAsset = AssetToolsModule.Get().CreateAsset(UName, SelectedPath, Class, Factory);

		if (!NewAsset)
		{
			DGT_ED_FLOG(Error, TEXT("Create Failed."))
			return nullptr;
		}

		GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAsset(NewAsset);
		return NewAsset;
	}
	else
	{
		DGT_ED_LOG(Warning, TEXT("User Canceled."))
		return nullptr;
	}
}

TArray<FString> FDreamGameplayTaskEditorTools::Conv_DirectoryToStrings(const TArray<FDirectoryPath>& Paths)
{
	TArray<FString> Out;
	for (auto& Path : Paths)
	{
		Out.Add(Path.Path);
	}
	return Out;
}

bool FDreamGameplayTaskEditorTools::bIsLoadedMemory = false;

void FDreamGameplayTaskEditorTools::LoadAssetToMemory()
{
	if (bIsLoadedMemory) return;

	bIsLoadedMemory = true;

	UObjectLibrary* ObjectLibrary = UObjectLibrary::CreateLibrary(UDreamTask::StaticClass(), true, GIsEditor);
	ObjectLibrary->AddToRoot();

	TArray<FString> Paths = Conv_DirectoryToStrings(UDreamGameplayTaskEditorSetting::Get()->TaskLoadPaths);

	int32 AssetNum = ObjectLibrary->LoadAssetDataFromPaths(Paths, false);
	int32 BlueprintNum = ObjectLibrary->LoadBlueprintAssetDataFromPaths(Paths, false);
	// int32 BlueprintNum = ObjectLibrary->LoadBlueprintsFromPaths(Paths);

	ObjectLibrary->LoadAssetsFromAssetData();

	for (auto Path : Paths)
	{
		DGT_ED_FLOG(Log, TEXT("Load Result: Find Path: %s"), *Path);
	}
	DGT_ED_FLOG(Log, TEXT("Load Result: Asset: %d Blueprint: %d"), AssetNum, BlueprintNum);

	ObjectLibrary->RemoveFromRoot();
	return;
}

TArray<FAssetData> FDreamGameplayTaskEditorTools::GetTaskAssetData()
{
	UObjectLibrary* Library = UObjectLibrary::CreateLibrary(UDreamTask::StaticClass(), true, GIsEditor);
	Library->AddToRoot();

	TArray<FString> Paths = Conv_DirectoryToStrings(UDreamGameplayTaskEditorSetting::Get()->TaskLoadPaths);

	Library->LoadBlueprintAssetDataFromPaths(Paths);

	TArray<FAssetData> Result;

	Library->GetAssetDataList(Result);

	return Result;
}

void FDreamGameplayTaskEditorTools::ForceLoadAssetToMemory()
{
	bIsLoadedMemory = false;
	LoadAssetToMemory();
}
