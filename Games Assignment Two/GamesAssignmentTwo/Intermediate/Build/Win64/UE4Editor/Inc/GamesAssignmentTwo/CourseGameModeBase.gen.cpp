// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamesAssignmentTwo/CourseGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCourseGameModeBase() {}
// Cross Module References
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_ACourseGameModeBase_NoRegister();
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_ACourseGameModeBase();
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_AGamesAssignmentTwoGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GamesAssignmentTwo();
// End Cross Module References
	void ACourseGameModeBase::StaticRegisterNativesACourseGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACourseGameModeBase_NoRegister()
	{
		return ACourseGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACourseGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACourseGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGamesAssignmentTwoGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GamesAssignmentTwo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACourseGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CourseGameModeBase.h" },
		{ "ModuleRelativePath", "CourseGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACourseGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACourseGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACourseGameModeBase_Statics::ClassParams = {
		&ACourseGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACourseGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACourseGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACourseGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACourseGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACourseGameModeBase, 4065196638);
	template<> GAMESASSIGNMENTTWO_API UClass* StaticClass<ACourseGameModeBase>()
	{
		return ACourseGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACourseGameModeBase(Z_Construct_UClass_ACourseGameModeBase, &ACourseGameModeBase::StaticClass, TEXT("/Script/GamesAssignmentTwo"), TEXT("ACourseGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACourseGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
