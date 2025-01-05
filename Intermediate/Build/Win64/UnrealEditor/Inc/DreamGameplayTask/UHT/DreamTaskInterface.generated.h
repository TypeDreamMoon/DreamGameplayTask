// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Classes/DreamTaskInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDreamTask;
#ifdef DREAMGAMEPLAYTASK_DreamTaskInterface_generated_h
#error "DreamTaskInterface.generated.h already included, missing '#pragma once' in DreamTaskInterface.h"
#endif
#define DREAMGAMEPLAYTASK_DreamTaskInterface_generated_h

#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskInterface_h_15_CALLBACK_WRAPPERS
#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDreamTaskInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDreamTaskInterface(UDreamTaskInterface&&); \
	UDreamTaskInterface(const UDreamTaskInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDreamTaskInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDreamTaskInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDreamTaskInterface) \
	NO_API virtual ~UDreamTaskInterface();


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDreamTaskInterface(); \
	friend struct Z_Construct_UClass_UDreamTaskInterface_Statics; \
public: \
	DECLARE_CLASS(UDreamTaskInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DreamGameplayTask"), NO_API) \
	DECLARE_SERIALIZER(UDreamTaskInterface)


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDreamTaskInterface() {} \
public: \
	typedef UDreamTaskInterface UClassType; \
	typedef IDreamTaskInterface ThisClass; \
	static void Execute_TaskCompleted(UObject* O, UDreamTask* Task); \
	static void Execute_TaskInitialize(UObject* O, UDreamTask* Task); \
	static void Execute_TaskUpdate(UObject* O, UDreamTask* Task); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskInterface_h_12_PROLOG
#define FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskInterface_h_15_CALLBACK_WRAPPERS \
	FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DREAMGAMEPLAYTASK_API UClass* StaticClass<class UDreamTaskInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginBuildProject_Plugins_DreamPlugins_DreamGameplayTask_Source_DreamGameplayTask_Public_Classes_DreamTaskInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
