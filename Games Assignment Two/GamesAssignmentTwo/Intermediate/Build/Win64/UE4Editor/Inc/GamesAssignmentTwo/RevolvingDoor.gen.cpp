// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamesAssignmentTwo/RevolvingDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRevolvingDoor() {}
// Cross Module References
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_ARevolvingDoor_NoRegister();
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_ARevolvingDoor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_GamesAssignmentTwo();
// End Cross Module References
	void ARevolvingDoor::StaticRegisterNativesARevolvingDoor()
	{
	}
	UClass* Z_Construct_UClass_ARevolvingDoor_NoRegister()
	{
		return ARevolvingDoor::StaticClass();
	}
	struct Z_Construct_UClass_ARevolvingDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARevolvingDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GamesAssignmentTwo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevolvingDoor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "RevolvingDoor.h" },
		{ "ModuleRelativePath", "RevolvingDoor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARevolvingDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARevolvingDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARevolvingDoor_Statics::ClassParams = {
		&ARevolvingDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARevolvingDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARevolvingDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARevolvingDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARevolvingDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARevolvingDoor, 3988368930);
	template<> GAMESASSIGNMENTTWO_API UClass* StaticClass<ARevolvingDoor>()
	{
		return ARevolvingDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARevolvingDoor(Z_Construct_UClass_ARevolvingDoor, &ARevolvingDoor::StaticClass, TEXT("/Script/GamesAssignmentTwo"), TEXT("ARevolvingDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARevolvingDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
