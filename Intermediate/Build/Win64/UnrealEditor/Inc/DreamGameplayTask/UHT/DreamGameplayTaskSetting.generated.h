// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DreamGameplayTaskSetting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DREAMGAMEPLAYTASK_DreamGameplayTaskSetting_generated_h
#error "DreamGameplayTaskSetting.generated.h already included, missing '#pragma once' in DreamGameplayTaskSetting.h"
#endif
#define DREAMGAMEPLAYTASK_DreamGameplayTaskSetting_generated_h

#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskSetting_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDreamGameplayTaskSetting(); \
	friend struct Z_Construct_UClass_UDreamGameplayTaskSetting_Statics; \
public: \
	DECLARE_CLASS(UDreamGameplayTaskSetting, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DreamGameplayTask"), NO_API) \
	DECLARE_SERIALIZER(UDreamGameplayTaskSetting) \
	static const TCHAR* StaticConfigName() {return TEXT("DreamGameplayTask");} \



#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskSetting_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDreamGameplayTaskSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDreamGameplayTaskSetting(UDreamGameplayTaskSetting&&); \
	UDreamGameplayTaskSetting(const UDreamGameplayTaskSetting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDreamGameplayTaskSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDreamGameplayTaskSetting); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDreamGameplayTaskSetting) \
	NO_API virtual ~UDreamGameplayTaskSetting();


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskSetting_h_14_PROLOG
#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskSetting_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskSetting_h_17_INCLASS_NO_PURE_DECLS \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskSetting_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DREAMGAMEPLAYTASK_API UClass* StaticClass<class UDreamGameplayTaskSetting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskSetting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
