// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef MAYOROFGREAT_PlayerAttr_generated_h
#error "PlayerAttr.generated.h already included, missing '#pragma once' in PlayerAttr.h"
#endif
#define MAYOROFGREAT_PlayerAttr_generated_h

#define MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_SPARSE_DATA
#define MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetFavor); \
	DECLARE_FUNCTION(execgetSupport); \
	DECLARE_FUNCTION(execgetExpress); \
	DECLARE_FUNCTION(execgetPoliticalTendency); \
	DECLARE_FUNCTION(execgetWealth); \
	DECLARE_FUNCTION(execgetCharm);


#define MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetFavor); \
	DECLARE_FUNCTION(execgetSupport); \
	DECLARE_FUNCTION(execgetExpress); \
	DECLARE_FUNCTION(execgetPoliticalTendency); \
	DECLARE_FUNCTION(execgetWealth); \
	DECLARE_FUNCTION(execgetCharm);


#define MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAttr(); \
	friend struct Z_Construct_UClass_UPlayerAttr_Statics; \
public: \
	DECLARE_CLASS(UPlayerAttr, UClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MayorOfGreat"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAttr) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerAttr(); \
	friend struct Z_Construct_UClass_UPlayerAttr_Statics; \
public: \
	DECLARE_CLASS(UPlayerAttr, UClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MayorOfGreat"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAttr) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAttr(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAttr) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAttr); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAttr); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAttr(UPlayerAttr&&); \
	NO_API UPlayerAttr(const UPlayerAttr&); \
public:


#define MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAttr(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAttr(UPlayerAttr&&); \
	NO_API UPlayerAttr(const UPlayerAttr&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAttr); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAttr); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAttr)


#define MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_PRIVATE_PROPERTY_OFFSET
#define MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_7_PROLOG
#define MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_PRIVATE_PROPERTY_OFFSET \
	MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_SPARSE_DATA \
	MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_RPC_WRAPPERS \
	MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_INCLASS \
	MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_PRIVATE_PROPERTY_OFFSET \
	MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_SPARSE_DATA \
	MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_INCLASS_NO_PURE_DECLS \
	MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAYOROFGREAT_API UClass* StaticClass<class UPlayerAttr>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MayorOfGreat_Source_MayorOfGreat_PlayerAttr_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
