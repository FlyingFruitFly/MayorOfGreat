// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MayorOfGreat/GameRules.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameRules() {}
// Cross Module References
	MAYOROFGREAT_API UClass* Z_Construct_UClass_AGameRules_NoRegister();
	MAYOROFGREAT_API UClass* Z_Construct_UClass_AGameRules();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MayorOfGreat();
// End Cross Module References
	void AGameRules::StaticRegisterNativesAGameRules()
	{
	}
	UClass* Z_Construct_UClass_AGameRules_NoRegister()
	{
		return AGameRules::StaticClass();
	}
	struct Z_Construct_UClass_AGameRules_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameRules_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MayorOfGreat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameRules_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "GameRules.h" },
		{ "ModuleRelativePath", "GameRules.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameRules_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameRules>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameRules_Statics::ClassParams = {
		&AGameRules::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameRules_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameRules_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameRules()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameRules_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameRules, 336908670);
	template<> MAYOROFGREAT_API UClass* StaticClass<AGameRules>()
	{
		return AGameRules::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameRules(Z_Construct_UClass_AGameRules, &AGameRules::StaticClass, TEXT("/Script/MayorOfGreat"), TEXT("AGameRules"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameRules);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
