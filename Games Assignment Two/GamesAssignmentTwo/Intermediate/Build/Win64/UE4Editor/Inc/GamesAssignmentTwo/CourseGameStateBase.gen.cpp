// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamesAssignmentTwo/CourseGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCourseGameStateBase() {}
// Cross Module References
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_ACourseGameStateBase_NoRegister();
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_ACourseGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_GamesAssignmentTwo();
// End Cross Module References
	DEFINE_FUNCTION(ACourseGameStateBase::execOnRep_TotalPlayersOverFinishLine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TotalPlayersOverFinishLine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACourseGameStateBase::execReturnPlayersFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ReturnPlayersFinished();
		P_NATIVE_END;
	}
	void ACourseGameStateBase::StaticRegisterNativesACourseGameStateBase()
	{
		UClass* Class = ACourseGameStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_TotalPlayersOverFinishLine", &ACourseGameStateBase::execOnRep_TotalPlayersOverFinishLine },
			{ "ReturnPlayersFinished", &ACourseGameStateBase::execReturnPlayersFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACourseGameStateBase_OnRep_TotalPlayersOverFinishLine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACourseGameStateBase_OnRep_TotalPlayersOverFinishLine_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when the PlayersOverFinishLine variable is changed\n" },
		{ "ModuleRelativePath", "CourseGameStateBase.h" },
		{ "ToolTip", "Called when the PlayersOverFinishLine variable is changed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACourseGameStateBase_OnRep_TotalPlayersOverFinishLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACourseGameStateBase, nullptr, "OnRep_TotalPlayersOverFinishLine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACourseGameStateBase_OnRep_TotalPlayersOverFinishLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACourseGameStateBase_OnRep_TotalPlayersOverFinishLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACourseGameStateBase_OnRep_TotalPlayersOverFinishLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACourseGameStateBase_OnRep_TotalPlayersOverFinishLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACourseGameStateBase_ReturnPlayersFinished_Statics
	{
		struct CourseGameStateBase_eventReturnPlayersFinished_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACourseGameStateBase_ReturnPlayersFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CourseGameStateBase_eventReturnPlayersFinished_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACourseGameStateBase_ReturnPlayersFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACourseGameStateBase_ReturnPlayersFinished_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACourseGameStateBase_ReturnPlayersFinished_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//return the amount of players currently over the finih line\n" },
		{ "ModuleRelativePath", "CourseGameStateBase.h" },
		{ "ToolTip", "return the amount of players currently over the finih line" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACourseGameStateBase_ReturnPlayersFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACourseGameStateBase, nullptr, "ReturnPlayersFinished", nullptr, nullptr, sizeof(CourseGameStateBase_eventReturnPlayersFinished_Parms), Z_Construct_UFunction_ACourseGameStateBase_ReturnPlayersFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACourseGameStateBase_ReturnPlayersFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACourseGameStateBase_ReturnPlayersFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACourseGameStateBase_ReturnPlayersFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACourseGameStateBase_ReturnPlayersFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACourseGameStateBase_ReturnPlayersFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACourseGameStateBase_NoRegister()
	{
		return ACourseGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_ACourseGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersOverFinishLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayersOverFinishLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACourseGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GamesAssignmentTwo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACourseGameStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACourseGameStateBase_OnRep_TotalPlayersOverFinishLine, "OnRep_TotalPlayersOverFinishLine" }, // 1553035651
		{ &Z_Construct_UFunction_ACourseGameStateBase_ReturnPlayersFinished, "ReturnPlayersFinished" }, // 2268503016
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACourseGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CourseGameStateBase.h" },
		{ "ModuleRelativePath", "CourseGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACourseGameStateBase_Statics::NewProp_PlayersOverFinishLine_MetaData[] = {
		{ "Comment", "//current amount of players over the finish line\n//Replicated to all players \n" },
		{ "ModuleRelativePath", "CourseGameStateBase.h" },
		{ "ToolTip", "current amount of players over the finish line\nReplicated to all players" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACourseGameStateBase_Statics::NewProp_PlayersOverFinishLine = { "PlayersOverFinishLine", "OnRep_TotalPlayersOverFinishLine", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACourseGameStateBase, PlayersOverFinishLine), METADATA_PARAMS(Z_Construct_UClass_ACourseGameStateBase_Statics::NewProp_PlayersOverFinishLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACourseGameStateBase_Statics::NewProp_PlayersOverFinishLine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACourseGameStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACourseGameStateBase_Statics::NewProp_PlayersOverFinishLine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACourseGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACourseGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACourseGameStateBase_Statics::ClassParams = {
		&ACourseGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACourseGameStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACourseGameStateBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACourseGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACourseGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACourseGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACourseGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACourseGameStateBase, 180371508);
	template<> GAMESASSIGNMENTTWO_API UClass* StaticClass<ACourseGameStateBase>()
	{
		return ACourseGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACourseGameStateBase(Z_Construct_UClass_ACourseGameStateBase, &ACourseGameStateBase::StaticClass, TEXT("/Script/GamesAssignmentTwo"), TEXT("ACourseGameStateBase"), false, nullptr, nullptr, nullptr);

	void ACourseGameStateBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PlayersOverFinishLine(TEXT("PlayersOverFinishLine"));

		const bool bIsValid = true
			&& Name_PlayersOverFinishLine == ClassReps[(int32)ENetFields_Private::PlayersOverFinishLine].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACourseGameStateBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACourseGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
