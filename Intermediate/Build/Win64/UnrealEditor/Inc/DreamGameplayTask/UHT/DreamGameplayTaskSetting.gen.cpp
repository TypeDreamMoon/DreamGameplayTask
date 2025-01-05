// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplayTask/Public/DreamGameplayTaskSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamGameplayTaskSetting() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamGameplayTaskSetting();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamGameplayTaskSetting_NoRegister();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTask_NoRegister();
UPackage* Z_Construct_UPackage__Script_DreamGameplayTask();
// End Cross Module References

// Begin Class UDreamGameplayTaskSetting
void UDreamGameplayTaskSetting::StaticRegisterNativesUDreamGameplayTaskSetting()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDreamGameplayTaskSetting);
UClass* Z_Construct_UClass_UDreamGameplayTaskSetting_NoRegister()
{
	return UDreamGameplayTaskSetting::StaticClass();
}
struct Z_Construct_UClass_UDreamGameplayTaskSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dream Gameplay Task Setting\n */" },
#endif
		{ "IncludePath", "DreamGameplayTaskSetting.h" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskSetting.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dream Gameplay Task Setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskMapping_MetaData[] = {
		{ "Category", "DreamGameplayTaskSetting" },
		{ "DisplayName", "TaskMapping" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskSetting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaskMapping_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TaskMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TaskMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamGameplayTaskSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDreamGameplayTaskSetting_Statics::NewProp_TaskMapping_ValueProp = { "TaskMapping", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDreamGameplayTaskSetting_Statics::NewProp_TaskMapping_Key_KeyProp = { "TaskMapping_Key", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDreamGameplayTaskSetting_Statics::NewProp_TaskMapping = { "TaskMapping", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamGameplayTaskSetting, TaskMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskMapping_MetaData), NewProp_TaskMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDreamGameplayTaskSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamGameplayTaskSetting_Statics::NewProp_TaskMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamGameplayTaskSetting_Statics::NewProp_TaskMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamGameplayTaskSetting_Statics::NewProp_TaskMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGameplayTaskSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDreamGameplayTaskSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplayTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGameplayTaskSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDreamGameplayTaskSetting_Statics::ClassParams = {
	&UDreamGameplayTaskSetting::StaticClass,
	"DreamGameplayTask",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDreamGameplayTaskSetting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGameplayTaskSetting_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGameplayTaskSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_UDreamGameplayTaskSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDreamGameplayTaskSetting()
{
	if (!Z_Registration_Info_UClass_UDreamGameplayTaskSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDreamGameplayTaskSetting.OuterSingleton, Z_Construct_UClass_UDreamGameplayTaskSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDreamGameplayTaskSetting.OuterSingleton;
}
template<> DREAMGAMEPLAYTASK_API UClass* StaticClass<UDreamGameplayTaskSetting>()
{
	return UDreamGameplayTaskSetting::StaticClass();
}
UDreamGameplayTaskSetting::UDreamGameplayTaskSetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamGameplayTaskSetting);
UDreamGameplayTaskSetting::~UDreamGameplayTaskSetting() {}
// End Class UDreamGameplayTaskSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDreamGameplayTaskSetting, UDreamGameplayTaskSetting::StaticClass, TEXT("UDreamGameplayTaskSetting"), &Z_Registration_Info_UClass_UDreamGameplayTaskSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDreamGameplayTaskSetting), 4242480008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskSetting_h_582086814(TEXT("/Script/DreamGameplayTask"),
	Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
