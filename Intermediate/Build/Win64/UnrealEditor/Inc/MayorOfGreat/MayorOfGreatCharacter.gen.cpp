// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MayorOfGreat/MayorOfGreatCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMayorOfGreatCharacter() {}
// Cross Module References
	MAYOROFGREAT_API UClass* Z_Construct_UClass_AMayorOfGreatCharacter_NoRegister();
	MAYOROFGREAT_API UClass* Z_Construct_UClass_AMayorOfGreatCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MayorOfGreat();
	MAYOROFGREAT_API UClass* Z_Construct_UClass_UPlayerAttr_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMayorOfGreatCharacter::execgetUPlayerAttr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->getUPlayerAttr();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMayorOfGreatCharacter::execgetBoneScale)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_bone_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->getBoneScale(Z_Param_bone_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMayorOfGreatCharacter::execsetBoneScale)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_bone_name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setBoneScale(Z_Param_bone_name,Z_Param_scale);
		P_NATIVE_END;
	}
	void AMayorOfGreatCharacter::StaticRegisterNativesAMayorOfGreatCharacter()
	{
		UClass* Class = AMayorOfGreatCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getBoneScale", &AMayorOfGreatCharacter::execgetBoneScale },
			{ "getUPlayerAttr", &AMayorOfGreatCharacter::execgetUPlayerAttr },
			{ "setBoneScale", &AMayorOfGreatCharacter::execsetBoneScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMayorOfGreatCharacter_getBoneScale_Statics
	{
		struct MayorOfGreatCharacter_eventgetBoneScale_Parms
		{
			FString bone_name;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_bone_name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMayorOfGreatCharacter_getBoneScale_Statics::NewProp_bone_name = { "bone_name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MayorOfGreatCharacter_eventgetBoneScale_Parms, bone_name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMayorOfGreatCharacter_getBoneScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MayorOfGreatCharacter_eventgetBoneScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMayorOfGreatCharacter_getBoneScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMayorOfGreatCharacter_getBoneScale_Statics::NewProp_bone_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMayorOfGreatCharacter_getBoneScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMayorOfGreatCharacter_getBoneScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "MayorOfGreatCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMayorOfGreatCharacter_getBoneScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMayorOfGreatCharacter, nullptr, "getBoneScale", nullptr, nullptr, sizeof(MayorOfGreatCharacter_eventgetBoneScale_Parms), Z_Construct_UFunction_AMayorOfGreatCharacter_getBoneScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMayorOfGreatCharacter_getBoneScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMayorOfGreatCharacter_getBoneScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMayorOfGreatCharacter_getBoneScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMayorOfGreatCharacter_getBoneScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMayorOfGreatCharacter_getBoneScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMayorOfGreatCharacter_getUPlayerAttr_Statics
	{
		struct MayorOfGreatCharacter_eventgetUPlayerAttr_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMayorOfGreatCharacter_getUPlayerAttr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MayorOfGreatCharacter_eventgetUPlayerAttr_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UPlayerAttr_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMayorOfGreatCharacter_getUPlayerAttr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMayorOfGreatCharacter_getUPlayerAttr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMayorOfGreatCharacter_getUPlayerAttr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "MayorOfGreatCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMayorOfGreatCharacter_getUPlayerAttr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMayorOfGreatCharacter, nullptr, "getUPlayerAttr", nullptr, nullptr, sizeof(MayorOfGreatCharacter_eventgetUPlayerAttr_Parms), Z_Construct_UFunction_AMayorOfGreatCharacter_getUPlayerAttr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMayorOfGreatCharacter_getUPlayerAttr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMayorOfGreatCharacter_getUPlayerAttr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMayorOfGreatCharacter_getUPlayerAttr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMayorOfGreatCharacter_getUPlayerAttr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMayorOfGreatCharacter_getUPlayerAttr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMayorOfGreatCharacter_setBoneScale_Statics
	{
		struct MayorOfGreatCharacter_eventsetBoneScale_Parms
		{
			FString bone_name;
			float scale;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_bone_name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMayorOfGreatCharacter_setBoneScale_Statics::NewProp_bone_name = { "bone_name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MayorOfGreatCharacter_eventsetBoneScale_Parms, bone_name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMayorOfGreatCharacter_setBoneScale_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MayorOfGreatCharacter_eventsetBoneScale_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMayorOfGreatCharacter_setBoneScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMayorOfGreatCharacter_setBoneScale_Statics::NewProp_bone_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMayorOfGreatCharacter_setBoneScale_Statics::NewProp_scale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMayorOfGreatCharacter_setBoneScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "MayorOfGreatCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMayorOfGreatCharacter_setBoneScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMayorOfGreatCharacter, nullptr, "setBoneScale", nullptr, nullptr, sizeof(MayorOfGreatCharacter_eventsetBoneScale_Parms), Z_Construct_UFunction_AMayorOfGreatCharacter_setBoneScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMayorOfGreatCharacter_setBoneScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMayorOfGreatCharacter_setBoneScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMayorOfGreatCharacter_setBoneScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMayorOfGreatCharacter_setBoneScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMayorOfGreatCharacter_setBoneScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMayorOfGreatCharacter_NoRegister()
	{
		return AMayorOfGreatCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMayorOfGreatCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMayorOfGreatCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MayorOfGreat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMayorOfGreatCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMayorOfGreatCharacter_getBoneScale, "getBoneScale" }, // 1801004678
		{ &Z_Construct_UFunction_AMayorOfGreatCharacter_getUPlayerAttr, "getUPlayerAttr" }, // 1980875278
		{ &Z_Construct_UFunction_AMayorOfGreatCharacter_setBoneScale, "setBoneScale" }, // 1436789119
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMayorOfGreatCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MayorOfGreatCharacter.h" },
		{ "ModuleRelativePath", "MayorOfGreatCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MayorOfGreatCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMayorOfGreatCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MayorOfGreatCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMayorOfGreatCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "MayorOfGreatCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMayorOfGreatCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "MayorOfGreatCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMayorOfGreatCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMayorOfGreatCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_BaseTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMayorOfGreatCharacter_Statics::NewProp_BaseLookUpRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMayorOfGreatCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMayorOfGreatCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMayorOfGreatCharacter_Statics::ClassParams = {
		&AMayorOfGreatCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMayorOfGreatCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMayorOfGreatCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMayorOfGreatCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMayorOfGreatCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMayorOfGreatCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMayorOfGreatCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMayorOfGreatCharacter, 2623794366);
	template<> MAYOROFGREAT_API UClass* StaticClass<AMayorOfGreatCharacter>()
	{
		return AMayorOfGreatCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMayorOfGreatCharacter(Z_Construct_UClass_AMayorOfGreatCharacter, &AMayorOfGreatCharacter::StaticClass, TEXT("/Script/MayorOfGreat"), TEXT("AMayorOfGreatCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMayorOfGreatCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
