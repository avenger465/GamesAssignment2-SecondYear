// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamesAssignmentTwo/SpinningBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpinningBar() {}
// Cross Module References
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_ASpinningBar_NoRegister();
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_ASpinningBar();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GamesAssignmentTwo();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASpinningBar::StaticRegisterNativesASpinningBar()
	{
	}
	UClass* Z_Construct_UClass_ASpinningBar_NoRegister()
	{
		return ASpinningBar::StaticClass();
	}
	struct Z_Construct_UClass_ASpinningBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpinningBarMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpinningBarMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpinningBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GamesAssignmentTwo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpinningBar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpinningBar.h" },
		{ "ModuleRelativePath", "SpinningBar.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpinningBar_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "SpinningBar" },
		{ "ModuleRelativePath", "SpinningBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpinningBar_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0040000000000021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpinningBar, RotationRate), METADATA_PARAMS(Z_Construct_UClass_ASpinningBar_Statics::NewProp_RotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpinningBar_Statics::NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpinningBar_Statics::NewProp_SpinningBarMesh_MetaData[] = {
		{ "Category", "SpinningBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpinningBar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpinningBar_Statics::NewProp_SpinningBarMesh = { "SpinningBarMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpinningBar, SpinningBarMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpinningBar_Statics::NewProp_SpinningBarMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpinningBar_Statics::NewProp_SpinningBarMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpinningBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpinningBar_Statics::NewProp_RotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpinningBar_Statics::NewProp_SpinningBarMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpinningBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpinningBar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpinningBar_Statics::ClassParams = {
		&ASpinningBar::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpinningBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpinningBar_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpinningBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpinningBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpinningBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpinningBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpinningBar, 3394765754);
	template<> GAMESASSIGNMENTTWO_API UClass* StaticClass<ASpinningBar>()
	{
		return ASpinningBar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpinningBar(Z_Construct_UClass_ASpinningBar, &ASpinningBar::StaticClass, TEXT("/Script/GamesAssignmentTwo"), TEXT("ASpinningBar"), false, nullptr, nullptr, nullptr);

	void ASpinningBar::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RotationRate(TEXT("RotationRate"));

		const bool bIsValid = true
			&& Name_RotationRate == ClassReps[(int32)ENetFields_Private::RotationRate].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASpinningBar"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpinningBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
