// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplayTask/Public/DreamGameplayTaskTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamGameplayTaskTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DREAMGAMEPLAYTASK_API UEnum* Z_Construct_UEnum_DreamGameplayTask_EDreamTaskConditionalCompletionMode();
DREAMGAMEPLAYTASK_API UEnum* Z_Construct_UEnum_DreamGameplayTask_EDreamTaskPriority();
DREAMGAMEPLAYTASK_API UEnum* Z_Construct_UEnum_DreamGameplayTask_EDreamTaskState();
DREAMGAMEPLAYTASK_API UScriptStruct* Z_Construct_UScriptStruct_FDreamTaskSaveData();
DREAMGAMEPLAYTASK_API UScriptStruct* Z_Construct_UScriptStruct_FDreamTaskSaveSingle();
UPackage* Z_Construct_UPackage__Script_DreamGameplayTask();
// End Cross Module References

// Begin Enum EDreamTaskState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDreamTaskState;
static UEnum* EDreamTaskState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDreamTaskState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDreamTaskState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DreamGameplayTask_EDreamTaskState, (UObject*)Z_Construct_UPackage__Script_DreamGameplayTask(), TEXT("EDreamTaskState"));
	}
	return Z_Registration_Info_UEnum_EDreamTaskState.OuterSingleton;
}
template<> DREAMGAMEPLAYTASK_API UEnum* StaticEnum<EDreamTaskState>()
{
	return EDreamTaskState_StaticEnum();
}
struct Z_Construct_UEnum_DreamGameplayTask_EDreamTaskState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Task State\n */" },
#endif
		{ "EDTS_Accept.DisplayName", "Accept" },
		{ "EDTS_Accept.Name", "EDreamTaskState::EDTS_Accept" },
		{ "EDTS_Completed.DisplayName", "Completed" },
		{ "EDTS_Completed.Name", "EDreamTaskState::EDTS_Completed" },
		{ "EDTS_Failed.DisplayName", "Failed" },
		{ "EDTS_Failed.Name", "EDreamTaskState::EDTS_Failed" },
		{ "EDTS_Going.DisplayName", "Going" },
		{ "EDTS_Going.Name", "EDreamTaskState::EDTS_Going" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Task State" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDreamTaskState::EDTS_Accept", (int64)EDreamTaskState::EDTS_Accept },
		{ "EDreamTaskState::EDTS_Going", (int64)EDreamTaskState::EDTS_Going },
		{ "EDreamTaskState::EDTS_Completed", (int64)EDreamTaskState::EDTS_Completed },
		{ "EDreamTaskState::EDTS_Failed", (int64)EDreamTaskState::EDTS_Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DreamGameplayTask_EDreamTaskState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DreamGameplayTask,
	nullptr,
	"EDreamTaskState",
	"EDreamTaskState",
	Z_Construct_UEnum_DreamGameplayTask_EDreamTaskState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DreamGameplayTask_EDreamTaskState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DreamGameplayTask_EDreamTaskState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DreamGameplayTask_EDreamTaskState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DreamGameplayTask_EDreamTaskState()
{
	if (!Z_Registration_Info_UEnum_EDreamTaskState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDreamTaskState.InnerSingleton, Z_Construct_UEnum_DreamGameplayTask_EDreamTaskState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDreamTaskState.InnerSingleton;
}
// End Enum EDreamTaskState

// Begin Enum EDreamTaskPriority
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDreamTaskPriority;
static UEnum* EDreamTaskPriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDreamTaskPriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDreamTaskPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DreamGameplayTask_EDreamTaskPriority, (UObject*)Z_Construct_UPackage__Script_DreamGameplayTask(), TEXT("EDreamTaskPriority"));
	}
	return Z_Registration_Info_UEnum_EDreamTaskPriority.OuterSingleton;
}
template<> DREAMGAMEPLAYTASK_API UEnum* StaticEnum<EDreamTaskPriority>()
{
	return EDreamTaskPriority_StaticEnum();
}
struct Z_Construct_UEnum_DreamGameplayTask_EDreamTaskPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Task Priority\n */" },
#endif
		{ "EDTP_High.DisplayName", "High" },
		{ "EDTP_High.Name", "EDreamTaskPriority::EDTP_High" },
		{ "EDTP_Low.DisplayName", "Low" },
		{ "EDTP_Low.Name", "EDreamTaskPriority::EDTP_Low" },
		{ "EDTP_Normal.DisplayName", "Normal" },
		{ "EDTP_Normal.Name", "EDreamTaskPriority::EDTP_Normal" },
		{ "EDTP_Urgent.DisplayName", "Urgent" },
		{ "EDTP_Urgent.Name", "EDreamTaskPriority::EDTP_Urgent" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Task Priority" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDreamTaskPriority::EDTP_Low", (int64)EDreamTaskPriority::EDTP_Low },
		{ "EDreamTaskPriority::EDTP_Normal", (int64)EDreamTaskPriority::EDTP_Normal },
		{ "EDreamTaskPriority::EDTP_High", (int64)EDreamTaskPriority::EDTP_High },
		{ "EDreamTaskPriority::EDTP_Urgent", (int64)EDreamTaskPriority::EDTP_Urgent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DreamGameplayTask_EDreamTaskPriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DreamGameplayTask,
	nullptr,
	"EDreamTaskPriority",
	"EDreamTaskPriority",
	Z_Construct_UEnum_DreamGameplayTask_EDreamTaskPriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DreamGameplayTask_EDreamTaskPriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DreamGameplayTask_EDreamTaskPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DreamGameplayTask_EDreamTaskPriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DreamGameplayTask_EDreamTaskPriority()
{
	if (!Z_Registration_Info_UEnum_EDreamTaskPriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDreamTaskPriority.InnerSingleton, Z_Construct_UEnum_DreamGameplayTask_EDreamTaskPriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDreamTaskPriority.InnerSingleton;
}
// End Enum EDreamTaskPriority

// Begin Enum EDreamTaskConditionalCompletionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDreamTaskConditionalCompletionMode;
static UEnum* EDreamTaskConditionalCompletionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDreamTaskConditionalCompletionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDreamTaskConditionalCompletionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DreamGameplayTask_EDreamTaskConditionalCompletionMode, (UObject*)Z_Construct_UPackage__Script_DreamGameplayTask(), TEXT("EDreamTaskConditionalCompletionMode"));
	}
	return Z_Registration_Info_UEnum_EDreamTaskConditionalCompletionMode.OuterSingleton;
}
template<> DREAMGAMEPLAYTASK_API UEnum* StaticEnum<EDreamTaskConditionalCompletionMode>()
{
	return EDreamTaskConditionalCompletionMode_StaticEnum();
}
struct Z_Construct_UEnum_DreamGameplayTask_EDreamTaskConditionalCompletionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Task Conditional Completion Mode\n */" },
#endif
		{ "EDTCCM_All.DisplayName", "All" },
		{ "EDTCCM_All.Name", "EDreamTaskConditionalCompletionMode::EDTCCM_All" },
		{ "EDTCCM_Any.DisplayName", "Any" },
		{ "EDTCCM_Any.Name", "EDreamTaskConditionalCompletionMode::EDTCCM_Any" },
		{ "EDTCCM_Custom.DisplayName", "Custom" },
		{ "EDTCCM_Custom.Name", "EDreamTaskConditionalCompletionMode::EDTCCM_Custom" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Task Conditional Completion Mode" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDreamTaskConditionalCompletionMode::EDTCCM_All", (int64)EDreamTaskConditionalCompletionMode::EDTCCM_All },
		{ "EDreamTaskConditionalCompletionMode::EDTCCM_Any", (int64)EDreamTaskConditionalCompletionMode::EDTCCM_Any },
		{ "EDreamTaskConditionalCompletionMode::EDTCCM_Custom", (int64)EDreamTaskConditionalCompletionMode::EDTCCM_Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DreamGameplayTask_EDreamTaskConditionalCompletionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DreamGameplayTask,
	nullptr,
	"EDreamTaskConditionalCompletionMode",
	"EDreamTaskConditionalCompletionMode",
	Z_Construct_UEnum_DreamGameplayTask_EDreamTaskConditionalCompletionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DreamGameplayTask_EDreamTaskConditionalCompletionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DreamGameplayTask_EDreamTaskConditionalCompletionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DreamGameplayTask_EDreamTaskConditionalCompletionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DreamGameplayTask_EDreamTaskConditionalCompletionMode()
{
	if (!Z_Registration_Info_UEnum_EDreamTaskConditionalCompletionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDreamTaskConditionalCompletionMode.InnerSingleton, Z_Construct_UEnum_DreamGameplayTask_EDreamTaskConditionalCompletionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDreamTaskConditionalCompletionMode.InnerSingleton;
}
// End Enum EDreamTaskConditionalCompletionMode

// Begin ScriptStruct FDreamTaskSaveSingle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DreamTaskSaveSingle;
class UScriptStruct* FDreamTaskSaveSingle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DreamTaskSaveSingle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DreamTaskSaveSingle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDreamTaskSaveSingle, (UObject*)Z_Construct_UPackage__Script_DreamGameplayTask(), TEXT("DreamTaskSaveSingle"));
	}
	return Z_Registration_Info_UScriptStruct_DreamTaskSaveSingle.OuterSingleton;
}
template<> DREAMGAMEPLAYTASK_API UScriptStruct* StaticStruct<FDreamTaskSaveSingle>()
{
	return FDreamTaskSaveSingle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskGuid_MetaData[] = {
		{ "Category", "DreamTaskSaveSingle" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskProgress_MetaData[] = {
		{ "Category", "DreamTaskSaveSingle" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaskGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TaskProgress_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskProgress_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TaskProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDreamTaskSaveSingle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::NewProp_TaskGuid = { "TaskGuid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDreamTaskSaveSingle, TaskGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskGuid_MetaData), NewProp_TaskGuid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::NewProp_TaskProgress_ValueProp = { "TaskProgress", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::NewProp_TaskProgress_Key_KeyProp = { "TaskProgress_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::NewProp_TaskProgress = { "TaskProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDreamTaskSaveSingle, TaskProgress), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskProgress_MetaData), NewProp_TaskProgress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::NewProp_TaskGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::NewProp_TaskProgress_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::NewProp_TaskProgress_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::NewProp_TaskProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplayTask,
	nullptr,
	&NewStructOps,
	"DreamTaskSaveSingle",
	Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::PropPointers),
	sizeof(FDreamTaskSaveSingle),
	alignof(FDreamTaskSaveSingle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDreamTaskSaveSingle()
{
	if (!Z_Registration_Info_UScriptStruct_DreamTaskSaveSingle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DreamTaskSaveSingle.InnerSingleton, Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DreamTaskSaveSingle.InnerSingleton;
}
// End ScriptStruct FDreamTaskSaveSingle

// Begin ScriptStruct FDreamTaskSaveData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DreamTaskSaveData;
class UScriptStruct* FDreamTaskSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DreamTaskSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DreamTaskSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDreamTaskSaveData, (UObject*)Z_Construct_UPackage__Script_DreamGameplayTask(), TEXT("DreamTaskSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_DreamTaskSaveData.OuterSingleton;
}
template<> DREAMGAMEPLAYTASK_API UScriptStruct* StaticStruct<FDreamTaskSaveData>()
{
	return FDreamTaskSaveData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDreamTaskSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveData_MetaData[] = {
		{ "Category", "DreamTaskSaveData" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDreamTaskSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDreamTaskSaveData_Statics::NewProp_SaveData_Inner = { "SaveData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDreamTaskSaveSingle, METADATA_PARAMS(0, nullptr) }; // 3159717839
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDreamTaskSaveData_Statics::NewProp_SaveData = { "SaveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDreamTaskSaveData, SaveData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveData_MetaData), NewProp_SaveData_MetaData) }; // 3159717839
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDreamTaskSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDreamTaskSaveData_Statics::NewProp_SaveData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDreamTaskSaveData_Statics::NewProp_SaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDreamTaskSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDreamTaskSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplayTask,
	nullptr,
	&NewStructOps,
	"DreamTaskSaveData",
	Z_Construct_UScriptStruct_FDreamTaskSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDreamTaskSaveData_Statics::PropPointers),
	sizeof(FDreamTaskSaveData),
	alignof(FDreamTaskSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDreamTaskSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDreamTaskSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDreamTaskSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_DreamTaskSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DreamTaskSaveData.InnerSingleton, Z_Construct_UScriptStruct_FDreamTaskSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DreamTaskSaveData.InnerSingleton;
}
// End ScriptStruct FDreamTaskSaveData

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDreamTaskState_StaticEnum, TEXT("EDreamTaskState"), &Z_Registration_Info_UEnum_EDreamTaskState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3331094815U) },
		{ EDreamTaskPriority_StaticEnum, TEXT("EDreamTaskPriority"), &Z_Registration_Info_UEnum_EDreamTaskPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 637693061U) },
		{ EDreamTaskConditionalCompletionMode_StaticEnum, TEXT("EDreamTaskConditionalCompletionMode"), &Z_Registration_Info_UEnum_EDreamTaskConditionalCompletionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 931047879U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDreamTaskSaveSingle::StaticStruct, Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics::NewStructOps, TEXT("DreamTaskSaveSingle"), &Z_Registration_Info_UScriptStruct_DreamTaskSaveSingle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDreamTaskSaveSingle), 3159717839U) },
		{ FDreamTaskSaveData::StaticStruct, Z_Construct_UScriptStruct_FDreamTaskSaveData_Statics::NewStructOps, TEXT("DreamTaskSaveData"), &Z_Registration_Info_UScriptStruct_DreamTaskSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDreamTaskSaveData), 2257722840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskTypes_h_3082752930(TEXT("/Script/DreamGameplayTask"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
