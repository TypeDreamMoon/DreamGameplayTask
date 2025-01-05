// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplayTask/Public/Classes/DreamTaskType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamTaskType() {}

// Begin Cross Module References
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTaskType();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTaskType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_DreamGameplayTask();
// End Cross Module References

// Begin Class UDreamTaskType
void UDreamTaskType::StaticRegisterNativesUDreamTaskType()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDreamTaskType);
UClass* Z_Construct_UClass_UDreamTaskType_NoRegister()
{
	return UDreamTaskType::StaticClass();
}
struct Z_Construct_UClass_UDreamTaskType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Classes/DreamTaskType.h" },
		{ "ModuleRelativePath", "Public/Classes/DreamTaskType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[] = {
		{ "Category", "DreamTaskType" },
		{ "ModuleRelativePath", "Public/Classes/DreamTaskType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeDisplayName_MetaData[] = {
		{ "Category", "DreamTaskType" },
		{ "ModuleRelativePath", "Public/Classes/DreamTaskType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeIcon_MetaData[] = {
		{ "Category", "DreamTaskType" },
		{ "ModuleRelativePath", "Public/Classes/DreamTaskType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TypeName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TypeDisplayName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TypeIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamTaskType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDreamTaskType_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTaskType, TypeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeName_MetaData), NewProp_TypeName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDreamTaskType_Statics::NewProp_TypeDisplayName = { "TypeDisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTaskType, TypeDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeDisplayName_MetaData), NewProp_TypeDisplayName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDreamTaskType_Statics::NewProp_TypeIcon = { "TypeIcon", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTaskType, TypeIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeIcon_MetaData), NewProp_TypeIcon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDreamTaskType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTaskType_Statics::NewProp_TypeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTaskType_Statics::NewProp_TypeDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTaskType_Statics::NewProp_TypeIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTaskType_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDreamTaskType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplayTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTaskType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDreamTaskType_Statics::ClassParams = {
	&UDreamTaskType::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDreamTaskType_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTaskType_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTaskType_Statics::Class_MetaDataParams), Z_Construct_UClass_UDreamTaskType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDreamTaskType()
{
	if (!Z_Registration_Info_UClass_UDreamTaskType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDreamTaskType.OuterSingleton, Z_Construct_UClass_UDreamTaskType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDreamTaskType.OuterSingleton;
}
template<> DREAMGAMEPLAYTASK_API UClass* StaticClass<UDreamTaskType>()
{
	return UDreamTaskType::StaticClass();
}
UDreamTaskType::UDreamTaskType(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamTaskType);
UDreamTaskType::~UDreamTaskType() {}
// End Class UDreamTaskType

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskType_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDreamTaskType, UDreamTaskType::StaticClass, TEXT("UDreamTaskType"), &Z_Registration_Info_UClass_UDreamTaskType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDreamTaskType), 478851090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskType_h_3256236790(TEXT("/Script/DreamGameplayTask"),
	Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskType_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
