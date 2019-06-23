// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Luiz9/Luiz9PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuiz9PlayerController() {}
// Cross Module References
	LUIZ9_API UClass* Z_Construct_UClass_ALuiz9PlayerController_NoRegister();
	LUIZ9_API UClass* Z_Construct_UClass_ALuiz9PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Luiz9();
// End Cross Module References
	void ALuiz9PlayerController::StaticRegisterNativesALuiz9PlayerController()
	{
	}
	UClass* Z_Construct_UClass_ALuiz9PlayerController_NoRegister()
	{
		return ALuiz9PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALuiz9PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALuiz9PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Luiz9,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuiz9PlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Luiz9PlayerController.h" },
		{ "ModuleRelativePath", "Luiz9PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALuiz9PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALuiz9PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALuiz9PlayerController_Statics::ClassParams = {
		&ALuiz9PlayerController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002A4u,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALuiz9PlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALuiz9PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALuiz9PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALuiz9PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuiz9PlayerController, 3121375737);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuiz9PlayerController(Z_Construct_UClass_ALuiz9PlayerController, &ALuiz9PlayerController::StaticClass, TEXT("/Script/Luiz9"), TEXT("ALuiz9PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuiz9PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
