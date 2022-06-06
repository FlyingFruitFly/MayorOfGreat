// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAYOROFGREAT_EventOption_generated_h
#error "EventOption.generated.h already included, missing '#pragma once' in EventOption.h"
#endif
#define MAYOROFGREAT_EventOption_generated_h

#define MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_SPARSE_DATA
#define MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetDescribe); \
	DECLARE_FUNCTION(execgetName);


#define MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetDescribe); \
	DECLARE_FUNCTION(execgetName);


#define MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventOption(); \
	friend struct Z_Construct_UClass_UEventOption_Statics; \
public: \
	DECLARE_CLASS(UEventOption, UClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MayorOfGreat"), NO_API) \
	DECLARE_SERIALIZER(UEventOption) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUEventOption(); \
	friend struct Z_Construct_UClass_UEventOption_Statics; \
public: \
	DECLARE_CLASS(UEventOption, UClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MayorOfGreat"), NO_API) \
	DECLARE_SERIALIZER(UEventOption) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventOption(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventOption) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventOption); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventOption); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventOption(UEventOption&&); \
	NO_API UEventOption(const UEventOption&); \
public:


#define MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventOption(UEventOption&&); \
	NO_API UEventOption(const UEventOption&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventOption); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventOption); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEventOption)


#define MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_impact() { return STRUCT_OFFSET(UEventOption, m_impact); }


#define MayorOfGreat_Source_MayorOfGreat_EventOption_h_6_PROLOG
#define MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_PRIVATE_PROPERTY_OFFSET \
	MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_SPARSE_DATA \
	MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_RPC_WRAPPERS \
	MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_INCLASS \
	MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_PRIVATE_PROPERTY_OFFSET \
	MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_SPARSE_DATA \
	MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_INCLASS_NO_PURE_DECLS \
	MayorOfGreat_Source_MayorOfGreat_EventOption_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAYOROFGREAT_API UClass* StaticClass<class UEventOption>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MayorOfGreat_Source_MayorOfGreat_EventOption_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
