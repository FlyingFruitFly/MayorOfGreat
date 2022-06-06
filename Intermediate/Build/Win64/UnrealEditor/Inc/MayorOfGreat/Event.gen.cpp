// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MayorOfGreat/Event.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEvent() {}
// Cross Module References
	MAYOROFGREAT_API UClass* Z_Construct_UClass_UEvent_NoRegister();
	MAYOROFGREAT_API UClass* Z_Construct_UClass_UEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_MayorOfGreat();
	MAYOROFGREAT_API UClass* Z_Construct_UClass_UEventOption_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEvent::execgetTalker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->getTalker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvent::execgetOptionC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->getOptionC();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvent::execgetOptionB)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->getOptionB();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvent::execgetOptionA)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->getOptionA();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvent::execgetDescribe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->getDescribe();
		P_NATIVE_END;
	}
	void UEvent::StaticRegisterNativesUEvent()
	{
		UClass* Class = UEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getDescribe", &UEvent::execgetDescribe },
			{ "getOptionA", &UEvent::execgetOptionA },
			{ "getOptionB", &UEvent::execgetOptionB },
			{ "getOptionC", &UEvent::execgetOptionC },
			{ "getTalker", &UEvent::execgetTalker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEvent_getDescribe_Statics
	{
		struct Event_eventgetDescribe_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEvent_getDescribe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Event_eventgetDescribe_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvent_getDescribe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvent_getDescribe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvent_getDescribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Event.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvent_getDescribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvent, nullptr, "getDescribe", nullptr, nullptr, sizeof(Event_eventgetDescribe_Parms), Z_Construct_UFunction_UEvent_getDescribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvent_getDescribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvent_getDescribe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvent_getDescribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvent_getDescribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvent_getDescribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvent_getOptionA_Statics
	{
		struct Event_eventgetOptionA_Parms
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEvent_getOptionA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Event_eventgetOptionA_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UEventOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvent_getOptionA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvent_getOptionA_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvent_getOptionA_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Event.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvent_getOptionA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvent, nullptr, "getOptionA", nullptr, nullptr, sizeof(Event_eventgetOptionA_Parms), Z_Construct_UFunction_UEvent_getOptionA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvent_getOptionA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvent_getOptionA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvent_getOptionA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvent_getOptionA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvent_getOptionA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvent_getOptionB_Statics
	{
		struct Event_eventgetOptionB_Parms
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEvent_getOptionB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Event_eventgetOptionB_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UEventOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvent_getOptionB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvent_getOptionB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvent_getOptionB_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Event.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvent_getOptionB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvent, nullptr, "getOptionB", nullptr, nullptr, sizeof(Event_eventgetOptionB_Parms), Z_Construct_UFunction_UEvent_getOptionB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvent_getOptionB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvent_getOptionB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvent_getOptionB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvent_getOptionB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvent_getOptionB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvent_getOptionC_Statics
	{
		struct Event_eventgetOptionC_Parms
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEvent_getOptionC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Event_eventgetOptionC_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UEventOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvent_getOptionC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvent_getOptionC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvent_getOptionC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Event.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvent_getOptionC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvent, nullptr, "getOptionC", nullptr, nullptr, sizeof(Event_eventgetOptionC_Parms), Z_Construct_UFunction_UEvent_getOptionC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvent_getOptionC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvent_getOptionC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvent_getOptionC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvent_getOptionC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvent_getOptionC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvent_getTalker_Statics
	{
		struct Event_eventgetTalker_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEvent_getTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Event_eventgetTalker_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvent_getTalker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvent_getTalker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvent_getTalker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Event.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvent_getTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvent, nullptr, "getTalker", nullptr, nullptr, sizeof(Event_eventgetTalker_Parms), Z_Construct_UFunction_UEvent_getTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvent_getTalker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvent_getTalker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvent_getTalker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvent_getTalker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvent_getTalker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEvent_NoRegister()
	{
		return UEvent::StaticClass();
	}
	struct Z_Construct_UClass_UEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClass,
		(UObject* (*)())Z_Construct_UPackage__Script_MayorOfGreat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEvent_getDescribe, "getDescribe" }, // 861677436
		{ &Z_Construct_UFunction_UEvent_getOptionA, "getOptionA" }, // 993010916
		{ &Z_Construct_UFunction_UEvent_getOptionB, "getOptionB" }, // 1748391216
		{ &Z_Construct_UFunction_UEvent_getOptionC, "getOptionC" }, // 2793292420
		{ &Z_Construct_UFunction_UEvent_getTalker, "getTalker" }, // 2050447412
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Event.h" },
		{ "ModuleRelativePath", "Event.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEvent_Statics::ClassParams = {
		&UEvent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEvent, 423456055);
	template<> MAYOROFGREAT_API UClass* StaticClass<UEvent>()
	{
		return UEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEvent(Z_Construct_UClass_UEvent, &UEvent::StaticClass, TEXT("/Script/MayorOfGreat"), TEXT("UEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
