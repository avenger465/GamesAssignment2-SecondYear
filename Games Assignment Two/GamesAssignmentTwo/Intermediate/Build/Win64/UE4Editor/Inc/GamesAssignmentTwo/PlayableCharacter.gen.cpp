// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamesAssignmentTwo/PlayableCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayableCharacter() {}
// Cross Module References
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_APlayableCharacter_NoRegister();
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_APlayableCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GamesAssignmentTwo();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayableCharacter::execRPCServerPush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->RPCServerPush_Validate())
		{
			RPC_ValidateFailed(TEXT("RPCServerPush_Validate"));
			return;
		}
		P_THIS->RPCServerPush_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayableCharacter::execRPCServerDive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->RPCServerDive_Validate())
		{
			RPC_ValidateFailed(TEXT("RPCServerDive_Validate"));
			return;
		}
		P_THIS->RPCServerDive_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayableCharacter::execRPCVictorySound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPCVictorySound_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_APlayableCharacter_RPCServerDive = FName(TEXT("RPCServerDive"));
	void APlayableCharacter::RPCServerDive()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayableCharacter_RPCServerDive),NULL);
	}
	static FName NAME_APlayableCharacter_RPCServerPush = FName(TEXT("RPCServerPush"));
	void APlayableCharacter::RPCServerPush()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayableCharacter_RPCServerPush),NULL);
	}
	static FName NAME_APlayableCharacter_RPCVictorySound = FName(TEXT("RPCVictorySound"));
	void APlayableCharacter::RPCVictorySound()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayableCharacter_RPCVictorySound),NULL);
	}
	void APlayableCharacter::StaticRegisterNativesAPlayableCharacter()
	{
		UClass* Class = APlayableCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RPCServerDive", &APlayableCharacter::execRPCServerDive },
			{ "RPCServerPush", &APlayableCharacter::execRPCServerPush },
			{ "RPCVictorySound", &APlayableCharacter::execRPCVictorySound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayableCharacter_RPCServerDive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayableCharacter_RPCServerDive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayableCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayableCharacter_RPCServerDive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayableCharacter, nullptr, "RPCServerDive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayableCharacter_RPCServerDive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableCharacter_RPCServerDive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayableCharacter_RPCServerDive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayableCharacter_RPCServerDive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayableCharacter_RPCServerPush_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayableCharacter_RPCServerPush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayableCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayableCharacter_RPCServerPush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayableCharacter, nullptr, "RPCServerPush", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayableCharacter_RPCServerPush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableCharacter_RPCServerPush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayableCharacter_RPCServerPush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayableCharacter_RPCServerPush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayableCharacter_RPCVictorySound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayableCharacter_RPCVictorySound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayableCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayableCharacter_RPCVictorySound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayableCharacter, nullptr, "RPCVictorySound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayableCharacter_RPCVictorySound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayableCharacter_RPCVictorySound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayableCharacter_RPCVictorySound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayableCharacter_RPCVictorySound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayableCharacter_NoRegister()
	{
		return APlayableCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APlayableCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RespawnPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RespawnPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VictorySound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VictorySound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPassedCheckpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bPassedCheckpoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numberOfCheckpoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numberOfCheckpoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentCheckpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentCheckpoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayableCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GamesAssignmentTwo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayableCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayableCharacter_RPCServerDive, "RPCServerDive" }, // 3370758669
		{ &Z_Construct_UFunction_APlayableCharacter_RPCServerPush, "RPCServerPush" }, // 2674004371
		{ &Z_Construct_UFunction_APlayableCharacter_RPCVictorySound, "RPCVictorySound" }, // 3346849441
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayableCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayableCharacter.h" },
		{ "ModuleRelativePath", "PlayableCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayableCharacter_Statics::NewProp_OwnerController_MetaData[] = {
		{ "ModuleRelativePath", "PlayableCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayableCharacter_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayableCharacter, OwnerController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_OwnerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_OwnerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayableCharacter_Statics::NewProp_RespawnPoints_MetaData[] = {
		{ "ModuleRelativePath", "PlayableCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayableCharacter_Statics::NewProp_RespawnPoints = { "RespawnPoints", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayableCharacter, RespawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_RespawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_RespawnPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayableCharacter_Statics::NewProp_RespawnPoints_Inner = { "RespawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayableCharacter_Statics::NewProp_SpringArmLength_MetaData[] = {
		{ "Category", "PlayableCharacter" },
		{ "ModuleRelativePath", "PlayableCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayableCharacter_Statics::NewProp_SpringArmLength = { "SpringArmLength", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayableCharacter, SpringArmLength), METADATA_PARAMS(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_SpringArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_SpringArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayableCharacter_Statics::NewProp_VictorySound_MetaData[] = {
		{ "Category", "PlayableCharacter" },
		{ "ModuleRelativePath", "PlayableCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayableCharacter_Statics::NewProp_VictorySound = { "VictorySound", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayableCharacter, VictorySound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_VictorySound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_VictorySound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayableCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "PlayableCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayableCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayableCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayableCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayableCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "PlayableCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayableCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayableCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayableCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayableCharacter_Statics::NewProp_bPassedCheckpoint_MetaData[] = {
		{ "Category", "PlayableCharacter" },
		{ "ModuleRelativePath", "PlayableCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayableCharacter_Statics::NewProp_bPassedCheckpoint = { "bPassedCheckpoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(bPassedCheckpoint, APlayableCharacter), STRUCT_OFFSET(APlayableCharacter, bPassedCheckpoint), METADATA_PARAMS(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_bPassedCheckpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_bPassedCheckpoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayableCharacter_Statics::NewProp_numberOfCheckpoints_MetaData[] = {
		{ "Category", "PlayableCharacter" },
		{ "ModuleRelativePath", "PlayableCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayableCharacter_Statics::NewProp_numberOfCheckpoints = { "numberOfCheckpoints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayableCharacter, numberOfCheckpoints), METADATA_PARAMS(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_numberOfCheckpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_numberOfCheckpoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayableCharacter_Statics::NewProp_currentCheckpoint_MetaData[] = {
		{ "Category", "PlayableCharacter" },
		{ "ModuleRelativePath", "PlayableCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlayableCharacter_Statics::NewProp_currentCheckpoint = { "currentCheckpoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayableCharacter, currentCheckpoint), METADATA_PARAMS(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_currentCheckpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayableCharacter_Statics::NewProp_currentCheckpoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayableCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayableCharacter_Statics::NewProp_OwnerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayableCharacter_Statics::NewProp_RespawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayableCharacter_Statics::NewProp_RespawnPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayableCharacter_Statics::NewProp_SpringArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayableCharacter_Statics::NewProp_VictorySound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayableCharacter_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayableCharacter_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayableCharacter_Statics::NewProp_bPassedCheckpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayableCharacter_Statics::NewProp_numberOfCheckpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayableCharacter_Statics::NewProp_currentCheckpoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayableCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayableCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayableCharacter_Statics::ClassParams = {
		&APlayableCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayableCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayableCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayableCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayableCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayableCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayableCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayableCharacter, 3735973648);
	template<> GAMESASSIGNMENTTWO_API UClass* StaticClass<APlayableCharacter>()
	{
		return APlayableCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayableCharacter(Z_Construct_UClass_APlayableCharacter, &APlayableCharacter::StaticClass, TEXT("/Script/GamesAssignmentTwo"), TEXT("APlayableCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayableCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
