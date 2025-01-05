// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplayTask/Public/Classes/DreamTaskComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamTaskComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTask_NoRegister();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTaskComponent();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTaskComponent_NoRegister();
DREAMGAMEPLAYTASK_API UFunction* Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature();
DREAMGAMEPLAYTASK_API UFunction* Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DreamGameplayTask();
// End Cross Module References

// Begin Delegate FTaskListDelegate
struct Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature_Statics
{
	struct DreamTaskComponent_eventTaskListDelegate_Parms
	{
		TArray<UDreamTask*> TaskList;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature_Statics::NewProp_TaskList_Inner = { "TaskList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature_Statics::NewProp_TaskList = { "TaskList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventTaskListDelegate_Parms, TaskList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskList_MetaData), NewProp_TaskList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature_Statics::NewProp_TaskList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature_Statics::NewProp_TaskList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskComponent, nullptr, "TaskListDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature_Statics::DreamTaskComponent_eventTaskListDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature_Statics::DreamTaskComponent_eventTaskListDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDreamTaskComponent::FTaskListDelegate_DelegateWrapper(const FMulticastScriptDelegate& TaskListDelegate, TArray<UDreamTask*> const& TaskList)
{
	struct DreamTaskComponent_eventTaskListDelegate_Parms
	{
		TArray<UDreamTask*> TaskList;
	};
	DreamTaskComponent_eventTaskListDelegate_Parms Parms;
	Parms.TaskList=TaskList;
	TaskListDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FTaskListDelegate

// Begin Delegate FTaskDelegate
struct Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature_Statics
{
	struct DreamTaskComponent_eventTaskDelegate_Parms
	{
		UDreamTask* Task;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventTaskDelegate_Parms, Task), Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature_Statics::NewProp_Task,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskComponent, nullptr, "TaskDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature_Statics::DreamTaskComponent_eventTaskDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature_Statics::DreamTaskComponent_eventTaskDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDreamTaskComponent::FTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& TaskDelegate, UDreamTask* Task)
{
	struct DreamTaskComponent_eventTaskDelegate_Parms
	{
		UDreamTask* Task;
	};
	DreamTaskComponent_eventTaskDelegate_Parms Parms;
	Parms.Task=Task;
	TaskDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FTaskDelegate

// Begin Class UDreamTaskComponent Function GetTaskByClass
struct Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass_Statics
{
	struct DreamTaskComponent_eventGetTaskByClass_Parms
	{
		TSubclassOf<UDreamTask> InTaskClass;
		UDreamTask* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1 (Class)\n\x09 * @param InTaskClass \xe8\xa6\x81\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb1\xbb\n\x09 * @return \xe8\x8e\xb7\xe5\x8f\x96\xe5\x88\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1 (Class)\n@param InTaskClass \xe8\xa6\x81\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb1\xbb\n@return \xe8\x8e\xb7\xe5\x8f\x96\xe5\x88\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InTaskClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass_Statics::NewProp_InTaskClass = { "InTaskClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventGetTaskByClass_Parms, InTaskClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventGetTaskByClass_Parms, ReturnValue), Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass_Statics::NewProp_InTaskClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskComponent, nullptr, "GetTaskByClass", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass_Statics::DreamTaskComponent_eventGetTaskByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass_Statics::DreamTaskComponent_eventGetTaskByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskComponent::execGetTaskByClass)
{
	P_GET_OBJECT(UClass,Z_Param_InTaskClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDreamTask**)Z_Param__Result=P_THIS->GetTaskByClass(Z_Param_InTaskClass);
	P_NATIVE_END;
}
// End Class UDreamTaskComponent Function GetTaskByClass

// Begin Class UDreamTaskComponent Function GetTaskByName
struct Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName_Statics
{
	struct DreamTaskComponent_eventGetTaskByName_Parms
	{
		FName InTaskName;
		UDreamTask* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1 (Name)\n\x09 * @param InTaskName \xe8\xa6\x81\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8d\xe7\xa7\xb0\n\x09 * @return \xe8\x8e\xb7\xe5\x8f\x96\xe5\x88\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1 (Name)\n@param InTaskName \xe8\xa6\x81\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8d\xe7\xa7\xb0\n@return \xe8\x8e\xb7\xe5\x8f\x96\xe5\x88\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InTaskName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName_Statics::NewProp_InTaskName = { "InTaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventGetTaskByName_Parms, InTaskName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventGetTaskByName_Parms, ReturnValue), Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName_Statics::NewProp_InTaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskComponent, nullptr, "GetTaskByName", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName_Statics::DreamTaskComponent_eventGetTaskByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName_Statics::DreamTaskComponent_eventGetTaskByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskComponent::execGetTaskByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InTaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDreamTask**)Z_Param__Result=P_THIS->GetTaskByName(Z_Param_InTaskName);
	P_NATIVE_END;
}
// End Class UDreamTaskComponent Function GetTaskByName

// Begin Class UDreamTaskComponent Function GetTaskList
struct Z_Construct_UFunction_UDreamTaskComponent_GetTaskList_Statics
{
	struct DreamTaskComponent_eventGetTaskList_Parms
	{
		TArray<UDreamTask*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8\n\x09 * @return \xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8\n@return \xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTaskComponent_GetTaskList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamTaskComponent_GetTaskList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventGetTaskList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskComponent_GetTaskList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_GetTaskList_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_GetTaskList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_GetTaskList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskComponent_GetTaskList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskComponent, nullptr, "GetTaskList", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskComponent_GetTaskList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_GetTaskList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskComponent_GetTaskList_Statics::DreamTaskComponent_eventGetTaskList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_GetTaskList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskComponent_GetTaskList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskComponent_GetTaskList_Statics::DreamTaskComponent_eventGetTaskList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskComponent_GetTaskList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskComponent_GetTaskList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskComponent::execGetTaskList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UDreamTask*>*)Z_Param__Result=P_THIS->GetTaskList();
	P_NATIVE_END;
}
// End Class UDreamTaskComponent Function GetTaskList

// Begin Class UDreamTaskComponent Function GiveTaskByClass
struct Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics
{
	struct DreamTaskComponent_eventGiveTaskByClass_Parms
	{
		TSubclassOf<UDreamTask> InClass;
		UObject* InPayload;
		UDreamTask* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe7\xbb\x99\xe4\xba\x88\xe4\xbb\xbb\xe5\x8a\xa1 (Class)\n\x09 * @param InClass \xe8\xa6\x81\xe7\xbb\x99\xe4\xba\x88\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb1\xbb\n\x09 * @param InPayload \xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe8\xbd\xbd\xe8\x8d\xb7\n\x09 * @return \xe7\xbb\x99\xe4\xba\x88\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\n\x09 */" },
#endif
		{ "CPP_Default_InPayload", "None" },
		{ "DeterminesOutputType", "InClass" },
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x99\xe4\xba\x88\xe4\xbb\xbb\xe5\x8a\xa1 (Class)\n@param InClass \xe8\xa6\x81\xe7\xbb\x99\xe4\xba\x88\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb1\xbb\n@param InPayload \xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe8\xbd\xbd\xe8\x8d\xb7\n@return \xe7\xbb\x99\xe4\xba\x88\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPayload;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventGiveTaskByClass_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics::NewProp_InPayload = { "InPayload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventGiveTaskByClass_Parms, InPayload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventGiveTaskByClass_Parms, ReturnValue), Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics::NewProp_InClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics::NewProp_InPayload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskComponent, nullptr, "GiveTaskByClass", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics::DreamTaskComponent_eventGiveTaskByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics::DreamTaskComponent_eventGiveTaskByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskComponent::execGiveTaskByClass)
{
	P_GET_OBJECT(UClass,Z_Param_InClass);
	P_GET_OBJECT(UObject,Z_Param_InPayload);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDreamTask**)Z_Param__Result=P_THIS->GiveTaskByClass(Z_Param_InClass,Z_Param_InPayload);
	P_NATIVE_END;
}
// End Class UDreamTaskComponent Function GiveTaskByClass

// Begin Class UDreamTaskComponent Function HasTaskByClass
struct Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics
{
	struct DreamTaskComponent_eventHasTaskByClass_Parms
	{
		TSubclassOf<UDreamTask> InCheckTaskClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb1\xbb\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe5\x88\x97\xe8\xa1\xa8\xe5\x86\x85\n\x09 * @param InCheckTaskClass \xe8\xa6\x81\xe6\xa3\x80\xe6\xb5\x8b\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb1\xbb\xe5\x88\xab\n\x09 * @return \xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8\xe5\x86\x85\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe8\xbf\x99\xe4\xb8\xaa\xe7\xb1\xbb\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb1\xbb\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe5\x88\x97\xe8\xa1\xa8\xe5\x86\x85\n@param InCheckTaskClass \xe8\xa6\x81\xe6\xa3\x80\xe6\xb5\x8b\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb1\xbb\xe5\x88\xab\n@return \xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8\xe5\x86\x85\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe8\xbf\x99\xe4\xb8\xaa\xe7\xb1\xbb" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InCheckTaskClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics::NewProp_InCheckTaskClass = { "InCheckTaskClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventHasTaskByClass_Parms, InCheckTaskClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DreamTaskComponent_eventHasTaskByClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DreamTaskComponent_eventHasTaskByClass_Parms), &Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics::NewProp_InCheckTaskClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskComponent, nullptr, "HasTaskByClass", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics::DreamTaskComponent_eventHasTaskByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics::DreamTaskComponent_eventHasTaskByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskComponent::execHasTaskByClass)
{
	P_GET_OBJECT(UClass,Z_Param_InCheckTaskClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTaskByClass(Z_Param_InCheckTaskClass);
	P_NATIVE_END;
}
// End Class UDreamTaskComponent Function HasTaskByClass

// Begin Class UDreamTaskComponent Function HasTaskByName
struct Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics
{
	struct DreamTaskComponent_eventHasTaskByName_Parms
	{
		FName InCheckTaskName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8d\xe7\xa7\xb0\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe5\x88\x97\xe8\xa1\xa8\xe5\x86\x85\n\x09 * @param InCheckTaskName \xe8\xa6\x81\xe6\xa3\x80\xe6\xb5\x8b\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8d\xe7\xa7\xb0\n\x09 * @return \xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8\xe5\x86\x85\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe8\xbf\x99\xe4\xb8\xaa\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8d\xe7\xa7\xb0\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8d\xe7\xa7\xb0\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe5\x88\x97\xe8\xa1\xa8\xe5\x86\x85\n@param InCheckTaskName \xe8\xa6\x81\xe6\xa3\x80\xe6\xb5\x8b\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8d\xe7\xa7\xb0\n@return \xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8\xe5\x86\x85\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe8\xbf\x99\xe4\xb8\xaa\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InCheckTaskName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics::NewProp_InCheckTaskName = { "InCheckTaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventHasTaskByName_Parms, InCheckTaskName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DreamTaskComponent_eventHasTaskByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DreamTaskComponent_eventHasTaskByName_Parms), &Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics::NewProp_InCheckTaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskComponent, nullptr, "HasTaskByName", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics::DreamTaskComponent_eventHasTaskByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics::DreamTaskComponent_eventHasTaskByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskComponent::execHasTaskByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InCheckTaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTaskByName(Z_Param_InCheckTaskName);
	P_NATIVE_END;
}
// End Class UDreamTaskComponent Function HasTaskByName

// Begin Class UDreamTaskComponent Function InitializeTaskList
struct Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList_Statics
{
	struct DreamTaskComponent_eventInitializeTaskList_Parms
	{
		TArray<UDreamTask*> NewList;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8\n\x09 * @param NewList \xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8\n@param NewList \xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList_Statics::NewProp_NewList_Inner = { "NewList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList_Statics::NewProp_NewList = { "NewList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventInitializeTaskList_Parms, NewList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewList_MetaData), NewProp_NewList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList_Statics::NewProp_NewList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList_Statics::NewProp_NewList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskComponent, nullptr, "InitializeTaskList", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList_Statics::DreamTaskComponent_eventInitializeTaskList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList_Statics::DreamTaskComponent_eventInitializeTaskList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskComponent::execInitializeTaskList)
{
	P_GET_TARRAY_REF(UDreamTask*,Z_Param_Out_NewList);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeTaskList(Z_Param_Out_NewList);
	P_NATIVE_END;
}
// End Class UDreamTaskComponent Function InitializeTaskList

// Begin Class UDreamTaskComponent Function RemoveTaskByClass
struct Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics
{
	struct DreamTaskComponent_eventRemoveTaskByClass_Parms
	{
		TSubclassOf<UDreamTask> InRemoveTaskClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe7\xa7\xbb\xe9\x99\xa4\xe4\xbb\xbb\xe5\x8a\xa1 (Class)\n\x09 * @param InRemoveTaskClass \xe8\xa6\x81\xe7\xa7\xbb\xe9\x99\xa4\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb1\xbb\n\x09 * @return \xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\xe7\xa7\xbb\xe9\x99\xa4\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe9\x99\xa4\xe4\xbb\xbb\xe5\x8a\xa1 (Class)\n@param InRemoveTaskClass \xe8\xa6\x81\xe7\xa7\xbb\xe9\x99\xa4\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb1\xbb\n@return \xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\xe7\xa7\xbb\xe9\x99\xa4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InRemoveTaskClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics::NewProp_InRemoveTaskClass = { "InRemoveTaskClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventRemoveTaskByClass_Parms, InRemoveTaskClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DreamTaskComponent_eventRemoveTaskByClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DreamTaskComponent_eventRemoveTaskByClass_Parms), &Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics::NewProp_InRemoveTaskClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskComponent, nullptr, "RemoveTaskByClass", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics::DreamTaskComponent_eventRemoveTaskByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics::DreamTaskComponent_eventRemoveTaskByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskComponent::execRemoveTaskByClass)
{
	P_GET_OBJECT(UClass,Z_Param_InRemoveTaskClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveTaskByClass(Z_Param_InRemoveTaskClass);
	P_NATIVE_END;
}
// End Class UDreamTaskComponent Function RemoveTaskByClass

// Begin Class UDreamTaskComponent Function RemoveTaskByName
struct Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics
{
	struct DreamTaskComponent_eventRemoveTaskByName_Parms
	{
		FName InRemoveTaskName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe7\xa7\xbb\xe9\x99\xa4\xe4\xbb\xbb\xe5\x8a\xa1 (Name)\n\x09 * @param InRemoveTaskName \xe8\xa6\x81\xe7\xa7\xbb\xe9\x99\xa4\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8d\xe7\xa7\xb0\n\x09 * @return \xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\xe7\xa7\xbb\xe9\x99\xa4\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe9\x99\xa4\xe4\xbb\xbb\xe5\x8a\xa1 (Name)\n@param InRemoveTaskName \xe8\xa6\x81\xe7\xa7\xbb\xe9\x99\xa4\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8d\xe7\xa7\xb0\n@return \xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\xe7\xa7\xbb\xe9\x99\xa4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InRemoveTaskName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics::NewProp_InRemoveTaskName = { "InRemoveTaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventRemoveTaskByName_Parms, InRemoveTaskName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DreamTaskComponent_eventRemoveTaskByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DreamTaskComponent_eventRemoveTaskByName_Parms), &Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics::NewProp_InRemoveTaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskComponent, nullptr, "RemoveTaskByName", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics::DreamTaskComponent_eventRemoveTaskByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics::DreamTaskComponent_eventRemoveTaskByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskComponent::execRemoveTaskByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InRemoveTaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveTaskByName(Z_Param_InRemoveTaskName);
	P_NATIVE_END;
}
// End Class UDreamTaskComponent Function RemoveTaskByName

// Begin Class UDreamTaskComponent Function UpdateTaskOfConditionNameByClass
struct Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass_Statics
{
	struct DreamTaskComponent_eventUpdateTaskOfConditionNameByClass_Parms
	{
		TSubclassOf<UDreamTask> InTaskClass;
		FName InConditionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\x9b\xb4\xe6\x96\xb0\xe4\xbb\xbb\xe5\x8a\xa1 (Class) (ConditionName)\n\x09 * @param InTaskClass \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb1\xbb\n\x09 * @param InConditionName \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe4\xbb\xbb\xe5\x8a\xa1 (Class) (ConditionName)\n@param InTaskClass \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb1\xbb\n@param InConditionName \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InTaskClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InConditionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass_Statics::NewProp_InTaskClass = { "InTaskClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventUpdateTaskOfConditionNameByClass_Parms, InTaskClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass_Statics::NewProp_InConditionName = { "InConditionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventUpdateTaskOfConditionNameByClass_Parms, InConditionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass_Statics::NewProp_InTaskClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass_Statics::NewProp_InConditionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskComponent, nullptr, "UpdateTaskOfConditionNameByClass", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass_Statics::DreamTaskComponent_eventUpdateTaskOfConditionNameByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass_Statics::DreamTaskComponent_eventUpdateTaskOfConditionNameByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskComponent::execUpdateTaskOfConditionNameByClass)
{
	P_GET_OBJECT(UClass,Z_Param_InTaskClass);
	P_GET_PROPERTY(FNameProperty,Z_Param_InConditionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTaskOfConditionNameByClass(Z_Param_InTaskClass,Z_Param_InConditionName);
	P_NATIVE_END;
}
// End Class UDreamTaskComponent Function UpdateTaskOfConditionNameByClass

// Begin Class UDreamTaskComponent Function UpdateTaskOfConditionNameByName
struct Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName_Statics
{
	struct DreamTaskComponent_eventUpdateTaskOfConditionNameByName_Parms
	{
		FName TaskName;
		FName InConditionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\x9b\xb4\xe6\x96\xb0\xe4\xbb\xbb\xe5\x8a\xa1 (Name) (ConditionName)\n\x09 * @param TaskName \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8d\xe7\xa7\xb0\n\x09 * @param InConditionName \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe4\xbb\xbb\xe5\x8a\xa1 (Name) (ConditionName)\n@param TaskName \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8d\xe7\xa7\xb0\n@param InConditionName \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InConditionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventUpdateTaskOfConditionNameByName_Parms, TaskName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName_Statics::NewProp_InConditionName = { "InConditionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventUpdateTaskOfConditionNameByName_Parms, InConditionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName_Statics::NewProp_InConditionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskComponent, nullptr, "UpdateTaskOfConditionNameByName", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName_Statics::DreamTaskComponent_eventUpdateTaskOfConditionNameByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName_Statics::DreamTaskComponent_eventUpdateTaskOfConditionNameByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskComponent::execUpdateTaskOfConditionNameByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskName);
	P_GET_PROPERTY(FNameProperty,Z_Param_InConditionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTaskOfConditionNameByName(Z_Param_TaskName,Z_Param_InConditionName);
	P_NATIVE_END;
}
// End Class UDreamTaskComponent Function UpdateTaskOfConditionNameByName

// Begin Class UDreamTaskComponent Function UpdateTaskOfConditionNamesByClass
struct Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics
{
	struct DreamTaskComponent_eventUpdateTaskOfConditionNamesByClass_Parms
	{
		TSubclassOf<UDreamTask> InTaskClass;
		TArray<FName> InConditionNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\x9b\xb4\xe6\x96\xb0\xe4\xbb\xbb\xe5\x8a\xa1 (Class) (ConditionNames)\n\x09 * @param InTaskClass \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb1\xbb\n\x09 * @param InConditionNames \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe4\xbb\xbb\xe5\x8a\xa1 (Class) (ConditionNames)\n@param InTaskClass \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb1\xbb\n@param InConditionNames \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConditionNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InTaskClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InConditionNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InConditionNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics::NewProp_InTaskClass = { "InTaskClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventUpdateTaskOfConditionNamesByClass_Parms, InTaskClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics::NewProp_InConditionNames_Inner = { "InConditionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics::NewProp_InConditionNames = { "InConditionNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventUpdateTaskOfConditionNamesByClass_Parms, InConditionNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConditionNames_MetaData), NewProp_InConditionNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics::NewProp_InTaskClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics::NewProp_InConditionNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics::NewProp_InConditionNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskComponent, nullptr, "UpdateTaskOfConditionNamesByClass", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics::DreamTaskComponent_eventUpdateTaskOfConditionNamesByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics::DreamTaskComponent_eventUpdateTaskOfConditionNamesByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskComponent::execUpdateTaskOfConditionNamesByClass)
{
	P_GET_OBJECT(UClass,Z_Param_InTaskClass);
	P_GET_TARRAY_REF(FName,Z_Param_Out_InConditionNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTaskOfConditionNamesByClass(Z_Param_InTaskClass,Z_Param_Out_InConditionNames);
	P_NATIVE_END;
}
// End Class UDreamTaskComponent Function UpdateTaskOfConditionNamesByClass

// Begin Class UDreamTaskComponent Function UpdateTaskOfConditionNamesByName
struct Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics
{
	struct DreamTaskComponent_eventUpdateTaskOfConditionNamesByName_Parms
	{
		FName TaskName;
		TArray<FName> InConditionNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\x9b\xb4\xe6\x96\xb0\xe4\xbb\xbb\xe5\x8a\xa1 (Name) (ConditionNames)\n\x09 * @param TaskName \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8d\xe7\xa7\xb0\n\x09 * @param InConditionNames \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe4\xbb\xbb\xe5\x8a\xa1 (Name) (ConditionNames)\n@param TaskName \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x90\x8d\xe7\xa7\xb0\n@param InConditionNames \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConditionNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InConditionNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InConditionNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventUpdateTaskOfConditionNamesByName_Parms, TaskName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics::NewProp_InConditionNames_Inner = { "InConditionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics::NewProp_InConditionNames = { "InConditionNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskComponent_eventUpdateTaskOfConditionNamesByName_Parms, InConditionNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConditionNames_MetaData), NewProp_InConditionNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics::NewProp_InConditionNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics::NewProp_InConditionNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskComponent, nullptr, "UpdateTaskOfConditionNamesByName", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics::DreamTaskComponent_eventUpdateTaskOfConditionNamesByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics::DreamTaskComponent_eventUpdateTaskOfConditionNamesByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskComponent::execUpdateTaskOfConditionNamesByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskName);
	P_GET_TARRAY_REF(FName,Z_Param_Out_InConditionNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTaskOfConditionNamesByName(Z_Param_TaskName,Z_Param_Out_InConditionNames);
	P_NATIVE_END;
}
// End Class UDreamTaskComponent Function UpdateTaskOfConditionNamesByName

// Begin Class UDreamTaskComponent
void UDreamTaskComponent::StaticRegisterNativesUDreamTaskComponent()
{
	UClass* Class = UDreamTaskComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTaskByClass", &UDreamTaskComponent::execGetTaskByClass },
		{ "GetTaskByName", &UDreamTaskComponent::execGetTaskByName },
		{ "GetTaskList", &UDreamTaskComponent::execGetTaskList },
		{ "GiveTaskByClass", &UDreamTaskComponent::execGiveTaskByClass },
		{ "HasTaskByClass", &UDreamTaskComponent::execHasTaskByClass },
		{ "HasTaskByName", &UDreamTaskComponent::execHasTaskByName },
		{ "InitializeTaskList", &UDreamTaskComponent::execInitializeTaskList },
		{ "RemoveTaskByClass", &UDreamTaskComponent::execRemoveTaskByClass },
		{ "RemoveTaskByName", &UDreamTaskComponent::execRemoveTaskByName },
		{ "UpdateTaskOfConditionNameByClass", &UDreamTaskComponent::execUpdateTaskOfConditionNameByClass },
		{ "UpdateTaskOfConditionNameByName", &UDreamTaskComponent::execUpdateTaskOfConditionNameByName },
		{ "UpdateTaskOfConditionNamesByClass", &UDreamTaskComponent::execUpdateTaskOfConditionNamesByClass },
		{ "UpdateTaskOfConditionNamesByName", &UDreamTaskComponent::execUpdateTaskOfConditionNamesByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDreamTaskComponent);
UClass* Z_Construct_UClass_UDreamTaskComponent_NoRegister()
{
	return UDreamTaskComponent::StaticClass();
}
struct Z_Construct_UClass_UDreamTaskComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "DreamPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dream Gameplay Task Manager Component\n */" },
#endif
		{ "IncludePath", "Classes/DreamTaskComponent.h" },
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dream Gameplay Task Manager Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTaskListChanged_MetaData[] = {
		{ "Category", "Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTaskUpdate_MetaData[] = {
		{ "Category", "Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTaskStateUpdate_MetaData[] = {
		{ "Category", "Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskList_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x97\xe8\xa1\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTaskListChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTaskUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTaskStateUpdate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDreamTaskComponent_GetTaskByClass, "GetTaskByClass" }, // 1567663023
		{ &Z_Construct_UFunction_UDreamTaskComponent_GetTaskByName, "GetTaskByName" }, // 3362761149
		{ &Z_Construct_UFunction_UDreamTaskComponent_GetTaskList, "GetTaskList" }, // 1291029971
		{ &Z_Construct_UFunction_UDreamTaskComponent_GiveTaskByClass, "GiveTaskByClass" }, // 1653972609
		{ &Z_Construct_UFunction_UDreamTaskComponent_HasTaskByClass, "HasTaskByClass" }, // 3742414234
		{ &Z_Construct_UFunction_UDreamTaskComponent_HasTaskByName, "HasTaskByName" }, // 3504823497
		{ &Z_Construct_UFunction_UDreamTaskComponent_InitializeTaskList, "InitializeTaskList" }, // 1841770081
		{ &Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByClass, "RemoveTaskByClass" }, // 1971859622
		{ &Z_Construct_UFunction_UDreamTaskComponent_RemoveTaskByName, "RemoveTaskByName" }, // 1904098929
		{ &Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature, "TaskDelegate__DelegateSignature" }, // 1090318906
		{ &Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature, "TaskListDelegate__DelegateSignature" }, // 3375008390
		{ &Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByClass, "UpdateTaskOfConditionNameByClass" }, // 234921602
		{ &Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNameByName, "UpdateTaskOfConditionNameByName" }, // 1231891957
		{ &Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByClass, "UpdateTaskOfConditionNamesByClass" }, // 647564802
		{ &Z_Construct_UFunction_UDreamTaskComponent_UpdateTaskOfConditionNamesByName, "UpdateTaskOfConditionNamesByName" }, // 1949800999
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamTaskComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDreamTaskComponent_Statics::NewProp_OnTaskListChanged = { "OnTaskListChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTaskComponent, OnTaskListChanged), Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskListDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTaskListChanged_MetaData), NewProp_OnTaskListChanged_MetaData) }; // 3375008390
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDreamTaskComponent_Statics::NewProp_OnTaskUpdate = { "OnTaskUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTaskComponent, OnTaskUpdate), Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTaskUpdate_MetaData), NewProp_OnTaskUpdate_MetaData) }; // 1090318906
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDreamTaskComponent_Statics::NewProp_OnTaskStateUpdate = { "OnTaskStateUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTaskComponent, OnTaskStateUpdate), Z_Construct_UDelegateFunction_UDreamTaskComponent_TaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTaskStateUpdate_MetaData), NewProp_OnTaskStateUpdate_MetaData) }; // 1090318906
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDreamTaskComponent_Statics::NewProp_TaskList_Inner = { "TaskList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDreamTaskComponent_Statics::NewProp_TaskList = { "TaskList", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTaskComponent, TaskList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskList_MetaData), NewProp_TaskList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDreamTaskComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTaskComponent_Statics::NewProp_OnTaskListChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTaskComponent_Statics::NewProp_OnTaskUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTaskComponent_Statics::NewProp_OnTaskStateUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTaskComponent_Statics::NewProp_TaskList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTaskComponent_Statics::NewProp_TaskList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTaskComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDreamTaskComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplayTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTaskComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDreamTaskComponent_Statics::ClassParams = {
	&UDreamTaskComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDreamTaskComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTaskComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTaskComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDreamTaskComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDreamTaskComponent()
{
	if (!Z_Registration_Info_UClass_UDreamTaskComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDreamTaskComponent.OuterSingleton, Z_Construct_UClass_UDreamTaskComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDreamTaskComponent.OuterSingleton;
}
template<> DREAMGAMEPLAYTASK_API UClass* StaticClass<UDreamTaskComponent>()
{
	return UDreamTaskComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamTaskComponent);
UDreamTaskComponent::~UDreamTaskComponent() {}
// End Class UDreamTaskComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDreamTaskComponent, UDreamTaskComponent::StaticClass, TEXT("UDreamTaskComponent"), &Z_Registration_Info_UClass_UDreamTaskComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDreamTaskComponent), 3534506014U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskComponent_h_3361783760(TEXT("/Script/DreamGameplayTask"),
	Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
