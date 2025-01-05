// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Classes/DreamTaskComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDreamTask;
class UObject;
#ifdef DREAMGAMEPLAYTASK_DreamTaskComponent_generated_h
#error "DreamTaskComponent.generated.h already included, missing '#pragma once' in DreamTaskComponent.h"
#endif
#define DREAMGAMEPLAYTASK_DreamTaskComponent_generated_h

#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskComponent_h_26_DELEGATE \
static void FTaskListDelegate_DelegateWrapper(const FMulticastScriptDelegate& TaskListDelegate, TArray<UDreamTask*> const& TaskList);


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskComponent_h_28_DELEGATE \
static void FTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& TaskDelegate, UDreamTask* Task);


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTaskByName); \
	DECLARE_FUNCTION(execGetTaskByClass); \
	DECLARE_FUNCTION(execGetTaskList); \
	DECLARE_FUNCTION(execUpdateTaskOfConditionNameByName); \
	DECLARE_FUNCTION(execUpdateTaskOfConditionNamesByName); \
	DECLARE_FUNCTION(execUpdateTaskOfConditionNameByClass); \
	DECLARE_FUNCTION(execUpdateTaskOfConditionNamesByClass); \
	DECLARE_FUNCTION(execRemoveTaskByName); \
	DECLARE_FUNCTION(execRemoveTaskByClass); \
	DECLARE_FUNCTION(execHasTaskByName); \
	DECLARE_FUNCTION(execHasTaskByClass); \
	DECLARE_FUNCTION(execInitializeTaskList); \
	DECLARE_FUNCTION(execGiveTaskByClass);


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDreamTaskComponent(); \
	friend struct Z_Construct_UClass_UDreamTaskComponent_Statics; \
public: \
	DECLARE_CLASS(UDreamTaskComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DreamGameplayTask"), NO_API) \
	DECLARE_SERIALIZER(UDreamTaskComponent)


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDreamTaskComponent(UDreamTaskComponent&&); \
	UDreamTaskComponent(const UDreamTaskComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDreamTaskComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDreamTaskComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDreamTaskComponent) \
	NO_API virtual ~UDreamTaskComponent();


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskComponent_h_14_PROLOG
#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DREAMGAMEPLAYTASK_API UClass* StaticClass<class UDreamTaskComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
