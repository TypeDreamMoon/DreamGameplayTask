#pragma once

class DREAMGAMEPLAYTASKEDITOR_API FDreamGameplayTaskEditorTools
{
public:
	static UBlueprint* CreateObjectBlueprintByClass(UClass* Class, FString Name, EBlueprintType BlueprintType = BPTYPE_Normal);
	static UObject* CreateDataAssetByClass(TSubclassOf<UPrimaryDataAsset> Class, FString Name);

public:
	static TArray<FString> Conv_DirectoryToStrings(const TArray<FDirectoryPath>& Paths);

public:
	static bool bIsLoadedMemory;
	static void LoadAssetToMemory(UClass* Class);
	static TArray<FAssetData> GetAssetData(UClass* Class);
	static void ForceLoadAssetToMemory(UClass* Class);
};
