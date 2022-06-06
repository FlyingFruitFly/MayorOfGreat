// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MayorOfGreat/EventManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventManager() {}
// Cross Module References
	MAYOROFGREAT_API UClass* Z_Construct_UClass_UEventManager_NoRegister();
	MAYOROFGREAT_API UClass* Z_Construct_UClass_UEventManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_MayorOfGreat();
	MAYOROFGREAT_API UClass* Z_Construct_UClass_UEvent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEventManager::execmakeChoice)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->makeChoice(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEventManager::execgetChosenEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->getChosenEvent();
		P_NATIVE_END;
	}
	void UEventManager::StaticRegisterNativesUEventManager()
	{
		UClass* Class = UEventManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getChosenEvent", &UEventManager::execgetChosenEvent },
			{ "makeChoice", &UEventManager::execmakeChoice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventManager_getChosenEvent_Statics
	{
		struct EventManager_eventgetChosenEvent_Parms
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEventManager_getChosenEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventManager_eventgetChosenEvent_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventManager_getChosenEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventManager_getChosenEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventManager_getChosenEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "EventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventManager_getChosenEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventManager, nullptr, "getChosenEvent", nullptr, nullptr, sizeof(EventManager_eventgetChosenEvent_Parms), Z_Construct_UFunction_UEventManager_getChosenEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventManager_getChosenEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventManager_getChosenEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventManager_getChosenEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventManager_getChosenEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventManager_getChosenEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEventManager_makeChoice_Statics
	{
		struct EventManager_eventmakeChoice_Parms
		{
			int32 index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEventManager_makeChoice_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventManager_eventmakeChoice_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventManager_makeChoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventManager_makeChoice_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventManager_makeChoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "EventManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventManager_makeChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventManager, nullptr, "makeChoice", nullptr, nullptr, sizeof(EventManager_eventmakeChoice_Parms), Z_Construct_UFunction_UEventManager_makeChoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventManager_makeChoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventManager_makeChoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventManager_makeChoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventManager_makeChoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventManager_makeChoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventManager_NoRegister()
	{
		return UEventManager::StaticClass();
	}
	struct Z_Construct_UClass_UEventManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClass,
		(UObject* (*)())Z_Construct_UPackage__Script_MayorOfGreat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventManager_getChosenEvent, "getChosenEvent" }, // 381972833
		{ &Z_Construct_UFunction_UEventManager_makeChoice, "makeChoice" }, // 976119041
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventManager.h" },
		{ "ModuleRelativePath", "EventManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEventManager_Statics::ClassParams = {
		&UEventManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEventManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventManager, 3369936152);
	template<> MAYOROFGREAT_API UClass* StaticClass<UEventManager>()
	{
		return UEventManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventManager(Z_Construct_UClass_UEventManager, &UEventManager::StaticClass, TEXT("/Script/MayorOfGreat"), TEXT("UEventManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
