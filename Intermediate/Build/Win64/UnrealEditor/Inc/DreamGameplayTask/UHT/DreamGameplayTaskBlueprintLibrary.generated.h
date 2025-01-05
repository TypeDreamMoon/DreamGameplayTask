// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DreamGameplayTaskBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDreamTask;
class UDreamTaskComponent;
class UDreamTaskType;
enum class EDreamTaskPriority : uint8;
enum class EDreamTaskState : uint8;
struct FDreamTaskSaveData;
struct FGuid;
#ifdef DREAMGAMEPLAYTASK_DreamGameplayTaskBlueprintLibrary_generated_h
#error "DreamGameplayTaskBlueprintLibrary.generated.h already included, missing '#pragma once' in DreamGameplayTaskBlueprintLibrary.h"
#endif
#define DREAMGAMEPLAYTASK_DreamGameplayTaskBlueprintLibrary_generated_h

#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskBlueprintLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFilterTasksByState); \
	DECLARE_FUNCTION(execFilterTasksByPriority); \
	DECLARE_FUNCTION(execFilterTasksByType); \
	DECLARE_FUNCTION(execDestructDreamGameplayTaskSaveData); \
	DECLARE_FUNCTION(execConstructDreamGameplayTaskSaveData); \
	DECLARE_FUNCTION(execGetDreamTaskGuid); \
	DECLARE_FUNCTION(execGetDreamTaskClassByGUID); \
	DECLARE_FUNCTION(execGetDreamTaskComponent);


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskBlueprintLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDreamGameplayTaskBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDreamGameplayTaskBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDreamGameplayTaskBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DreamGameplayTask"), NO_API) \
	DECLARE_SERIALIZER(UDreamGameplayTaskBlueprintLibrary)


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskBlueprintLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDreamGameplayTaskBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDreamGameplayTaskBlueprintLibrary(UDreamGameplayTaskBlueprintLibrary&&); \
	UDreamGameplayTaskBlueprintLibrary(const UDreamGameplayTaskBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDreamGameplayTaskBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDreamGameplayTaskBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDreamGameplayTaskBlueprintLibrary) \
	NO_API virtual ~UDreamGameplayTaskBlueprintLibrary();


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskBlueprintLibrary_h_16_PROLOG
#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskBlueprintLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskBlueprintLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskBlueprintLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskBlueprintLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DREAMGAMEPLAYTASK_API UClass* StaticClass<class UDreamGameplayTaskBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
