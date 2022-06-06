// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MayorOfGreat/PlayerAttr.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAttr() {}
// Cross Module References
	MAYOROFGREAT_API UClass* Z_Construct_UClass_UPlayerAttr_NoRegister();
	MAYOROFGREAT_API UClass* Z_Construct_UClass_UPlayerAttr();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_MayorOfGreat();
	MAYOROFGREAT_API UClass* Z_Construct_UClass_UFavorAttr_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MAYOROFGREAT_API UClass* Z_Construct_UClass_USupportAttr_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerAttr::execgetFavor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->getFavor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAttr::execgetSupport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->getSupport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAttr::execgetExpress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getExpress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAttr::execgetPoliticalTendency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getPoliticalTendency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAttr::execgetWealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getWealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerAttr::execgetCharm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getCharm();
		P_NATIVE_END;
	}
	void UPlayerAttr::StaticRegisterNativesUPlayerAttr()
	{
		UClass* Class = UPlayerAttr::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getCharm", &UPlayerAttr::execgetCharm },
			{ "getExpress", &UPlayerAttr::execgetExpress },
			{ "getFavor", &UPlayerAttr::execgetFavor },
			{ "getPoliticalTendency", &UPlayerAttr::execgetPoliticalTendency },
			{ "getSupport", &UPlayerAttr::execgetSupport },
			{ "getWealth", &UPlayerAttr::execgetWealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerAttr_getCharm_Statics
	{
		struct PlayerAttr_eventgetCharm_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerAttr_getCharm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAttr_eventgetCharm_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttr_getCharm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttr_getCharm_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAttr_getCharm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "PlayerAttr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttr_getCharm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttr, nullptr, "getCharm", nullptr, nullptr, sizeof(PlayerAttr_eventgetCharm_Parms), Z_Construct_UFunction_UPlayerAttr_getCharm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttr_getCharm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAttr_getCharm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttr_getCharm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAttr_getCharm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAttr_getCharm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAttr_getExpress_Statics
	{
		struct PlayerAttr_eventgetExpress_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerAttr_getExpress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAttr_eventgetExpress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttr_getExpress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttr_getExpress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAttr_getExpress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "PlayerAttr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttr_getExpress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttr, nullptr, "getExpress", nullptr, nullptr, sizeof(PlayerAttr_eventgetExpress_Parms), Z_Construct_UFunction_UPlayerAttr_getExpress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttr_getExpress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAttr_getExpress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttr_getExpress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAttr_getExpress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAttr_getExpress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAttr_getFavor_Statics
	{
		struct PlayerAttr_eventgetFavor_Parms
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPlayerAttr_getFavor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAttr_eventgetFavor_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UFavorAttr_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttr_getFavor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttr_getFavor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAttr_getFavor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "PlayerAttr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttr_getFavor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttr, nullptr, "getFavor", nullptr, nullptr, sizeof(PlayerAttr_eventgetFavor_Parms), Z_Construct_UFunction_UPlayerAttr_getFavor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttr_getFavor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAttr_getFavor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttr_getFavor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAttr_getFavor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAttr_getFavor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAttr_getPoliticalTendency_Statics
	{
		struct PlayerAttr_eventgetPoliticalTendency_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerAttr_getPoliticalTendency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAttr_eventgetPoliticalTendency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttr_getPoliticalTendency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttr_getPoliticalTendency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAttr_getPoliticalTendency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "PlayerAttr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttr_getPoliticalTendency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttr, nullptr, "getPoliticalTendency", nullptr, nullptr, sizeof(PlayerAttr_eventgetPoliticalTendency_Parms), Z_Construct_UFunction_UPlayerAttr_getPoliticalTendency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttr_getPoliticalTendency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAttr_getPoliticalTendency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttr_getPoliticalTendency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAttr_getPoliticalTendency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAttr_getPoliticalTendency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAttr_getSupport_Statics
	{
		struct PlayerAttr_eventgetSupport_Parms
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPlayerAttr_getSupport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAttr_eventgetSupport_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_USupportAttr_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttr_getSupport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttr_getSupport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAttr_getSupport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "PlayerAttr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttr_getSupport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttr, nullptr, "getSupport", nullptr, nullptr, sizeof(PlayerAttr_eventgetSupport_Parms), Z_Construct_UFunction_UPlayerAttr_getSupport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttr_getSupport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAttr_getSupport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttr_getSupport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAttr_getSupport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAttr_getSupport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerAttr_getWealth_Statics
	{
		struct PlayerAttr_eventgetWealth_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerAttr_getWealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAttr_eventgetWealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttr_getWealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttr_getWealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerAttr_getWealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "PlayerAttr.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttr_getWealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAttr, nullptr, "getWealth", nullptr, nullptr, sizeof(PlayerAttr_eventgetWealth_Parms), Z_Construct_UFunction_UPlayerAttr_getWealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttr_getWealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerAttr_getWealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttr_getWealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerAttr_getWealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerAttr_getWealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerAttr_NoRegister()
	{
		return UPlayerAttr::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAttr_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAttr_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClass,
		(UObject* (*)())Z_Construct_UPackage__Script_MayorOfGreat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerAttr_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAttr_getCharm, "getCharm" }, // 1614538230
		{ &Z_Construct_UFunction_UPlayerAttr_getExpress, "getExpress" }, // 457364281
		{ &Z_Construct_UFunction_UPlayerAttr_getFavor, "getFavor" }, // 1843351359
		{ &Z_Construct_UFunction_UPlayerAttr_getPoliticalTendency, "getPoliticalTendency" }, // 3431891480
		{ &Z_Construct_UFunction_UPlayerAttr_getSupport, "getSupport" }, // 500255077
		{ &Z_Construct_UFunction_UPlayerAttr_getWealth, "getWealth" }, // 483156996
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAttr_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerAttr.h" },
		{ "ModuleRelativePath", "PlayerAttr.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAttr_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAttr>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAttr_Statics::ClassParams = {
		&UPlayerAttr::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAttr_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttr_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAttr()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerAttr_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerAttr, 4083215930);
	template<> MAYOROFGREAT_API UClass* StaticClass<UPlayerAttr>()
	{
		return UPlayerAttr::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerAttr(Z_Construct_UClass_UPlayerAttr, &UPlayerAttr::StaticClass, TEXT("/Script/MayorOfGreat"), TEXT("UPlayerAttr"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAttr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
