// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef MAYOROFGREAT_EventManager_generated_h
#error "EventManager.generated.h already included, missing '#pragma once' in EventManager.h"
#endif
#define MAYOROFGREAT_EventManager_generated_h

#define MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_SPARSE_DATA
#define MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execmakeChoice); \
	DECLARE_FUNCTION(execgetChosenEvent);


#define MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execmakeChoice); \
	DECLARE_FUNCTION(execgetChosenEvent);


#define MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventManager(); \
	friend struct Z_Construct_UClass_UEventManager_Statics; \
public: \
	DECLARE_CLASS(UEventManager, UClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MayorOfGreat"), NO_API) \
	DECLARE_SERIALIZER(UEventManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUEventManager(); \
	friend struct Z_Construct_UClass_UEventManager_Statics; \
public: \
	DECLARE_CLASS(UEventManager, UClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MayorOfGreat"), NO_API) \
	DECLARE_SERIALIZER(UEventManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventManager(UEventManager&&); \
	NO_API UEventManager(const UEventManager&); \
public:


#define MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventManager(UEventManager&&); \
	NO_API UEventManager(const UEventManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventManager)


#define MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_PRIVATE_PROPERTY_OFFSET
#define MayorOfGreat_Source_MayorOfGreat_EventManager_h_7_PROLOG
#define MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_PRIVATE_PROPERTY_OFFSET \
	MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_SPARSE_DATA \
	MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_RPC_WRAPPERS \
	MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_INCLASS \
	MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_PRIVATE_PROPERTY_OFFSET \
	MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_SPARSE_DATA \
	MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_INCLASS_NO_PURE_DECLS \
	MayorOfGreat_Source_MayorOfGreat_EventManager_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAYOROFGREAT_API UClass* StaticClass<class UEventManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MayorOfGreat_Source_MayorOfGreat_EventManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
