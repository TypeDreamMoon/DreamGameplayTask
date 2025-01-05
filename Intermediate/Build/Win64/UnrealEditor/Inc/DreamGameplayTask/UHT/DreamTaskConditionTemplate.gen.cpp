// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplayTask/Public/Classes/DreamTaskConditionTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamTaskConditionTemplate() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTask_NoRegister();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTaskConditionTemplate();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTaskConditionTemplate_NoRegister();
DREAMGAMEPLAYTASK_API UFunction* Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_DreamGameplayTask();
// End Cross Module References

// Begin Delegate FTaskConditionNumDelegate
struct Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature_Statics
{
	struct DreamTaskConditionTemplate_eventTaskConditionNumDelegate_Parms
	{
		int32 Num;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Classes/DreamTaskConditionTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Num;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskConditionTemplate_eventTaskConditionNumDelegate_Parms, Num), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature_Statics::NewProp_Num,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskConditionTemplate, nullptr, "TaskConditionNumDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature_Statics::DreamTaskConditionTemplate_eventTaskConditionNumDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature_Statics::DreamTaskConditionTemplate_eventTaskConditionNumDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDreamTaskConditionTemplate::FTaskConditionNumDelegate_DelegateWrapper(const FMulticastScriptDelegate& TaskConditionNumDelegate, int32 Num)
{
	struct DreamTaskConditionTemplate_eventTaskConditionNumDelegate_Parms
	{
		int32 Num;
	};
	DreamTaskConditionTemplate_eventTaskConditionNumDelegate_Parms Parms;
	Parms.Num=Num;
	TaskConditionNumDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FTaskConditionNumDelegate

// Begin Class UDreamTaskConditionTemplate Function BP_CompletedCondition
struct DreamTaskConditionTemplate_eventBP_CompletedCondition_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DreamTaskConditionTemplate_eventBP_CompletedCondition_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UDreamTaskConditionTemplate_BP_CompletedCondition = FName(TEXT("BP_CompletedCondition"));
bool UDreamTaskConditionTemplate::BP_CompletedCondition()
{
	UFunction* Func = FindFunctionChecked(NAME_UDreamTaskConditionTemplate_BP_CompletedCondition);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DreamTaskConditionTemplate_eventBP_CompletedCondition_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return BP_CompletedCondition_Implementation();
	}
}
struct Z_Construct_UFunction_UDreamTaskConditionTemplate_BP_CompletedCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9d\xa1\xe4\xbb\xb6\xe5\xae\x8c\xe6\x88\x90\xe5\xae\x9e\xe7\x8e\xb0\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "DisplayName", "CompletedCondition" },
		{ "ModuleRelativePath", "Public/Classes/DreamTaskConditionTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9d\xa1\xe4\xbb\xb6\xe5\xae\x8c\xe6\x88\x90\xe5\xae\x9e\xe7\x8e\xb0\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDreamTaskConditionTemplate_BP_CompletedCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DreamTaskConditionTemplate_eventBP_CompletedCondition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDreamTaskConditionTemplate_BP_CompletedCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DreamTaskConditionTemplate_eventBP_CompletedCondition_Parms), &Z_Construct_UFunction_UDreamTaskConditionTemplate_BP_CompletedCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskConditionTemplate_BP_CompletedCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskConditionTemplate_BP_CompletedCondition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_BP_CompletedCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskConditionTemplate_BP_CompletedCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskConditionTemplate, nullptr, "BP_CompletedCondition", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskConditionTemplate_BP_CompletedCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_BP_CompletedCondition_Statics::PropPointers), sizeof(DreamTaskConditionTemplate_eventBP_CompletedCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_BP_CompletedCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskConditionTemplate_BP_CompletedCondition_Statics::Function_MetaDataParams) };
static_assert(sizeof(DreamTaskConditionTemplate_eventBP_CompletedCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskConditionTemplate_BP_CompletedCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskConditionTemplate_BP_CompletedCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskConditionTemplate::execBP_CompletedCondition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BP_CompletedCondition_Implementation();
	P_NATIVE_END;
}
// End Class UDreamTaskConditionTemplate Function BP_CompletedCondition

// Begin Class UDreamTaskConditionTemplate Function GetCompletedCount
struct Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCompletedCount_Statics
{
	struct DreamTaskConditionTemplate_eventGetCompletedCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe5\xae\x8c\xe6\x88\x90\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskConditionTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xae\x8c\xe6\x88\x90\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCompletedCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskConditionTemplate_eventGetCompletedCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCompletedCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCompletedCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCompletedCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCompletedCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskConditionTemplate, nullptr, "GetCompletedCount", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCompletedCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCompletedCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCompletedCount_Statics::DreamTaskConditionTemplate_eventGetCompletedCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCompletedCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCompletedCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCompletedCount_Statics::DreamTaskConditionTemplate_eventGetCompletedCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCompletedCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCompletedCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskConditionTemplate::execGetCompletedCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCompletedCount();
	P_NATIVE_END;
}
// End Class UDreamTaskConditionTemplate Function GetCompletedCount

// Begin Class UDreamTaskConditionTemplate Function GetCount
struct Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCount_Statics
{
	struct DreamTaskConditionTemplate_eventGetCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskConditionTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskConditionTemplate_eventGetCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskConditionTemplate, nullptr, "GetCount", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCount_Statics::DreamTaskConditionTemplate_eventGetCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCount_Statics::DreamTaskConditionTemplate_eventGetCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskConditionTemplate::execGetCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCount();
	P_NATIVE_END;
}
// End Class UDreamTaskConditionTemplate Function GetCount

// Begin Class UDreamTaskConditionTemplate Function IsCompleted
struct Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted_Statics
{
	struct DreamTaskConditionTemplate_eventIsCompleted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe5\xae\x8c\xe6\x88\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskConditionTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xae\x8c\xe6\x88\x90" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DreamTaskConditionTemplate_eventIsCompleted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DreamTaskConditionTemplate_eventIsCompleted_Parms), &Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskConditionTemplate, nullptr, "IsCompleted", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted_Statics::DreamTaskConditionTemplate_eventIsCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted_Statics::DreamTaskConditionTemplate_eventIsCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskConditionTemplate::execIsCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCompleted();
	P_NATIVE_END;
}
// End Class UDreamTaskConditionTemplate Function IsCompleted

// Begin Class UDreamTaskConditionTemplate Function SetCount
struct Z_Construct_UFunction_UDreamTaskConditionTemplate_SetCount_Statics
{
	struct DreamTaskConditionTemplate_eventSetCount_Parms
	{
		int32 InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xae\xbe\xe7\xbd\xae\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskConditionTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDreamTaskConditionTemplate_SetCount_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskConditionTemplate_eventSetCount_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskConditionTemplate_SetCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskConditionTemplate_SetCount_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_SetCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskConditionTemplate_SetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskConditionTemplate, nullptr, "SetCount", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskConditionTemplate_SetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_SetCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskConditionTemplate_SetCount_Statics::DreamTaskConditionTemplate_eventSetCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_SetCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskConditionTemplate_SetCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskConditionTemplate_SetCount_Statics::DreamTaskConditionTemplate_eventSetCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskConditionTemplate_SetCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskConditionTemplate_SetCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskConditionTemplate::execSetCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCount(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UDreamTaskConditionTemplate Function SetCount

// Begin Class UDreamTaskConditionTemplate Function UpdateByClass
struct Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass_Statics
{
	struct DreamTaskConditionTemplate_eventUpdateByClass_Parms
	{
		TArray<TSubclassOf<UDreamTaskConditionTemplate> > Classes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9b\xb4\xe6\x96\xb0\xe6\x9d\xa1\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskConditionTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe6\x9d\xa1\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Classes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Classes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Classes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass_Statics::NewProp_Classes_Inner = { "Classes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDreamTaskConditionTemplate_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass_Statics::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskConditionTemplate_eventUpdateByClass_Parms, Classes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Classes_MetaData), NewProp_Classes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass_Statics::NewProp_Classes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass_Statics::NewProp_Classes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskConditionTemplate, nullptr, "UpdateByClass", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass_Statics::DreamTaskConditionTemplate_eventUpdateByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass_Statics::DreamTaskConditionTemplate_eventUpdateByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskConditionTemplate::execUpdateByClass)
{
	P_GET_TARRAY_REF(TSubclassOf<UDreamTaskConditionTemplate>,Z_Param_Out_Classes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateByClass(Z_Param_Out_Classes);
	P_NATIVE_END;
}
// End Class UDreamTaskConditionTemplate Function UpdateByClass

// Begin Class UDreamTaskConditionTemplate Function UpdateByName
struct Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName_Statics
{
	struct DreamTaskConditionTemplate_eventUpdateByName_Parms
	{
		TArray<FName> Names;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9b\xb4\xe6\x96\xb0\xe6\x9d\xa1\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskConditionTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe6\x9d\xa1\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskConditionTemplate_eventUpdateByName_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName_Statics::NewProp_Names_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName_Statics::NewProp_Names,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskConditionTemplate, nullptr, "UpdateByName", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName_Statics::DreamTaskConditionTemplate_eventUpdateByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName_Statics::DreamTaskConditionTemplate_eventUpdateByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDreamTaskConditionTemplate::execUpdateByName)
{
	P_GET_TARRAY(FName,Z_Param_Names);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateByName(Z_Param_Names);
	P_NATIVE_END;
}
// End Class UDreamTaskConditionTemplate Function UpdateByName

// Begin Class UDreamTaskConditionTemplate
void UDreamTaskConditionTemplate::StaticRegisterNativesUDreamTaskConditionTemplate()
{
	UClass* Class = UDreamTaskConditionTemplate::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BP_CompletedCondition", &UDreamTaskConditionTemplate::execBP_CompletedCondition },
		{ "GetCompletedCount", &UDreamTaskConditionTemplate::execGetCompletedCount },
		{ "GetCount", &UDreamTaskConditionTemplate::execGetCount },
		{ "IsCompleted", &UDreamTaskConditionTemplate::execIsCompleted },
		{ "SetCount", &UDreamTaskConditionTemplate::execSetCount },
		{ "UpdateByClass", &UDreamTaskConditionTemplate::execUpdateByClass },
		{ "UpdateByName", &UDreamTaskConditionTemplate::execUpdateByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDreamTaskConditionTemplate);
UClass* Z_Construct_UClass_UDreamTaskConditionTemplate_NoRegister()
{
	return UDreamTaskConditionTemplate::StaticClass();
}
struct Z_Construct_UClass_UDreamTaskConditionTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dream Task Condition Template\n */" },
#endif
		{ "IncludePath", "Classes/DreamTaskConditionTemplate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Classes/DreamTaskConditionTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dream Task Condition Template" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionName_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9d\xa1\xe4\xbb\xb6\xe5\x86\x85\xe9\x83\xa8\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskConditionTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x86\x85\xe9\x83\xa8\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionDisplayName_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9d\xa1\xe4\xbb\xb6\xe6\x98\xbe\xe7\xa4\xba\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskConditionTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9d\xa1\xe4\xbb\xb6\xe6\x98\xbe\xe7\xa4\xba\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionDesc_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9d\xa1\xe4\xbb\xb6\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskConditionTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9d\xa1\xe4\xbb\xb6\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9d\xa1\xe4\xbb\xb6\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskConditionTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9d\xa1\xe4\xbb\xb6\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletedCount_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xae\x8c\xe6\x88\x90\xe6\x95\xb0\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskConditionTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\x8c\xe6\x88\x90\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerTask_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9d\xa1\xe4\xbb\xb6\xe6\x8b\xa5\xe6\x9c\x89\xe8\x80\x85\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskConditionTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9d\xa1\xe4\xbb\xb6\xe6\x8b\xa5\xe6\x9c\x89\xe8\x80\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConditionUpdate_MetaData[] = {
		{ "Category", "Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9d\xa1\xe4\xbb\xb6\xe6\x9b\xb4\xe6\x96\xb0\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskConditionTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9d\xa1\xe4\xbb\xb6\xe6\x9b\xb4\xe6\x96\xb0\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConditionName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ConditionDisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ConditionDesc;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompletedCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerTask;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConditionUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDreamTaskConditionTemplate_BP_CompletedCondition, "BP_CompletedCondition" }, // 1933324874
		{ &Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCompletedCount, "GetCompletedCount" }, // 2762412149
		{ &Z_Construct_UFunction_UDreamTaskConditionTemplate_GetCount, "GetCount" }, // 4251713355
		{ &Z_Construct_UFunction_UDreamTaskConditionTemplate_IsCompleted, "IsCompleted" }, // 3171077059
		{ &Z_Construct_UFunction_UDreamTaskConditionTemplate_SetCount, "SetCount" }, // 3428664538
		{ &Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature, "TaskConditionNumDelegate__DelegateSignature" }, // 2576510593
		{ &Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByClass, "UpdateByClass" }, // 32136728
		{ &Z_Construct_UFunction_UDreamTaskConditionTemplate_UpdateByName, "UpdateByName" }, // 889539200
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamTaskConditionTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::NewProp_ConditionName = { "ConditionName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTaskConditionTemplate, ConditionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionName_MetaData), NewProp_ConditionName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::NewProp_ConditionDisplayName = { "ConditionDisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTaskConditionTemplate, ConditionDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionDisplayName_MetaData), NewProp_ConditionDisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::NewProp_ConditionDesc = { "ConditionDesc", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTaskConditionTemplate, ConditionDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionDesc_MetaData), NewProp_ConditionDesc_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTaskConditionTemplate, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::NewProp_CompletedCount = { "CompletedCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTaskConditionTemplate, CompletedCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletedCount_MetaData), NewProp_CompletedCount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::NewProp_OwnerTask = { "OwnerTask", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTaskConditionTemplate, OwnerTask), Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerTask_MetaData), NewProp_OwnerTask_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::NewProp_OnConditionUpdate = { "OnConditionUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDreamTaskConditionTemplate, OnConditionUpdate), Z_Construct_UDelegateFunction_UDreamTaskConditionTemplate_TaskConditionNumDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConditionUpdate_MetaData), NewProp_OnConditionUpdate_MetaData) }; // 2576510593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::NewProp_ConditionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::NewProp_ConditionDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::NewProp_ConditionDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::NewProp_CompletedCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::NewProp_OwnerTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::NewProp_OnConditionUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplayTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::ClassParams = {
	&UDreamTaskConditionTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::PropPointers),
	0,
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDreamTaskConditionTemplate()
{
	if (!Z_Registration_Info_UClass_UDreamTaskConditionTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDreamTaskConditionTemplate.OuterSingleton, Z_Construct_UClass_UDreamTaskConditionTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDreamTaskConditionTemplate.OuterSingleton;
}
template<> DREAMGAMEPLAYTASK_API UClass* StaticClass<UDreamTaskConditionTemplate>()
{
	return UDreamTaskConditionTemplate::StaticClass();
}
UDreamTaskConditionTemplate::UDreamTaskConditionTemplate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamTaskConditionTemplate);
UDreamTaskConditionTemplate::~UDreamTaskConditionTemplate() {}
// End Class UDreamTaskConditionTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskConditionTemplate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDreamTaskConditionTemplate, UDreamTaskConditionTemplate::StaticClass, TEXT("UDreamTaskConditionTemplate"), &Z_Registration_Info_UClass_UDreamTaskConditionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDreamTaskConditionTemplate), 3495453628U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskConditionTemplate_h_1292378881(TEXT("/Script/DreamGameplayTask"),
	Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskConditionTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskConditionTemplate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
