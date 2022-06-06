// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef MAYOROFGREAT_MayorOfGreatCharacter_generated_h
#error "MayorOfGreatCharacter.generated.h already included, missing '#pragma once' in MayorOfGreatCharacter.h"
#endif
#define MAYOROFGREAT_MayorOfGreatCharacter_generated_h

#define MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_SPARSE_DATA
#define MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetUPlayerAttr); \
	DECLARE_FUNCTION(execgetBoneScale); \
	DECLARE_FUNCTION(execsetBoneScale);


#define MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetUPlayerAttr); \
	DECLARE_FUNCTION(execgetBoneScale); \
	DECLARE_FUNCTION(execsetBoneScale);


#define MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMayorOfGreatCharacter(); \
	friend struct Z_Construct_UClass_AMayorOfGreatCharacter_Statics; \
public: \
	DECLARE_CLASS(AMayorOfGreatCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MayorOfGreat"), NO_API) \
	DECLARE_SERIALIZER(AMayorOfGreatCharacter)


#define MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMayorOfGreatCharacter(); \
	friend struct Z_Construct_UClass_AMayorOfGreatCharacter_Statics; \
public: \
	DECLARE_CLASS(AMayorOfGreatCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MayorOfGreat"), NO_API) \
	DECLARE_SERIALIZER(AMayorOfGreatCharacter)


#define MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMayorOfGreatCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMayorOfGreatCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMayorOfGreatCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMayorOfGreatCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMayorOfGreatCharacter(AMayorOfGreatCharacter&&); \
	NO_API AMayorOfGreatCharacter(const AMayorOfGreatCharacter&); \
public:


#define MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMayorOfGreatCharacter(AMayorOfGreatCharacter&&); \
	NO_API AMayorOfGreatCharacter(const AMayorOfGreatCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMayorOfGreatCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMayorOfGreatCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMayorOfGreatCharacter)


#define MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMayorOfGreatCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMayorOfGreatCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__m_player_attr() { return STRUCT_OFFSET(AMayorOfGreatCharacter, m_player_attr); }


#define MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_11_PROLOG
#define MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_SPARSE_DATA \
	MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_RPC_WRAPPERS \
	MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_INCLASS \
	MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_SPARSE_DATA \
	MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_INCLASS_NO_PURE_DECLS \
	MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAYOROFGREAT_API UClass* StaticClass<class AMayorOfGreatCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MayorOfGreat_Source_MayorOfGreat_MayorOfGreatCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
