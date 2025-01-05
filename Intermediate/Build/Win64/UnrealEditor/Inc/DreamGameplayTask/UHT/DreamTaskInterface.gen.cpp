// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamGameplayTask/Public/Classes/DreamTaskInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamTaskInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTask_NoRegister();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTaskInterface();
DREAMGAMEPLAYTASK_API UClass* Z_Construct_UClass_UDreamTaskInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_DreamGameplayTask();
// End Cross Module References

// Begin Interface UDreamTaskInterface Function TaskCompleted
struct DreamTaskInterface_eventTaskCompleted_Parms
{
	UDreamTask* Task;
};
void IDreamTaskInterface::TaskCompleted(UDreamTask* Task)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TaskCompleted instead.");
}
static FName NAME_UDreamTaskInterface_TaskCompleted = FName(TEXT("TaskCompleted"));
void IDreamTaskInterface::Execute_TaskCompleted(UObject* O, UDreamTask* Task)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDreamTaskInterface::StaticClass()));
	DreamTaskInterface_eventTaskCompleted_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDreamTaskInterface_TaskCompleted);
	if (Func)
	{
		Parms.Task=Task;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UDreamTaskInterface_TaskCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DreamTaskInterface|RelatedActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe4\xbb\xbb\xe5\x8a\xa1\xe5\xae\x8c\xe6\x88\x90\n\x09 * @param Task \xe5\xae\x8c\xe6\x88\x90\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\xae\x8c\xe6\x88\x90\n@param Task \xe5\xae\x8c\xe6\x88\x90\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTaskInterface_TaskCompleted_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskInterface_eventTaskCompleted_Parms, Task), Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskInterface_TaskCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskInterface_TaskCompleted_Statics::NewProp_Task,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskInterface_TaskCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskInterface_TaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskInterface, nullptr, "TaskCompleted", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskInterface_TaskCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskInterface_TaskCompleted_Statics::PropPointers), sizeof(DreamTaskInterface_eventTaskCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskInterface_TaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskInterface_TaskCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(DreamTaskInterface_eventTaskCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskInterface_TaskCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskInterface_TaskCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UDreamTaskInterface Function TaskCompleted

// Begin Interface UDreamTaskInterface Function TaskInitialize
struct DreamTaskInterface_eventTaskInitialize_Parms
{
	UDreamTask* Task;
};
void IDreamTaskInterface::TaskInitialize(UDreamTask* Task)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TaskInitialize instead.");
}
static FName NAME_UDreamTaskInterface_TaskInitialize = FName(TEXT("TaskInitialize"));
void IDreamTaskInterface::Execute_TaskInitialize(UObject* O, UDreamTask* Task)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDreamTaskInterface::StaticClass()));
	DreamTaskInterface_eventTaskInitialize_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDreamTaskInterface_TaskInitialize);
	if (Func)
	{
		Parms.Task=Task;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UDreamTaskInterface_TaskInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DreamTaskInterface|RelatedActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\n\x09 * @param Task \xe5\xbd\x93\xe5\x89\x8d\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\n@param Task \xe5\xbd\x93\xe5\x89\x8d\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTaskInterface_TaskInitialize_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskInterface_eventTaskInitialize_Parms, Task), Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskInterface_TaskInitialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskInterface_TaskInitialize_Statics::NewProp_Task,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskInterface_TaskInitialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskInterface_TaskInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskInterface, nullptr, "TaskInitialize", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskInterface_TaskInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskInterface_TaskInitialize_Statics::PropPointers), sizeof(DreamTaskInterface_eventTaskInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskInterface_TaskInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskInterface_TaskInitialize_Statics::Function_MetaDataParams) };
static_assert(sizeof(DreamTaskInterface_eventTaskInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskInterface_TaskInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskInterface_TaskInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UDreamTaskInterface Function TaskInitialize

// Begin Interface UDreamTaskInterface Function TaskUpdate
struct DreamTaskInterface_eventTaskUpdate_Parms
{
	UDreamTask* Task;
};
void IDreamTaskInterface::TaskUpdate(UDreamTask* Task)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TaskUpdate instead.");
}
static FName NAME_UDreamTaskInterface_TaskUpdate = FName(TEXT("TaskUpdate"));
void IDreamTaskInterface::Execute_TaskUpdate(UObject* O, UDreamTask* Task)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDreamTaskInterface::StaticClass()));
	DreamTaskInterface_eventTaskUpdate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDreamTaskInterface_TaskUpdate);
	if (Func)
	{
		Parms.Task=Task;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UDreamTaskInterface_TaskUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DreamTaskInterface|RelatedActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9b\xb4\xe6\x96\xb0\n\x09 * @param Task \xe5\xbd\x93\xe5\x89\x8d\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Classes/DreamTaskInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9b\xb4\xe6\x96\xb0\n@param Task \xe5\xbd\x93\xe5\x89\x8d\xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDreamTaskInterface_TaskUpdate_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DreamTaskInterface_eventTaskUpdate_Parms, Task), Z_Construct_UClass_UDreamTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDreamTaskInterface_TaskUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDreamTaskInterface_TaskUpdate_Statics::NewProp_Task,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskInterface_TaskUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamTaskInterface_TaskUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamTaskInterface, nullptr, "TaskUpdate", nullptr, nullptr, Z_Construct_UFunction_UDreamTaskInterface_TaskUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskInterface_TaskUpdate_Statics::PropPointers), sizeof(DreamTaskInterface_eventTaskUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamTaskInterface_TaskUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDreamTaskInterface_TaskUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(DreamTaskInterface_eventTaskUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDreamTaskInterface_TaskUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDreamTaskInterface_TaskUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UDreamTaskInterface Function TaskUpdate

// Begin Interface UDreamTaskInterface
void UDreamTaskInterface::StaticRegisterNativesUDreamTaskInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDreamTaskInterface);
UClass* Z_Construct_UClass_UDreamTaskInterface_NoRegister()
{
	return UDreamTaskInterface::StaticClass();
}
struct Z_Construct_UClass_UDreamTaskInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Classes/DreamTaskInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDreamTaskInterface_TaskCompleted, "TaskCompleted" }, // 4170619817
		{ &Z_Construct_UFunction_UDreamTaskInterface_TaskInitialize, "TaskInitialize" }, // 2483716964
		{ &Z_Construct_UFunction_UDreamTaskInterface_TaskUpdate, "TaskUpdate" }, // 2431898344
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDreamTaskInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDreamTaskInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DreamGameplayTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTaskInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDreamTaskInterface_Statics::ClassParams = {
	&UDreamTaskInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDreamTaskInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDreamTaskInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDreamTaskInterface()
{
	if (!Z_Registration_Info_UClass_UDreamTaskInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDreamTaskInterface.OuterSingleton, Z_Construct_UClass_UDreamTaskInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDreamTaskInterface.OuterSingleton;
}
template<> DREAMGAMEPLAYTASK_API UClass* StaticClass<UDreamTaskInterface>()
{
	return UDreamTaskInterface::StaticClass();
}
UDreamTaskInterface::UDreamTaskInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamTaskInterface);
UDreamTaskInterface::~UDreamTaskInterface() {}
// End Interface UDreamTaskInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDreamTaskInterface, UDreamTaskInterface::StaticClass, TEXT("UDreamTaskInterface"), &Z_Registration_Info_UClass_UDreamTaskInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDreamTaskInterface), 2766130034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskInterface_h_1099567978(TEXT("/Script/DreamGameplayTask"),
	Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
