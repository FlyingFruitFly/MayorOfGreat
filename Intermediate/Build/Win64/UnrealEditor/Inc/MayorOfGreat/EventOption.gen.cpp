// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MayorOfGreat/EventOption.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventOption() {}
// Cross Module References
	MAYOROFGREAT_API UClass* Z_Construct_UClass_UEventOption_NoRegister();
	MAYOROFGREAT_API UClass* Z_Construct_UClass_UEventOption();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_MayorOfGreat();
// End Cross Module References
	DEFINE_FUNCTION(UEventOption::execgetDescribe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->getDescribe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventOption::execgetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->getName();
		P_NATIVE_END;
	}
	void UEventOption::StaticRegisterNativesUEventOption()
	{
		UClass* Class = UEventOption::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getDescribe", &UEventOption::execgetDescribe },
			{ "getName", &UEventOption::execgetName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventOption_getDescribe_Statics
	{
		struct EventOption_eventgetDescribe_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEventOption_getDescribe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventOption_eventgetDescribe_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventOption_getDescribe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventOption_getDescribe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventOption_getDescribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "EventOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventOption_getDescribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventOption, nullptr, "getDescribe", nullptr, nullptr, sizeof(EventOption_eventgetDescribe_Parms), Z_Construct_UFunction_UEventOption_getDescribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventOption_getDescribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventOption_getDescribe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventOption_getDescribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventOption_getDescribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventOption_getDescribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventOption_getName_Statics
	{
		struct EventOption_eventgetName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEventOption_getName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventOption_eventgetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventOption_getName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventOption_getName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventOption_getName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "EventOption.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventOption_getName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventOption, nullptr, "getName", nullptr, nullptr, sizeof(EventOption_eventgetName_Parms), Z_Construct_UFunction_UEventOption_getName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventOption_getName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventOption_getName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventOption_getName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventOption_getName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventOption_getName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventOption_NoRegister()
	{
		return UEventOption::StaticClass();
	}
	struct Z_Construct_UClass_UEventOption_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventOption_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClass,
		(UObject* (*)())Z_Construct_UPackage__Script_MayorOfGreat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventOption_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventOption_getDescribe, "getDescribe" }, // 2668008359
		{ &Z_Construct_UFunction_UEventOption_getName, "getName" }, // 4081142552
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventOption_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventOption.h" },
		{ "ModuleRelativePath", "EventOption.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventOption_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventOption>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEventOption_Statics::ClassParams = {
		&UEventOption::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEventOption_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventOption_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventOption()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventOption_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventOption, 3997061389);
	template<> MAYOROFGREAT_API UClass* StaticClass<UEventOption>()
	{
		return UEventOption::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventOption(Z_Construct_UClass_UEventOption, &UEventOption::StaticClass, TEXT("/Script/MayorOfGreat"), TEXT("UEventOption"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventOption);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
