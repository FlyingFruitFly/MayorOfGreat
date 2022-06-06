// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MayorOfGreat/FavorAttr.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFavorAttr() {}
// Cross Module References
	MAYOROFGREAT_API UClass* Z_Construct_UClass_UFavorAttr_NoRegister();
	MAYOROFGREAT_API UClass* Z_Construct_UClass_UFavorAttr();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_MayorOfGreat();
// End Cross Module References
	DEFINE_FUNCTION(UFavorAttr::execgetCelebrity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getCelebrity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFavorAttr::execgetPolitician)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getPolitician();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFavorAttr::execgetGane)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getGane();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFavorAttr::execgetPress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getPress();
		P_NATIVE_END;
	}
	void UFavorAttr::StaticRegisterNativesUFavorAttr()
	{
		UClass* Class = UFavorAttr::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getCelebrity", &UFavorAttr::execgetCelebrity },
			{ "getGane", &UFavorAttr::execgetGane },
			{ "getPolitician", &UFavorAttr::execgetPolitician },
			{ "getPress", &UFavorAttr::execgetPress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFavorAttr_getCelebrity_Statics
	{
		struct FavorAttr_eventgetCelebrity_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFavorAttr_getCelebrity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FavorAttr_eventgetCelebrity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFavorAttr_getCelebrity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFavorAttr_getCelebrity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFavorAttr_getCelebrity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "FavorAttr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFavorAttr_getCelebrity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFavorAttr, nullptr, "getCelebrity", nullptr, nullptr, sizeof(FavorAttr_eventgetCelebrity_Parms), Z_Construct_UFunction_UFavorAttr_getCelebrity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFavorAttr_getCelebrity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFavorAttr_getCelebrity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFavorAttr_getCelebrity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFavorAttr_getCelebrity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFavorAttr_getCelebrity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFavorAttr_getGane_Statics
	{
		struct FavorAttr_eventgetGane_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFavorAttr_getGane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FavorAttr_eventgetGane_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFavorAttr_getGane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFavorAttr_getGane_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFavorAttr_getGane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "FavorAttr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFavorAttr_getGane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFavorAttr, nullptr, "getGane", nullptr, nullptr, sizeof(FavorAttr_eventgetGane_Parms), Z_Construct_UFunction_UFavorAttr_getGane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFavorAttr_getGane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFavorAttr_getGane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFavorAttr_getGane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFavorAttr_getGane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFavorAttr_getGane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFavorAttr_getPolitician_Statics
	{
		struct FavorAttr_eventgetPolitician_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFavorAttr_getPolitician_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FavorAttr_eventgetPolitician_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFavorAttr_getPolitician_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFavorAttr_getPolitician_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFavorAttr_getPolitician_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "FavorAttr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFavorAttr_getPolitician_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFavorAttr, nullptr, "getPolitician", nullptr, nullptr, sizeof(FavorAttr_eventgetPolitician_Parms), Z_Construct_UFunction_UFavorAttr_getPolitician_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFavorAttr_getPolitician_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFavorAttr_getPolitician_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFavorAttr_getPolitician_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFavorAttr_getPolitician()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFavorAttr_getPolitician_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFavorAttr_getPress_Statics
	{
		struct FavorAttr_eventgetPress_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFavorAttr_getPress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FavorAttr_eventgetPress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFavorAttr_getPress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFavorAttr_getPress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFavorAttr_getPress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "FavorAttr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFavorAttr_getPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFavorAttr, nullptr, "getPress", nullptr, nullptr, sizeof(FavorAttr_eventgetPress_Parms), Z_Construct_UFunction_UFavorAttr_getPress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFavorAttr_getPress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFavorAttr_getPress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFavorAttr_getPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFavorAttr_getPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFavorAttr_getPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFavorAttr_NoRegister()
	{
		return UFavorAttr::StaticClass();
	}
	struct Z_Construct_UClass_UFavorAttr_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFavorAttr_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClass,
		(UObject* (*)())Z_Construct_UPackage__Script_MayorOfGreat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFavorAttr_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFavorAttr_getCelebrity, "getCelebrity" }, // 1534282182
		{ &Z_Construct_UFunction_UFavorAttr_getGane, "getGane" }, // 2042931854
		{ &Z_Construct_UFunction_UFavorAttr_getPolitician, "getPolitician" }, // 3924354625
		{ &Z_Construct_UFunction_UFavorAttr_getPress, "getPress" }, // 38384335
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFavorAttr_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FavorAttr.h" },
		{ "ModuleRelativePath", "FavorAttr.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFavorAttr_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFavorAttr>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFavorAttr_Statics::ClassParams = {
		&UFavorAttr::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFavorAttr_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFavorAttr_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFavorAttr()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFavorAttr_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFavorAttr, 1905938553);
	template<> MAYOROFGREAT_API UClass* StaticClass<UFavorAttr>()
	{
		return UFavorAttr::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFavorAttr(Z_Construct_UClass_UFavorAttr, &UFavorAttr::StaticClass, TEXT("/Script/MayorOfGreat"), TEXT("UFavorAttr"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFavorAttr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
