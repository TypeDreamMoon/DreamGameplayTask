// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplayTaskEditor/Public/DreamGameplayTaskEditorSetting.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamGameplayTaskEditorSetting() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
DREAMGAMEPLAYTASKEDITOR_API UClass* Z_Construct_UClass_UDreamGameplayTaskEditorSetting();
DREAMGAMEPLAYTASKEDITOR_API UClass* Z_Construct_UClass_UDreamGameplayTaskEditorSetting_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
UPackage* Z_Construct_UPackage__Script_DreamGameplayTaskEditor();
// End Cross Module References

// Begin Class UDreamGameplayTaskEditorSetting
void UDreamGameplayTaskEditorSetting::StaticRegisterNativesUDreamGameplayTaskEditorSetting()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDreamGameplayTaskEditorSetting);
UClass* Z_Construct_UClass_UDreamGameplayTaskEditorSetting_NoRegister()
{
	return UDreamGameplayTaskEditorSetting::StaticClass();
}
struct Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DreamGameplayTaskEditorSetting.h" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskEditorSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskLoadPaths_MetaData[] = {
		{ "Category", "Manager" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskEditorSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bManagerStartupRefresh_MetaData[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskEditorSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagerFont_MetaData[] = {
		{ "Category", "Manager|Style" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskEditorSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagerVersion_MetaData[] = {
		{ "Category", "Version" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskEditorSetting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginVersion_MetaData[] = {
		{ "Category", "Version" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskEditorSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaskLoadPaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskLoadPaths;
	static void NewProp_bManagerStartupRefresh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bManagerStartupRefresh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ManagerFont;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ManagerVersion;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PluginVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamGameplayTaskEditorSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::NewProp_TaskLoadPaths_Inner = { "TaskLoadPaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::NewProp_TaskLoadPaths = { "TaskLoadPaths", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamGameplayTaskEditorSetting, TaskLoadPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskLoadPaths_MetaData), NewProp_TaskLoadPaths_MetaData) };
void Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::NewProp_bManagerStartupRefresh_SetBit(void* Obj)
{
	((UDreamGameplayTaskEditorSetting*)Obj)->bManagerStartupRefresh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::NewProp_bManagerStartupRefresh = { "bManagerStartupRefresh", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDreamGameplayTaskEditorSetting), &Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::NewProp_bManagerStartupRefresh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bManagerStartupRefresh_MetaData), NewProp_bManagerStartupRefresh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::NewProp_ManagerFont = { "ManagerFont", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamGameplayTaskEditorSetting, ManagerFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagerFont_MetaData), NewProp_ManagerFont_MetaData) }; // 1633227880
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::NewProp_ManagerVersion = { "ManagerVersion", nullptr, (EPropertyFlags)0x0010000000034015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamGameplayTaskEditorSetting, ManagerVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagerVersion_MetaData), NewProp_ManagerVersion_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::NewProp_PluginVersion = { "PluginVersion", nullptr, (EPropertyFlags)0x0010000000034015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamGameplayTaskEditorSetting, PluginVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginVersion_MetaData), NewProp_PluginVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::NewProp_TaskLoadPaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::NewProp_TaskLoadPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::NewProp_bManagerStartupRefresh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::NewProp_ManagerFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::NewProp_ManagerVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::NewProp_PluginVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplayTaskEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::ClassParams = {
	&UDreamGameplayTaskEditorSetting::StaticClass,
	"DreamGameplayTaskEditor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDreamGameplayTaskEditorSetting()
{
	if (!Z_Registration_Info_UClass_UDreamGameplayTaskEditorSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDreamGameplayTaskEditorSetting.OuterSingleton, Z_Construct_UClass_UDreamGameplayTaskEditorSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDreamGameplayTaskEditorSetting.OuterSingleton;
}
template<> DREAMGAMEPLAYTASKEDITOR_API UClass* StaticClass<UDreamGameplayTaskEditorSetting>()
{
	return UDreamGameplayTaskEditorSetting::StaticClass();
}
UDreamGameplayTaskEditorSetting::UDreamGameplayTaskEditorSetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamGameplayTaskEditorSetting);
UDreamGameplayTaskEditorSetting::~UDreamGameplayTaskEditorSetting() {}
// End Class UDreamGameplayTaskEditorSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTaskEditor_Public_DreamGameplayTaskEditorSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDreamGameplayTaskEditorSetting, UDreamGameplayTaskEditorSetting::StaticClass, TEXT("UDreamGameplayTaskEditorSetting"), &Z_Registration_Info_UClass_UDreamGameplayTaskEditorSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDreamGameplayTaskEditorSetting), 2280877151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTaskEditor_Public_DreamGameplayTaskEditorSetting_h_441564792(TEXT("/Script/DreamGameplayTaskEditor"),
	Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTaskEditor_Public_DreamGameplayTaskEditorSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTaskEditor_Public_DreamGameplayTaskEditorSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
