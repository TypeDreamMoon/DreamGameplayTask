// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplayTask/Public/DreamGameplayTaskBlueprintLibrary.h"
#include "DreamGameplayTask/Public/DreamGameplayTaskTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamGameplayTaskBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary_NoRegister();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTask_NoRegister();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTaskComponent_NoRegister();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTaskType_NoRegister();
DREAMGAMEPLAYTASK_API UEnum* Z_Construct_UEnum_DreamGameplayTask_EDreamTaskPriority();
DREAMGAMEPLAYTASK_API UEnum* Z_Construct_UEnum_DreamGameplayTask_EDreamTaskState();
DREAMGAMEPLAYTASK_API UScriptStruct* Z_Construct_UScriptStruct_FDreamTaskSaveData();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_DreamGameplayTask();
// End Cross Module References

// Begin Class UDreamGameplayTaskBlueprintLibrary Function ConstructDreamGameplayTaskSaveData
struct Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics
{
	struct DreamGameplayTaskBlueprintLibrary_eventConstructDreamGameplayTaskSaveData_Parms
	{
		TArray<UDreamTask*> Tasks;
		FDreamTaskSaveData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DreamGameplayTaskBlueprint" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tasks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventConstructDreamGameplayTaskSaveData_Parms, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventConstructDreamGameplayTaskSaveData_Parms, ReturnValue), Z_Construct_UScriptStruct_FDreamTaskSaveData, METADATA_PARAMS(0, nullptr) }; // 2257722840
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics::NewProp_Tasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics::NewProp_Tasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary, nullptr, "ConstructDreamGameplayTaskSaveData", nullptr, nullptr, Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics::DreamGameplayTaskBlueprintLibrary_eventConstructDreamGameplayTaskSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics::DreamGameplayTaskBlueprintLibrary_eventConstructDreamGameplayTaskSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamGameplayTaskBlueprintLibrary::execConstructDreamGameplayTaskSaveData)
{
	P_GET_TARRAY(UDreamTask*,Z_Param_Tasks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDreamTaskSaveData*)Z_Param__Result=UDreamGameplayTaskBlueprintLibrary::ConstructDreamGameplayTaskSaveData(Z_Param_Tasks);
	P_NATIVE_END;
}
// End Class UDreamGameplayTaskBlueprintLibrary Function ConstructDreamGameplayTaskSaveData

// Begin Class UDreamGameplayTaskBlueprintLibrary Function DestructDreamGameplayTaskSaveData
struct Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics
{
	struct DreamGameplayTaskBlueprintLibrary_eventDestructDreamGameplayTaskSaveData_Parms
	{
		FDreamTaskSaveData Data;
		TArray<UDreamTask*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DreamGameplayTaskBlueprint" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventDestructDreamGameplayTaskSaveData_Parms, Data), Z_Construct_UScriptStruct_FDreamTaskSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2257722840
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventDestructDreamGameplayTaskSaveData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary, nullptr, "DestructDreamGameplayTaskSaveData", nullptr, nullptr, Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics::DreamGameplayTaskBlueprintLibrary_eventDestructDreamGameplayTaskSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics::DreamGameplayTaskBlueprintLibrary_eventDestructDreamGameplayTaskSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamGameplayTaskBlueprintLibrary::execDestructDreamGameplayTaskSaveData)
{
	P_GET_STRUCT_REF(FDreamTaskSaveData,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UDreamTask*>*)Z_Param__Result=UDreamGameplayTaskBlueprintLibrary::DestructDreamGameplayTaskSaveData(Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class UDreamGameplayTaskBlueprintLibrary Function DestructDreamGameplayTaskSaveData

// Begin Class UDreamGameplayTaskBlueprintLibrary Function FilterTasksByPriority
struct Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics
{
	struct DreamGameplayTaskBlueprintLibrary_eventFilterTasksByPriority_Parms
	{
		TArray<UDreamTask*> Tasks;
		EDreamTaskPriority Priority;
		TArray<UDreamTask*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DreamGameplayTaskBlueprint" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tasks;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventFilterTasksByPriority_Parms, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tasks_MetaData), NewProp_Tasks_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventFilterTasksByPriority_Parms, Priority), Z_Construct_UEnum_DreamGameplayTask_EDreamTaskPriority, METADATA_PARAMS(0, nullptr) }; // 637693061
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventFilterTasksByPriority_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::NewProp_Tasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::NewProp_Tasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::NewProp_Priority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary, nullptr, "FilterTasksByPriority", nullptr, nullptr, Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::DreamGameplayTaskBlueprintLibrary_eventFilterTasksByPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::DreamGameplayTaskBlueprintLibrary_eventFilterTasksByPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamGameplayTaskBlueprintLibrary::execFilterTasksByPriority)
{
	P_GET_TARRAY_REF(UDreamTask*,Z_Param_Out_Tasks);
	P_GET_ENUM(EDreamTaskPriority,Z_Param_Priority);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UDreamTask*>*)Z_Param__Result=UDreamGameplayTaskBlueprintLibrary::FilterTasksByPriority(Z_Param_Out_Tasks,EDreamTaskPriority(Z_Param_Priority));
	P_NATIVE_END;
}
// End Class UDreamGameplayTaskBlueprintLibrary Function FilterTasksByPriority

// Begin Class UDreamGameplayTaskBlueprintLibrary Function FilterTasksByState
struct Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics
{
	struct DreamGameplayTaskBlueprintLibrary_eventFilterTasksByState_Parms
	{
		TArray<UDreamTask*> Tasks;
		EDreamTaskState State;
		TArray<UDreamTask*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DreamGameplayTaskBlueprint" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tasks;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventFilterTasksByState_Parms, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tasks_MetaData), NewProp_Tasks_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventFilterTasksByState_Parms, State), Z_Construct_UEnum_DreamGameplayTask_EDreamTaskState, METADATA_PARAMS(0, nullptr) }; // 3331094815
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventFilterTasksByState_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::NewProp_Tasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::NewProp_Tasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary, nullptr, "FilterTasksByState", nullptr, nullptr, Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::DreamGameplayTaskBlueprintLibrary_eventFilterTasksByState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::DreamGameplayTaskBlueprintLibrary_eventFilterTasksByState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamGameplayTaskBlueprintLibrary::execFilterTasksByState)
{
	P_GET_TARRAY_REF(UDreamTask*,Z_Param_Out_Tasks);
	P_GET_ENUM(EDreamTaskState,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UDreamTask*>*)Z_Param__Result=UDreamGameplayTaskBlueprintLibrary::FilterTasksByState(Z_Param_Out_Tasks,EDreamTaskState(Z_Param_State));
	P_NATIVE_END;
}
// End Class UDreamGameplayTaskBlueprintLibrary Function FilterTasksByState

// Begin Class UDreamGameplayTaskBlueprintLibrary Function FilterTasksByType
struct Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics
{
	struct DreamGameplayTaskBlueprintLibrary_eventFilterTasksByType_Parms
	{
		TArray<UDreamTask*> Tasks;
		UDreamTaskType* TaskType;
		TArray<UDreamTask*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DreamGameplayTaskBlueprint" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tasks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventFilterTasksByType_Parms, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tasks_MetaData), NewProp_Tasks_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::NewProp_TaskType = { "TaskType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventFilterTasksByType_Parms, TaskType), Z_Construct_UClass_UDreamTaskType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventFilterTasksByType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::NewProp_Tasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::NewProp_Tasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::NewProp_TaskType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary, nullptr, "FilterTasksByType", nullptr, nullptr, Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::DreamGameplayTaskBlueprintLibrary_eventFilterTasksByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::DreamGameplayTaskBlueprintLibrary_eventFilterTasksByType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamGameplayTaskBlueprintLibrary::execFilterTasksByType)
{
	P_GET_TARRAY_REF(UDreamTask*,Z_Param_Out_Tasks);
	P_GET_OBJECT(UDreamTaskType,Z_Param_TaskType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UDreamTask*>*)Z_Param__Result=UDreamGameplayTaskBlueprintLibrary::FilterTasksByType(Z_Param_Out_Tasks,Z_Param_TaskType);
	P_NATIVE_END;
}
// End Class UDreamGameplayTaskBlueprintLibrary Function FilterTasksByType

// Begin Class UDreamGameplayTaskBlueprintLibrary Function GetDreamTaskClassByGUID
struct Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID_Statics
{
	struct DreamGameplayTaskBlueprintLibrary_eventGetDreamTaskClassByGUID_Parms
	{
		FGuid Guid;
		TSubclassOf<UDreamTask> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DreamGameplayTaskBlueprint" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventGetDreamTaskClassByGUID_Parms, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventGetDreamTaskClassByGUID_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary, nullptr, "GetDreamTaskClassByGUID", nullptr, nullptr, Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID_Statics::DreamGameplayTaskBlueprintLibrary_eventGetDreamTaskClassByGUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID_Statics::DreamGameplayTaskBlueprintLibrary_eventGetDreamTaskClassByGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamGameplayTaskBlueprintLibrary::execGetDreamTaskClassByGUID)
{
	P_GET_STRUCT(FGuid,Z_Param_Guid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UDreamTask>*)Z_Param__Result=UDreamGameplayTaskBlueprintLibrary::GetDreamTaskClassByGUID(Z_Param_Guid);
	P_NATIVE_END;
}
// End Class UDreamGameplayTaskBlueprintLibrary Function GetDreamTaskClassByGUID

// Begin Class UDreamGameplayTaskBlueprintLibrary Function GetDreamTaskComponent
struct Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent_Statics
{
	struct DreamGameplayTaskBlueprintLibrary_eventGetDreamTaskComponent_Parms
	{
		AActor* Actor;
		UDreamTaskComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DreamGameplayTaskBlueprint" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventGetDreamTaskComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventGetDreamTaskComponent_Parms, ReturnValue), Z_Construct_UClass_UDreamTaskComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary, nullptr, "GetDreamTaskComponent", nullptr, nullptr, Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent_Statics::DreamGameplayTaskBlueprintLibrary_eventGetDreamTaskComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent_Statics::DreamGameplayTaskBlueprintLibrary_eventGetDreamTaskComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamGameplayTaskBlueprintLibrary::execGetDreamTaskComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDreamTaskComponent**)Z_Param__Result=UDreamGameplayTaskBlueprintLibrary::GetDreamTaskComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UDreamGameplayTaskBlueprintLibrary Function GetDreamTaskComponent

// Begin Class UDreamGameplayTaskBlueprintLibrary Function GetDreamTaskGuid
struct Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid_Statics
{
	struct DreamGameplayTaskBlueprintLibrary_eventGetDreamTaskGuid_Parms
	{
		TSubclassOf<UDreamTask> InTaskClass;
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DreamGameplayTaskBlueprint" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InTaskClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid_Statics::NewProp_InTaskClass = { "InTaskClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventGetDreamTaskGuid_Parms, InTaskClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamGameplayTaskBlueprintLibrary_eventGetDreamTaskGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid_Statics::NewProp_InTaskClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary, nullptr, "GetDreamTaskGuid", nullptr, nullptr, Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid_Statics::DreamGameplayTaskBlueprintLibrary_eventGetDreamTaskGuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid_Statics::DreamGameplayTaskBlueprintLibrary_eventGetDreamTaskGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamGameplayTaskBlueprintLibrary::execGetDreamTaskGuid)
{
	P_GET_OBJECT(UClass,Z_Param_InTaskClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=UDreamGameplayTaskBlueprintLibrary::GetDreamTaskGuid(Z_Param_InTaskClass);
	P_NATIVE_END;
}
// End Class UDreamGameplayTaskBlueprintLibrary Function GetDreamTaskGuid

// Begin Class UDreamGameplayTaskBlueprintLibrary
void UDreamGameplayTaskBlueprintLibrary::StaticRegisterNativesUDreamGameplayTaskBlueprintLibrary()
{
	UClass* Class = UDreamGameplayTaskBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConstructDreamGameplayTaskSaveData", &UDreamGameplayTaskBlueprintLibrary::execConstructDreamGameplayTaskSaveData },
		{ "DestructDreamGameplayTaskSaveData", &UDreamGameplayTaskBlueprintLibrary::execDestructDreamGameplayTaskSaveData },
		{ "FilterTasksByPriority", &UDreamGameplayTaskBlueprintLibrary::execFilterTasksByPriority },
		{ "FilterTasksByState", &UDreamGameplayTaskBlueprintLibrary::execFilterTasksByState },
		{ "FilterTasksByType", &UDreamGameplayTaskBlueprintLibrary::execFilterTasksByType },
		{ "GetDreamTaskClassByGUID", &UDreamGameplayTaskBlueprintLibrary::execGetDreamTaskClassByGUID },
		{ "GetDreamTaskComponent", &UDreamGameplayTaskBlueprintLibrary::execGetDreamTaskComponent },
		{ "GetDreamTaskGuid", &UDreamGameplayTaskBlueprintLibrary::execGetDreamTaskGuid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDreamGameplayTaskBlueprintLibrary);
UClass* Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary_NoRegister()
{
	return UDreamGameplayTaskBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DreamGameplayTaskBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DreamGameplayTaskBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_ConstructDreamGameplayTaskSaveData, "ConstructDreamGameplayTaskSaveData" }, // 1322789786
		{ &Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_DestructDreamGameplayTaskSaveData, "DestructDreamGameplayTaskSaveData" }, // 70667912
		{ &Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByPriority, "FilterTasksByPriority" }, // 421420392
		{ &Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByState, "FilterTasksByState" }, // 2401805314
		{ &Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_FilterTasksByType, "FilterTasksByType" }, // 1787961409
		{ &Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskClassByGUID, "GetDreamTaskClassByGUID" }, // 420903164
		{ &Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskComponent, "GetDreamTaskComponent" }, // 328786351
		{ &Z_Construct_UFunction_UDreamGameplayTaskBlueprintLibrary_GetDreamTaskGuid, "GetDreamTaskGuid" }, // 153207368
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamGameplayTaskBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplayTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary_Statics::ClassParams = {
	&UDreamGameplayTaskBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UDreamGameplayTaskBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDreamGameplayTaskBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDreamGameplayTaskBlueprintLibrary.OuterSingleton;
}
template<> DREAMGAMEPLAYTASK_API UClass* StaticClass<UDreamGameplayTaskBlueprintLibrary>()
{
	return UDreamGameplayTaskBlueprintLibrary::StaticClass();
}
UDreamGameplayTaskBlueprintLibrary::UDreamGameplayTaskBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamGameplayTaskBlueprintLibrary);
UDreamGameplayTaskBlueprintLibrary::~UDreamGameplayTaskBlueprintLibrary() {}
// End Class UDreamGameplayTaskBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary, UDreamGameplayTaskBlueprintLibrary::StaticClass, TEXT("UDreamGameplayTaskBlueprintLibrary"), &Z_Registration_Info_UClass_UDreamGameplayTaskBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDreamGameplayTaskBlueprintLibrary), 3993771875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskBlueprintLibrary_h_1350249837(TEXT("/Script/DreamGameplayTask"),
	Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
