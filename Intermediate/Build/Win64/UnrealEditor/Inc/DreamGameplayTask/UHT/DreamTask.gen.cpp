// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplayTask/Public/Classes/DreamTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamTask() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTask();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTask_NoRegister();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTaskComponent_NoRegister();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTaskConditionTemplate_NoRegister();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTaskType_NoRegister();
DREAMGAMEPLAYTASK_API UEnum* Z_Construct_UEnum_DreamGameplayTask_EDreamTaskConditionalCompletionMode();
DREAMGAMEPLAYTASK_API UEnum* Z_Construct_UEnum_DreamGameplayTask_EDreamTaskPriority();
DREAMGAMEPLAYTASK_API UEnum* Z_Construct_UEnum_DreamGameplayTask_EDreamTaskState();
DREAMGAMEPLAYTASK_API UFunction* Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature();
DREAMGAMEPLAYTASK_API UFunction* Z_Construct_UDelegateFunction_UDreamTask_TaskSimpleDelegate__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_DreamGameplayTask();
// End Cross Module References

// Begin Delegate FTaskDelegate
struct Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature_Statics
{
	struct DreamTask_eventTaskDelegate_Parms
	{
		UDreamTask* Task;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventTaskDelegate_Parms, Task), Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature_Statics::NewProp_Task,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "TaskDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature_Statics::DreamTask_eventTaskDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature_Statics::DreamTask_eventTaskDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDreamTask::FTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& TaskDelegate, UDreamTask* Task)
{
	struct DreamTask_eventTaskDelegate_Parms
	{
		UDreamTask* Task;
	};
	DreamTask_eventTaskDelegate_Parms Parms;
	Parms.Task=Task;
	TaskDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FTaskDelegate

// Begin Delegate FTaskSimpleDelegate
struct Z_Construct_UDelegateFunction_UDreamTask_TaskSimpleDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDreamTask_TaskSimpleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "TaskSimpleDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDreamTask_TaskSimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDreamTask_TaskSimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UDreamTask_TaskSimpleDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDreamTask_TaskSimpleDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDreamTask::FTaskSimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& TaskSimpleDelegate)
{
	TaskSimpleDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FTaskSimpleDelegate

// Begin Class UDreamTask Function BP_TaskCompleted
static const FName NAME_UDreamTask_BP_TaskCompleted = FName(TEXT("BP_TaskCompleted"));
void UDreamTask::BP_TaskCompleted()
{
	UFunction* Func = FindFunctionChecked(NAME_UDreamTask_BP_TaskCompleted);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UDreamTask_BP_TaskCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe5\xae\x8c\xe6\x88\x90\xe6\x97\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\xae\x8c\xe6\x88\x90\xe6\x97\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_BP_TaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "BP_TaskCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_BP_TaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_BP_TaskCompleted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDreamTask_BP_TaskCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_BP_TaskCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDreamTask Function BP_TaskCompleted

// Begin Class UDreamTask Function BP_TaskConditionUpdate
static const FName NAME_UDreamTask_BP_TaskConditionUpdate = FName(TEXT("BP_TaskConditionUpdate"));
void UDreamTask::BP_TaskConditionUpdate()
{
	UFunction* Func = FindFunctionChecked(NAME_UDreamTask_BP_TaskConditionUpdate);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UDreamTask_BP_TaskConditionUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_BP_TaskConditionUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "BP_TaskConditionUpdate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_BP_TaskConditionUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_BP_TaskConditionUpdate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDreamTask_BP_TaskConditionUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_BP_TaskConditionUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDreamTask Function BP_TaskConditionUpdate

// Begin Class UDreamTask Function BP_TaskInitialize
static const FName NAME_UDreamTask_BP_TaskInitialize = FName(TEXT("BP_TaskInitialize"));
void UDreamTask::BP_TaskInitialize()
{
	UFunction* Func = FindFunctionChecked(NAME_UDreamTask_BP_TaskInitialize);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UDreamTask_BP_TaskInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\x97\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\x97\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_BP_TaskInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "BP_TaskInitialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_BP_TaskInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_BP_TaskInitialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDreamTask_BP_TaskInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_BP_TaskInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDreamTask Function BP_TaskInitialize

// Begin Class UDreamTask Function BP_TaskUpdate
static const FName NAME_UDreamTask_BP_TaskUpdate = FName(TEXT("BP_TaskUpdate"));
void UDreamTask::BP_TaskUpdate()
{
	UFunction* Func = FindFunctionChecked(NAME_UDreamTask_BP_TaskUpdate);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UDreamTask_BP_TaskUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_BP_TaskUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "BP_TaskUpdate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_BP_TaskUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_BP_TaskUpdate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDreamTask_BP_TaskUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_BP_TaskUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDreamTask Function BP_TaskUpdate

// Begin Class UDreamTask Function CheckTaskCompleted
struct Z_Construct_UFunction_UDreamTask_CheckTaskCompleted_Statics
{
	struct DreamTask_eventCheckTaskCompleted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x80\xe6\x9f\xa5\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x98\xaf\xe5\x90\xa6\xe5\xae\x8c\xe6\x88\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\x9f\xa5\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x98\xaf\xe5\x90\xa6\xe5\xae\x8c\xe6\x88\x90" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDreamTask_CheckTaskCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DreamTask_eventCheckTaskCompleted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDreamTask_CheckTaskCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DreamTask_eventCheckTaskCompleted_Parms), &Z_Construct_UFunction_UDreamTask_CheckTaskCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_CheckTaskCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_CheckTaskCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_CheckTaskCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_CheckTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "CheckTaskCompleted", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_CheckTaskCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_CheckTaskCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_CheckTaskCompleted_Statics::DreamTask_eventCheckTaskCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_CheckTaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_CheckTaskCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_CheckTaskCompleted_Statics::DreamTask_eventCheckTaskCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_CheckTaskCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_CheckTaskCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execCheckTaskCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckTaskCompleted();
	P_NATIVE_END;
}
// End Class UDreamTask Function CheckTaskCompleted

// Begin Class UDreamTask Function GetOwnerComponent
struct Z_Construct_UFunction_UDreamTask_GetOwnerComponent_Statics
{
	struct DreamTask_eventGetOwnerComponent_Parms
	{
		UDreamTaskComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTask_GetOwnerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventGetOwnerComponent_Parms, ReturnValue), Z_Construct_UClass_UDreamTaskComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_GetOwnerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetOwnerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetOwnerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_GetOwnerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "GetOwnerComponent", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_GetOwnerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetOwnerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_GetOwnerComponent_Statics::DreamTask_eventGetOwnerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetOwnerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_GetOwnerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_GetOwnerComponent_Statics::DreamTask_eventGetOwnerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_GetOwnerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_GetOwnerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execGetOwnerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDreamTaskComponent**)Z_Param__Result=P_THIS->GetOwnerComponent();
	P_NATIVE_END;
}
// End Class UDreamTask Function GetOwnerComponent

// Begin Class UDreamTask Function GetPayload
struct Z_Construct_UFunction_UDreamTask_GetPayload_Statics
{
	struct DreamTask_eventGetPayload_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTask_GetPayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventGetPayload_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_GetPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetPayload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_GetPayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "GetPayload", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_GetPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetPayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_GetPayload_Statics::DreamTask_eventGetPayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetPayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_GetPayload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_GetPayload_Statics::DreamTask_eventGetPayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_GetPayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_GetPayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execGetPayload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetPayload();
	P_NATIVE_END;
}
// End Class UDreamTask Function GetPayload

// Begin Class UDreamTask Function GetRelatedActors
struct Z_Construct_UFunction_UDreamTask_GetRelatedActors_Statics
{
	struct DreamTask_eventGetRelatedActors_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe7\x9b\xb8\xe5\x85\xb3""Actor\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9b\xb8\xe5\x85\xb3""Actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTask_GetRelatedActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamTask_GetRelatedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventGetRelatedActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_GetRelatedActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetRelatedActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetRelatedActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetRelatedActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_GetRelatedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "GetRelatedActors", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_GetRelatedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetRelatedActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_GetRelatedActors_Statics::DreamTask_eventGetRelatedActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetRelatedActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_GetRelatedActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_GetRelatedActors_Statics::DreamTask_eventGetRelatedActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_GetRelatedActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_GetRelatedActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execGetRelatedActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetRelatedActors();
	P_NATIVE_END;
}
// End Class UDreamTask Function GetRelatedActors

// Begin Class UDreamTask Function GetSubTasks
struct Z_Construct_UFunction_UDreamTask_GetSubTasks_Statics
{
	struct DreamTask_eventGetSubTasks_Parms
	{
		TArray<TSubclassOf<UDreamTask> > ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDreamTask_GetSubTasks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamTask_GetSubTasks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventGetSubTasks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_GetSubTasks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetSubTasks_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetSubTasks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetSubTasks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_GetSubTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "GetSubTasks", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_GetSubTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetSubTasks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_GetSubTasks_Statics::DreamTask_eventGetSubTasks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetSubTasks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_GetSubTasks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_GetSubTasks_Statics::DreamTask_eventGetSubTasks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_GetSubTasks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_GetSubTasks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execGetSubTasks)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<TSubclassOf<UDreamTask> >*)Z_Param__Result=P_THIS->GetSubTasks();
	P_NATIVE_END;
}
// End Class UDreamTask Function GetSubTasks

// Begin Class UDreamTask Function GetTaskCondition
struct Z_Construct_UFunction_UDreamTask_GetTaskCondition_Statics
{
	struct DreamTask_eventGetTaskCondition_Parms
	{
		FName ConditionName;
		UDreamTaskConditionTemplate* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe6\x9d\xa1\xe4\xbb\xb6\n\x09 * @param ConditionName \xe8\xa6\x81\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0\n\x09 * @return \xe6\x89\xbe\xe5\x88\xb0\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x9d\xa1\xe4\xbb\xb6\n@param ConditionName \xe8\xa6\x81\xe8\x8e\xb7\xe5\x8f\x96\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0\n@return \xe6\x89\xbe\xe5\x88\xb0\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConditionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDreamTask_GetTaskCondition_Statics::NewProp_ConditionName = { "ConditionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventGetTaskCondition_Parms, ConditionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTask_GetTaskCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventGetTaskCondition_Parms, ReturnValue), Z_Construct_UClass_UDreamTaskConditionTemplate_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_GetTaskCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetTaskCondition_Statics::NewProp_ConditionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetTaskCondition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_GetTaskCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "GetTaskCondition", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_GetTaskCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskCondition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_GetTaskCondition_Statics::DreamTask_eventGetTaskCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_GetTaskCondition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_GetTaskCondition_Statics::DreamTask_eventGetTaskCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_GetTaskCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_GetTaskCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execGetTaskCondition)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ConditionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDreamTaskConditionTemplate**)Z_Param__Result=P_THIS->GetTaskCondition(Z_Param_ConditionName);
	P_NATIVE_END;
}
// End Class UDreamTask Function GetTaskCondition

// Begin Class UDreamTask Function GetTaskConditionProgress
struct Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics
{
	struct DreamTask_eventGetTaskConditionProgress_Parms
	{
		TMap<FName,int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xbf\x9b\xe5\xba\xa6\n\x09 * @return \xe4\xbb\xbb\xe5\x8a\xa1\xe8\xbf\x9b\xe5\xba\xa6 <\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0, \xe5\xbd\x93\xe5\x89\x8d\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xbf\x9b\xe5\xba\xa6>\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xbf\x9b\xe5\xba\xa6\n@return \xe4\xbb\xbb\xe5\x8a\xa1\xe8\xbf\x9b\xe5\xba\xa6 <\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0, \xe5\xbd\x93\xe5\x89\x8d\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xbf\x9b\xe5\xba\xa6>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventGetTaskConditionProgress_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "GetTaskConditionProgress", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics::DreamTask_eventGetTaskConditionProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics::DreamTask_eventGetTaskConditionProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execGetTaskConditionProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,int32>*)Z_Param__Result=P_THIS->GetTaskConditionProgress();
	P_NATIVE_END;
}
// End Class UDreamTask Function GetTaskConditionProgress

// Begin Class UDreamTask Function GetTaskConditions
struct Z_Construct_UFunction_UDreamTask_GetTaskConditions_Statics
{
	struct DreamTask_eventGetTaskConditions_Parms
	{
		TArray<UDreamTaskConditionTemplate*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x88\x97\xe8\xa1\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x88\x97\xe8\xa1\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTask_GetTaskConditions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDreamTaskConditionTemplate_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamTask_GetTaskConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventGetTaskConditions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_GetTaskConditions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetTaskConditions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetTaskConditions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskConditions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_GetTaskConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "GetTaskConditions", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_GetTaskConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskConditions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_GetTaskConditions_Statics::DreamTask_eventGetTaskConditions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskConditions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_GetTaskConditions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_GetTaskConditions_Statics::DreamTask_eventGetTaskConditions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_GetTaskConditions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_GetTaskConditions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execGetTaskConditions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UDreamTaskConditionTemplate*>*)Z_Param__Result=P_THIS->GetTaskConditions();
	P_NATIVE_END;
}
// End Class UDreamTask Function GetTaskConditions

// Begin Class UDreamTask Function GetTaskDesc
struct Z_Construct_UFunction_UDreamTask_GetTaskDesc_Statics
{
	struct DreamTask_eventGetTaskDesc_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDreamTask_GetTaskDesc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventGetTaskDesc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_GetTaskDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetTaskDesc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskDesc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_GetTaskDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "GetTaskDesc", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_GetTaskDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskDesc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_GetTaskDesc_Statics::DreamTask_eventGetTaskDesc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskDesc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_GetTaskDesc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_GetTaskDesc_Statics::DreamTask_eventGetTaskDesc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_GetTaskDesc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_GetTaskDesc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execGetTaskDesc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetTaskDesc();
	P_NATIVE_END;
}
// End Class UDreamTask Function GetTaskDesc

// Begin Class UDreamTask Function GetTaskDisplayName
struct Z_Construct_UFunction_UDreamTask_GetTaskDisplayName_Statics
{
	struct DreamTask_eventGetTaskDisplayName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDreamTask_GetTaskDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventGetTaskDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_GetTaskDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetTaskDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_GetTaskDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "GetTaskDisplayName", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_GetTaskDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_GetTaskDisplayName_Statics::DreamTask_eventGetTaskDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_GetTaskDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_GetTaskDisplayName_Statics::DreamTask_eventGetTaskDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_GetTaskDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_GetTaskDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execGetTaskDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetTaskDisplayName();
	P_NATIVE_END;
}
// End Class UDreamTask Function GetTaskDisplayName

// Begin Class UDreamTask Function GetTaskName
struct Z_Construct_UFunction_UDreamTask_GetTaskName_Statics
{
	struct DreamTask_eventGetTaskName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDreamTask_GetTaskName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventGetTaskName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_GetTaskName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetTaskName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_GetTaskName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "GetTaskName", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_GetTaskName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_GetTaskName_Statics::DreamTask_eventGetTaskName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_GetTaskName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_GetTaskName_Statics::DreamTask_eventGetTaskName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_GetTaskName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_GetTaskName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execGetTaskName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetTaskName();
	P_NATIVE_END;
}
// End Class UDreamTask Function GetTaskName

// Begin Class UDreamTask Function GetTaskState
struct Z_Construct_UFunction_UDreamTask_GetTaskState_Statics
{
	struct DreamTask_eventGetTaskState_Parms
	{
		EDreamTaskState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDreamTask_GetTaskState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDreamTask_GetTaskState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventGetTaskState_Parms, ReturnValue), Z_Construct_UEnum_DreamGameplayTask_EDreamTaskState, METADATA_PARAMS(0, nullptr) }; // 3331094815
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_GetTaskState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetTaskState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetTaskState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_GetTaskState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "GetTaskState", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_GetTaskState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_GetTaskState_Statics::DreamTask_eventGetTaskState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_GetTaskState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_GetTaskState_Statics::DreamTask_eventGetTaskState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_GetTaskState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_GetTaskState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execGetTaskState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDreamTaskState*)Z_Param__Result=P_THIS->GetTaskState();
	P_NATIVE_END;
}
// End Class UDreamTask Function GetTaskState

// Begin Class UDreamTask Function GetTaskType
struct Z_Construct_UFunction_UDreamTask_GetTaskType_Statics
{
	struct DreamTask_eventGetTaskType_Parms
	{
		UDreamTaskType* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTask_GetTaskType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventGetTaskType_Parms, ReturnValue), Z_Construct_UClass_UDreamTaskType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_GetTaskType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_GetTaskType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_GetTaskType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "GetTaskType", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_GetTaskType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_GetTaskType_Statics::DreamTask_eventGetTaskType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_GetTaskType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_GetTaskType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_GetTaskType_Statics::DreamTask_eventGetTaskType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_GetTaskType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_GetTaskType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execGetTaskType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDreamTaskType**)Z_Param__Result=P_THIS->GetTaskType();
	P_NATIVE_END;
}
// End Class UDreamTask Function GetTaskType

// Begin Class UDreamTask Function IsCompleted
struct Z_Construct_UFunction_UDreamTask_IsCompleted_Statics
{
	struct DreamTask_eventIsCompleted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe4\xbb\xbb\xe5\x8a\xa1\xe6\x98\xaf\xe5\x90\xa6\xe5\xae\x8c\xe6\x88\x90\n\x09 * @return \xe4\xbb\xbb\xe5\x8a\xa1\xe6\x98\xaf\xe5\x90\xa6\xe5\xae\x8c\xe6\x88\x90\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x98\xaf\xe5\x90\xa6\xe5\xae\x8c\xe6\x88\x90\n@return \xe4\xbb\xbb\xe5\x8a\xa1\xe6\x98\xaf\xe5\x90\xa6\xe5\xae\x8c\xe6\x88\x90" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDreamTask_IsCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DreamTask_eventIsCompleted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDreamTask_IsCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DreamTask_eventIsCompleted_Parms), &Z_Construct_UFunction_UDreamTask_IsCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_IsCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_IsCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_IsCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_IsCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "IsCompleted", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_IsCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_IsCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_IsCompleted_Statics::DreamTask_eventIsCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_IsCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_IsCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_IsCompleted_Statics::DreamTask_eventIsCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_IsCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_IsCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execIsCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCompleted();
	P_NATIVE_END;
}
// End Class UDreamTask Function IsCompleted

// Begin Class UDreamTask Function SetTaskConditionProgress
struct Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics
{
	struct DreamTask_eventSetTaskConditionProgress_Parms
	{
		TMap<FName,int32> InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\xae\xbe\xe7\xbd\xae\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xbf\x9b\xe5\xba\xa6\n\x09 * @param InValue \xe4\xbb\xbb\xe5\x8a\xa1\xe8\xbf\x9b\xe5\xba\xa6 <\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0, \xe6\x96\xb0\xe7\x9a\x84\xe8\xbf\x9b\xe5\xba\xa6>\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xbf\x9b\xe5\xba\xa6\n@param InValue \xe4\xbb\xbb\xe5\x8a\xa1\xe8\xbf\x9b\xe5\xba\xa6 <\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0, \xe6\x96\xb0\xe7\x9a\x84\xe8\xbf\x9b\xe5\xba\xa6>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics::NewProp_InValue_ValueProp = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics::NewProp_InValue_Key_KeyProp = { "InValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventSetTaskConditionProgress_Parms, InValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics::NewProp_InValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics::NewProp_InValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "SetTaskConditionProgress", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics::DreamTask_eventSetTaskConditionProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics::DreamTask_eventSetTaskConditionProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execSetTaskConditionProgress)
{
	P_GET_TMAP_REF(FName,int32,Z_Param_Out_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTaskConditionProgress(Z_Param_Out_InValue);
	P_NATIVE_END;
}
// End Class UDreamTask Function SetTaskConditionProgress

// Begin Class UDreamTask Function SetTaskState
struct Z_Construct_UFunction_UDreamTask_SetTaskState_Statics
{
	struct DreamTask_eventSetTaskState_Parms
	{
		EDreamTaskState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\xae\xbe\xe7\xbd\xae\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81\n\x09 * @param NewState \xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81\n@param NewState \xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDreamTask_SetTaskState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDreamTask_SetTaskState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventSetTaskState_Parms, NewState), Z_Construct_UEnum_DreamGameplayTask_EDreamTaskState, METADATA_PARAMS(0, nullptr) }; // 3331094815
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_SetTaskState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_SetTaskState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_SetTaskState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_SetTaskState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_SetTaskState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "SetTaskState", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_SetTaskState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_SetTaskState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_SetTaskState_Statics::DreamTask_eventSetTaskState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_SetTaskState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_SetTaskState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_SetTaskState_Statics::DreamTask_eventSetTaskState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_SetTaskState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_SetTaskState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execSetTaskState)
{
	P_GET_ENUM(EDreamTaskState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTaskState(EDreamTaskState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class UDreamTask Function SetTaskState

// Begin Class UDreamTask Function UpdateTaskByClass
struct Z_Construct_UFunction_UDreamTask_UpdateTaskByClass_Statics
{
	struct DreamTask_eventUpdateTaskByClass_Parms
	{
		TArray<TSubclassOf<UDreamTaskConditionTemplate> > ConditionClasses;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\x9b\xb4\xe6\x96\xb0\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6 \xe9\x80\x9a\xe8\xbf\x87\xe7\xb1\xbb\xe5\x88\xab\n\x09 * @param ConditionClasses \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x88\xab\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6 \xe9\x80\x9a\xe8\xbf\x87\xe7\xb1\xbb\xe5\x88\xab\n@param ConditionClasses \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x88\xab" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ConditionClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConditionClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDreamTask_UpdateTaskByClass_Statics::NewProp_ConditionClasses_Inner = { "ConditionClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDreamTaskConditionTemplate_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamTask_UpdateTaskByClass_Statics::NewProp_ConditionClasses = { "ConditionClasses", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventUpdateTaskByClass_Parms, ConditionClasses), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_UpdateTaskByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_UpdateTaskByClass_Statics::NewProp_ConditionClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_UpdateTaskByClass_Statics::NewProp_ConditionClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_UpdateTaskByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_UpdateTaskByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "UpdateTaskByClass", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_UpdateTaskByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_UpdateTaskByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_UpdateTaskByClass_Statics::DreamTask_eventUpdateTaskByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_UpdateTaskByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_UpdateTaskByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_UpdateTaskByClass_Statics::DreamTask_eventUpdateTaskByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_UpdateTaskByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_UpdateTaskByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execUpdateTaskByClass)
{
	P_GET_TARRAY(TSubclassOf<UDreamTaskConditionTemplate>,Z_Param_ConditionClasses);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTaskByClass(Z_Param_ConditionClasses);
	P_NATIVE_END;
}
// End Class UDreamTask Function UpdateTaskByClass

// Begin Class UDreamTask Function UpdateTaskByName
struct Z_Construct_UFunction_UDreamTask_UpdateTaskByName_Statics
{
	struct DreamTask_eventUpdateTaskByName_Parms
	{
		TArray<FName> ConditionNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\x9b\xb4\xe6\x96\xb0\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6 \xe9\x80\x9a\xe8\xbf\x87\xe5\x90\x8d\xe7\xa7\xb0\n\x09 * @param ConditionNames \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6 \xe9\x80\x9a\xe8\xbf\x87\xe5\x90\x8d\xe7\xa7\xb0\n@param ConditionNames \xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConditionNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConditionNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDreamTask_UpdateTaskByName_Statics::NewProp_ConditionNames_Inner = { "ConditionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamTask_UpdateTaskByName_Statics::NewProp_ConditionNames = { "ConditionNames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTask_eventUpdateTaskByName_Parms, ConditionNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTask_UpdateTaskByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_UpdateTaskByName_Statics::NewProp_ConditionNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTask_UpdateTaskByName_Statics::NewProp_ConditionNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_UpdateTaskByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTask_UpdateTaskByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTask, nullptr, "UpdateTaskByName", nullptr, nullptr, Z_Construct_UFunction_UDreamTask_UpdateTaskByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_UpdateTaskByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTask_UpdateTaskByName_Statics::DreamTask_eventUpdateTaskByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTask_UpdateTaskByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTask_UpdateTaskByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTask_UpdateTaskByName_Statics::DreamTask_eventUpdateTaskByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTask_UpdateTaskByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTask_UpdateTaskByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTask::execUpdateTaskByName)
{
	P_GET_TARRAY(FName,Z_Param_ConditionNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTaskByName(Z_Param_ConditionNames);
	P_NATIVE_END;
}
// End Class UDreamTask Function UpdateTaskByName

// Begin Class UDreamTask
void UDreamTask::StaticRegisterNativesUDreamTask()
{
	UClass* Class = UDreamTask::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckTaskCompleted", &UDreamTask::execCheckTaskCompleted },
		{ "GetOwnerComponent", &UDreamTask::execGetOwnerComponent },
		{ "GetPayload", &UDreamTask::execGetPayload },
		{ "GetRelatedActors", &UDreamTask::execGetRelatedActors },
		{ "GetSubTasks", &UDreamTask::execGetSubTasks },
		{ "GetTaskCondition", &UDreamTask::execGetTaskCondition },
		{ "GetTaskConditionProgress", &UDreamTask::execGetTaskConditionProgress },
		{ "GetTaskConditions", &UDreamTask::execGetTaskConditions },
		{ "GetTaskDesc", &UDreamTask::execGetTaskDesc },
		{ "GetTaskDisplayName", &UDreamTask::execGetTaskDisplayName },
		{ "GetTaskName", &UDreamTask::execGetTaskName },
		{ "GetTaskState", &UDreamTask::execGetTaskState },
		{ "GetTaskType", &UDreamTask::execGetTaskType },
		{ "IsCompleted", &UDreamTask::execIsCompleted },
		{ "SetTaskConditionProgress", &UDreamTask::execSetTaskConditionProgress },
		{ "SetTaskState", &UDreamTask::execSetTaskState },
		{ "UpdateTaskByClass", &UDreamTask::execUpdateTaskByClass },
		{ "UpdateTaskByName", &UDreamTask::execUpdateTaskByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDreamTask);
UClass* Z_Construct_UClass_UDreamTask_NoRegister()
{
	return UDreamTask::StaticClass();
}
struct Z_Construct_UClass_UDreamTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Classes/DreamTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
		{ "Category", "System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe7\xae\xa1\xe7\x90\x86\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe7\xae\xa1\xe7\x90\x86\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskDisplayName_MetaData[] = {
		{ "Category", "Task" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskDesc_MetaData[] = {
		{ "Category", "Task" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskType_MetaData[] = {
		{ "Category", "Task" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubTasks_MetaData[] = {
		{ "Category", "Task" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xad\x90\xe4\xbb\xbb\xe5\x8a\xa1\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xad\x90\xe4\xbb\xbb\xe5\x8a\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedActorsClasses_MetaData[] = {
		{ "Category", "Task" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\x9b\xb8\xe5\x85\xb3\xe7\x9a\x84""Actor\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xb8\xe5\x85\xb3\xe7\x9a\x84""Actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskPriority_MetaData[] = {
		{ "Category", "Task" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskConditionalCompletionMode_MetaData[] = {
		{ "Category", "Condition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6\xe5\xae\x8c\xe6\x88\x90\xe6\xa8\xa1\xe5\xbc\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6\xe5\xae\x8c\xe6\x88\x90\xe6\xa8\xa1\xe5\xbc\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomConditionCount_MetaData[] = {
		{ "Category", "Condition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe6\x9d\xa1\xe4\xbb\xb6\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "EditCondition", "TaskConditionalCompletionMode==EDreamTaskConditionalCompletionMode::EDTCCM_Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe6\x9d\xa1\xe4\xbb\xb6\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskConditions_Inner_MetaData[] = {
		{ "Category", "Condition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskConditions_MetaData[] = {
		{ "Category", "Condition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskState_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe9\xa2\x9d\xe5\xa4\x96\xe6\x95\xb0\xe6\x8d\xae \xe6\xad\xa4\xe6\x95\xb0\xe6\x8d\xae\xe6\x97\xa0\xe6\xb3\x95\xe4\xbf\x9d\xe5\xad\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe9\xa2\x9d\xe5\xa4\x96\xe6\x95\xb0\xe6\x8d\xae \xe6\xad\xa4\xe6\x95\xb0\xe6\x8d\xae\xe6\x97\xa0\xe6\xb3\x95\xe4\xbf\x9d\xe5\xad\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTaskUpdate_MetaData[] = {
		{ "Category", "Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTaskStateUpdate_MetaData[] = {
		{ "Category", "Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTaskConditionUpdate_MetaData[] = {
		{ "Category", "Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbb\xb6\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTaskCompleted_MetaData[] = {
		{ "Category", "Delegate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xbb\xe5\x8a\xa1\xe5\xae\x8c\xe6\x88\x90\xe6\x97\xb6 \n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\xae\x8c\xe6\x88\x90\xe6\x97\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TaskDisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TaskDesc;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SubTasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubTasks;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RelatedActorsClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RelatedActorsClasses;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TaskPriority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TaskPriority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TaskConditionalCompletionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TaskConditionalCompletionMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomConditionCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskConditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskConditions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TaskState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TaskState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTaskUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTaskStateUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTaskConditionUpdate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTaskCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDreamTask_BP_TaskCompleted, "BP_TaskCompleted" }, // 810343300
		{ &Z_Construct_UFunction_UDreamTask_BP_TaskConditionUpdate, "BP_TaskConditionUpdate" }, // 1048126142
		{ &Z_Construct_UFunction_UDreamTask_BP_TaskInitialize, "BP_TaskInitialize" }, // 3643695328
		{ &Z_Construct_UFunction_UDreamTask_BP_TaskUpdate, "BP_TaskUpdate" }, // 1445706160
		{ &Z_Construct_UFunction_UDreamTask_CheckTaskCompleted, "CheckTaskCompleted" }, // 2504028733
		{ &Z_Construct_UFunction_UDreamTask_GetOwnerComponent, "GetOwnerComponent" }, // 497327670
		{ &Z_Construct_UFunction_UDreamTask_GetPayload, "GetPayload" }, // 3509150450
		{ &Z_Construct_UFunction_UDreamTask_GetRelatedActors, "GetRelatedActors" }, // 1387772874
		{ &Z_Construct_UFunction_UDreamTask_GetSubTasks, "GetSubTasks" }, // 4094488460
		{ &Z_Construct_UFunction_UDreamTask_GetTaskCondition, "GetTaskCondition" }, // 1539378284
		{ &Z_Construct_UFunction_UDreamTask_GetTaskConditionProgress, "GetTaskConditionProgress" }, // 1435977879
		{ &Z_Construct_UFunction_UDreamTask_GetTaskConditions, "GetTaskConditions" }, // 2525148500
		{ &Z_Construct_UFunction_UDreamTask_GetTaskDesc, "GetTaskDesc" }, // 1322174676
		{ &Z_Construct_UFunction_UDreamTask_GetTaskDisplayName, "GetTaskDisplayName" }, // 220397945
		{ &Z_Construct_UFunction_UDreamTask_GetTaskName, "GetTaskName" }, // 214147507
		{ &Z_Construct_UFunction_UDreamTask_GetTaskState, "GetTaskState" }, // 2194582968
		{ &Z_Construct_UFunction_UDreamTask_GetTaskType, "GetTaskType" }, // 1288190393
		{ &Z_Construct_UFunction_UDreamTask_IsCompleted, "IsCompleted" }, // 3389505391
		{ &Z_Construct_UFunction_UDreamTask_SetTaskConditionProgress, "SetTaskConditionProgress" }, // 2316688592
		{ &Z_Construct_UFunction_UDreamTask_SetTaskState, "SetTaskState" }, // 740029309
		{ &Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature, "TaskDelegate__DelegateSignature" }, // 4149518427
		{ &Z_Construct_UDelegateFunction_UDreamTask_TaskSimpleDelegate__DelegateSignature, "TaskSimpleDelegate__DelegateSignature" }, // 290460964
		{ &Z_Construct_UFunction_UDreamTask_UpdateTaskByClass, "UpdateTaskByClass" }, // 1701637240
		{ &Z_Construct_UFunction_UDreamTask_UpdateTaskByName, "UpdateTaskByName" }, // 3490393702
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, OwnerComponent), Z_Construct_UClass_UDreamTaskComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComponent_MetaData), NewProp_OwnerComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskDisplayName = { "TaskDisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, TaskDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskDisplayName_MetaData), NewProp_TaskDisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskDesc = { "TaskDesc", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, TaskDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskDesc_MetaData), NewProp_TaskDesc_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskType = { "TaskType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, TaskType), Z_Construct_UClass_UDreamTaskType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskType_MetaData), NewProp_TaskType_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_SubTasks_Inner = { "SubTasks", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_SubTasks = { "SubTasks", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, SubTasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubTasks_MetaData), NewProp_SubTasks_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_RelatedActorsClasses_Inner = { "RelatedActorsClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_RelatedActorsClasses = { "RelatedActorsClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, RelatedActorsClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedActorsClasses_MetaData), NewProp_RelatedActorsClasses_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskPriority = { "TaskPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, TaskPriority), Z_Construct_UEnum_DreamGameplayTask_EDreamTaskPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskPriority_MetaData), NewProp_TaskPriority_MetaData) }; // 637693061
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskConditionalCompletionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskConditionalCompletionMode = { "TaskConditionalCompletionMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, TaskConditionalCompletionMode), Z_Construct_UEnum_DreamGameplayTask_EDreamTaskConditionalCompletionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskConditionalCompletionMode_MetaData), NewProp_TaskConditionalCompletionMode_MetaData) }; // 931047879
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_CustomConditionCount = { "CustomConditionCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, CustomConditionCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomConditionCount_MetaData), NewProp_CustomConditionCount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskConditions_Inner = { "TaskConditions", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDreamTaskConditionTemplate_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskConditions_Inner_MetaData), NewProp_TaskConditions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskConditions = { "TaskConditions", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, TaskConditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskConditions_MetaData), NewProp_TaskConditions_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskState = { "TaskState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, TaskState), Z_Construct_UEnum_DreamGameplayTask_EDreamTaskState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskState_MetaData), NewProp_TaskState_MetaData) }; // 3331094815
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_OnTaskUpdate = { "OnTaskUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, OnTaskUpdate), Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTaskUpdate_MetaData), NewProp_OnTaskUpdate_MetaData) }; // 4149518427
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_OnTaskStateUpdate = { "OnTaskStateUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, OnTaskStateUpdate), Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTaskStateUpdate_MetaData), NewProp_OnTaskStateUpdate_MetaData) }; // 4149518427
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_OnTaskConditionUpdate = { "OnTaskConditionUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, OnTaskConditionUpdate), Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTaskConditionUpdate_MetaData), NewProp_OnTaskConditionUpdate_MetaData) }; // 4149518427
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDreamTask_Statics::NewProp_OnTaskCompleted = { "OnTaskCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTask, OnTaskCompleted), Z_Construct_UDelegateFunction_UDreamTask_TaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTaskCompleted_MetaData), NewProp_OnTaskCompleted_MetaData) }; // 4149518427
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDreamTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_OwnerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_SubTasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_SubTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_RelatedActorsClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_RelatedActorsClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskPriority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskConditionalCompletionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskConditionalCompletionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_CustomConditionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskConditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskConditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_TaskState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_OnTaskUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_OnTaskStateUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_OnTaskConditionUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTask_Statics::NewProp_OnTaskCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDreamTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplayTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDreamTask_Statics::ClassParams = {
	&UDreamTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDreamTask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTask_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UDreamTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDreamTask()
{
	if (!Z_Registration_Info_UClass_UDreamTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDreamTask.OuterSingleton, Z_Construct_UClass_UDreamTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDreamTask.OuterSingleton;
}
template<> DREAMGAMEPLAYTASK_API UClass* StaticClass<UDreamTask>()
{
	return UDreamTask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamTask);
UDreamTask::~UDreamTask() {}
// End Class UDreamTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDreamTask, UDreamTask::StaticClass, TEXT("UDreamTask"), &Z_Registration_Info_UClass_UDreamTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDreamTask), 683787895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h_11420970(TEXT("/Script/DreamGameplayTask"),
	Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
