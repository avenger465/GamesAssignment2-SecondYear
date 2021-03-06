// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamesAssignmentTwo/GamesAssignmentTwoGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamesAssignmentTwoGameModeBase() {}
// Cross Module References
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_NoRegister();
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_AGamesAssignmentTwoGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GamesAssignmentTwo();
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_UCustomGameInstance_NoRegister();
// End Cross Module References
	void AGamesAssignmentTwoGameModeBase::StaticRegisterNativesAGamesAssignmentTwoGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_NoRegister()
	{
		return AGamesAssignmentTwoGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstanceRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstanceRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GamesAssignmentTwo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GamesAssignmentTwoGameModeBase.h" },
		{ "ModuleRelativePath", "GamesAssignmentTwoGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_Statics::NewProp_GameInstanceRef_MetaData[] = {
		{ "Comment", "//reference to the Game Instance\n" },
		{ "ModuleRelativePath", "GamesAssignmentTwoGameModeBase.h" },
		{ "ToolTip", "reference to the Game Instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_Statics::NewProp_GameInstanceRef = { "GameInstanceRef", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamesAssignmentTwoGameModeBase, GameInstanceRef), Z_Construct_UClass_UCustomGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_Statics::NewProp_GameInstanceRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_Statics::NewProp_GameInstanceRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_Statics::NewProp_GameInstanceRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGamesAssignmentTwoGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_Statics::ClassParams = {
		&AGamesAssignmentTwoGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGamesAssignmentTwoGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGamesAssignmentTwoGameModeBase, 936181414);
	template<> GAMESASSIGNMENTTWO_API UClass* StaticClass<AGamesAssignmentTwoGameModeBase>()
	{
		return AGamesAssignmentTwoGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGamesAssignmentTwoGameModeBase(Z_Construct_UClass_AGamesAssignmentTwoGameModeBase, &AGamesAssignmentTwoGameModeBase::StaticClass, TEXT("/Script/GamesAssignmentTwo"), TEXT("AGamesAssignmentTwoGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGamesAssignmentTwoGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
