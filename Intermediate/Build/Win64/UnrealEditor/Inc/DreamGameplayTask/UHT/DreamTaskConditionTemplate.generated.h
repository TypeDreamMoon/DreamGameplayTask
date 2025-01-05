// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Classes/DreamTaskConditionTemplate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDreamTaskConditionTemplate;
#ifdef DREAMGAMEPLAYTASK_DreamTaskConditionTemplate_generated_h
#error "DreamTaskConditionTemplate.generated.h already included, missing '#pragma once' in DreamTaskConditionTemplate.h"
#endif
#define DREAMGAMEPLAYTASK_DreamTaskConditionTemplate_generated_h

#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskConditionTemplate_h_18_DELEGATE \
static void FTaskConditionNumDelegate_DelegateWrapper(const FMulticastScriptDelegate& TaskConditionNumDelegate, int32 Num);


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskConditionTemplate_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateByClass); \
	DECLARE_FUNCTION(execUpdateByName); \
	DECLARE_FUNCTION(execSetCount); \
	DECLARE_FUNCTION(execGetCompletedCount); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execIsCompleted); \
	DECLARE_FUNCTION(execBP_CompletedCondition);


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskConditionTemplate_h_16_CALLBACK_WRAPPERS
#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskConditionTemplate_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDreamTaskConditionTemplate(); \
	friend struct Z_Construct_UClass_UDreamTaskConditionTemplate_Statics; \
public: \
	DECLARE_CLASS(UDreamTaskConditionTemplate, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DreamGameplayTask"), NO_API) \
	DECLARE_SERIALIZER(UDreamTaskConditionTemplate)


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskConditionTemplate_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDreamTaskConditionTemplate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDreamTaskConditionTemplate(UDreamTaskConditionTemplate&&); \
	UDreamTaskConditionTemplate(const UDreamTaskConditionTemplate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDreamTaskConditionTemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDreamTaskConditionTemplate); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDreamTaskConditionTemplate) \
	NO_API virtual ~UDreamTaskConditionTemplate();


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskConditionTemplate_h_13_PROLOG
#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskConditionTemplate_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskConditionTemplate_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskConditionTemplate_h_16_CALLBACK_WRAPPERS \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskConditionTemplate_h_16_INCLASS_NO_PURE_DECLS \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskConditionTemplate_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DREAMGAMEPLAYTASK_API UClass* StaticClass<class UDreamTaskConditionTemplate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskConditionTemplate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
