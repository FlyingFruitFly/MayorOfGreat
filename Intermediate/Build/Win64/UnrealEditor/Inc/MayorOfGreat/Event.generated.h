// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef MAYOROFGREAT_Event_generated_h
#error "Event.generated.h already included, missing '#pragma once' in Event.h"
#endif
#define MAYOROFGREAT_Event_generated_h

#define MayorOfGreat_Source_MayorOfGreat_Event_h_11_SPARSE_DATA
#define MayorOfGreat_Source_MayorOfGreat_Event_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetTalker); \
	DECLARE_FUNCTION(execgetOptionC); \
	DECLARE_FUNCTION(execgetOptionB); \
	DECLARE_FUNCTION(execgetOptionA); \
	DECLARE_FUNCTION(execgetDescribe);


#define MayorOfGreat_Source_MayorOfGreat_Event_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetTalker); \
	DECLARE_FUNCTION(execgetOptionC); \
	DECLARE_FUNCTION(execgetOptionB); \
	DECLARE_FUNCTION(execgetOptionA); \
	DECLARE_FUNCTION(execgetDescribe);


#define MayorOfGreat_Source_MayorOfGreat_Event_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEvent(); \
	friend struct Z_Construct_UClass_UEvent_Statics; \
public: \
	DECLARE_CLASS(UEvent, UClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MayorOfGreat"), NO_API) \
	DECLARE_SERIALIZER(UEvent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MayorOfGreat_Source_MayorOfGreat_Event_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUEvent(); \
	friend struct Z_Construct_UClass_UEvent_Statics; \
public: \
	DECLARE_CLASS(UEvent, UClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MayorOfGreat"), NO_API) \
	DECLARE_SERIALIZER(UEvent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MayorOfGreat_Source_MayorOfGreat_Event_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEvent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEvent(UEvent&&); \
	NO_API UEvent(const UEvent&); \
public:


#define MayorOfGreat_Source_MayorOfGreat_Event_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEvent(UEvent&&); \
	NO_API UEvent(const UEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEvent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEvent)


#define MayorOfGreat_Source_MayorOfGreat_Event_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_options() { return STRUCT_OFFSET(UEvent, m_options); }


#define MayorOfGreat_Source_MayorOfGreat_Event_h_8_PROLOG
#define MayorOfGreat_Source_MayorOfGreat_Event_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MayorOfGreat_Source_MayorOfGreat_Event_h_11_PRIVATE_PROPERTY_OFFSET \
	MayorOfGreat_Source_MayorOfGreat_Event_h_11_SPARSE_DATA \
	MayorOfGreat_Source_MayorOfGreat_Event_h_11_RPC_WRAPPERS \
	MayorOfGreat_Source_MayorOfGreat_Event_h_11_INCLASS \
	MayorOfGreat_Source_MayorOfGreat_Event_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MayorOfGreat_Source_MayorOfGreat_Event_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MayorOfGreat_Source_MayorOfGreat_Event_h_11_PRIVATE_PROPERTY_OFFSET \
	MayorOfGreat_Source_MayorOfGreat_Event_h_11_SPARSE_DATA \
	MayorOfGreat_Source_MayorOfGreat_Event_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	MayorOfGreat_Source_MayorOfGreat_Event_h_11_INCLASS_NO_PURE_DECLS \
	MayorOfGreat_Source_MayorOfGreat_Event_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAYOROFGREAT_API UClass* StaticClass<class UEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MayorOfGreat_Source_MayorOfGreat_Event_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
