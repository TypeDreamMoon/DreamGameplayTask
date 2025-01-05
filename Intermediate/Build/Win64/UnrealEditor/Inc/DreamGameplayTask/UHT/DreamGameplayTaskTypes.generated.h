// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DreamGameplayTaskTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DREAMGAMEPLAYTASK_DreamGameplayTaskTypes_generated_h
#error "DreamGameplayTaskTypes.generated.h already included, missing '#pragma once' in DreamGameplayTaskTypes.h"
#endif
#define DREAMGAMEPLAYTASK_DreamGameplayTaskTypes_generated_h

#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskTypes_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDreamTaskSaveSingle_Statics; \
	DREAMGAMEPLAYTASK_API static class UScriptStruct* StaticStruct();


template<> DREAMGAMEPLAYTASK_API UScriptStruct* StaticStruct<struct FDreamTaskSaveSingle>();

#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskTypes_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDreamTaskSaveData_Statics; \
	DREAMGAMEPLAYTASK_API static class UScriptStruct* StaticStruct();


template<> DREAMGAMEPLAYTASK_API UScriptStruct* StaticStruct<struct FDreamTaskSaveData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_DreamGameplayTaskTypes_h


#define FOREACH_ENUM_EDREAMTASKSTATE(op) \
	op(EDreamTaskState::EDTS_Accept) \
	op(EDreamTaskState::EDTS_Going) \
	op(EDreamTaskState::EDTS_Completed) \
	op(EDreamTaskState::EDTS_Failed) 

enum class EDreamTaskState : uint8;
template<> struct TIsUEnumClass<EDreamTaskState> { enum { Value = true }; };
template<> DREAMGAMEPLAYTASK_API UEnum* StaticEnum<EDreamTaskState>();

#define FOREACH_ENUM_EDREAMTASKPRIORITY(op) \
	op(EDreamTaskPriority::EDTP_Low) \
	op(EDreamTaskPriority::EDTP_Normal) \
	op(EDreamTaskPriority::EDTP_High) \
	op(EDreamTaskPriority::EDTP_Urgent) 

enum class EDreamTaskPriority : uint8;
template<> struct TIsUEnumClass<EDreamTaskPriority> { enum { Value = true }; };
template<> DREAMGAMEPLAYTASK_API UEnum* StaticEnum<EDreamTaskPriority>();

#define FOREACH_ENUM_EDREAMTASKCONDITIONALCOMPLETIONMODE(op) \
	op(EDreamTaskConditionalCompletionMode::EDTCCM_All) \
	op(EDreamTaskConditionalCompletionMode::EDTCCM_Any) \
	op(EDreamTaskConditionalCompletionMode::EDTCCM_Custom) 

enum class EDreamTaskConditionalCompletionMode : uint8;
template<> struct TIsUEnumClass<EDreamTaskConditionalCompletionMode> { enum { Value = true }; };
template<> DREAMGAMEPLAYTASK_API UEnum* StaticEnum<EDreamTaskConditionalCompletionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
