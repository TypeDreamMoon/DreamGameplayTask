// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Classes/DreamTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class AActor;
class UDreamTask;
class UDreamTaskComponent;
class UDreamTaskConditionTemplate;
class UDreamTaskType;
class UObject;
enum class EDreamTaskState : uint8;
#ifdef DREAMGAMEPLAYTASK_DreamTask_generated_h
#error "DreamTask.generated.h already included, missing '#pragma once' in DreamTask.h"
#endif
#define DREAMGAMEPLAYTASK_DreamTask_generated_h

#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h_171_DELEGATE \
static void FTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& TaskDelegate, UDreamTask* Task);


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h_172_DELEGATE \
static void FTaskSimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& TaskSimpleDelegate);


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsCompleted); \
	DECLARE_FUNCTION(execGetTaskConditionProgress); \
	DECLARE_FUNCTION(execSetTaskConditionProgress); \
	DECLARE_FUNCTION(execSetTaskState); \
	DECLARE_FUNCTION(execUpdateTaskByClass); \
	DECLARE_FUNCTION(execUpdateTaskByName); \
	DECLARE_FUNCTION(execGetRelatedActors); \
	DECLARE_FUNCTION(execCheckTaskCompleted); \
	DECLARE_FUNCTION(execGetTaskCondition); \
	DECLARE_FUNCTION(execGetSubTasks); \
	DECLARE_FUNCTION(execGetTaskConditions); \
	DECLARE_FUNCTION(execGetPayload); \
	DECLARE_FUNCTION(execGetOwnerComponent); \
	DECLARE_FUNCTION(execGetTaskState); \
	DECLARE_FUNCTION(execGetTaskType); \
	DECLARE_FUNCTION(execGetTaskDesc); \
	DECLARE_FUNCTION(execGetTaskDisplayName); \
	DECLARE_FUNCTION(execGetTaskName);


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h_19_CALLBACK_WRAPPERS
#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDreamTask(); \
	friend struct Z_Construct_UClass_UDreamTask_Statics; \
public: \
	DECLARE_CLASS(UDreamTask, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DreamGameplayTask"), NO_API) \
	DECLARE_SERIALIZER(UDreamTask)


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDreamTask(UDreamTask&&); \
	UDreamTask(const UDreamTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDreamTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDreamTask); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDreamTask) \
	NO_API virtual ~UDreamTask();


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h_16_PROLOG
#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h_19_CALLBACK_WRAPPERS \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h_19_INCLASS_NO_PURE_DECLS \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DREAMGAMEPLAYTASK_API UClass* StaticClass<class UDreamTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
