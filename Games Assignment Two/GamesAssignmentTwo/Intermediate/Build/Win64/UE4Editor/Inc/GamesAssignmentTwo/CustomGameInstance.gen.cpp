// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamesAssignmentTwo/CustomGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomGameInstance() {}
// Cross Module References
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_UCustomGameInstance_NoRegister();
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_UCustomGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_GamesAssignmentTwo();
// End Cross Module References
	DEFINE_FUNCTION(UCustomGameInstance::execWarp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Warp();
		P_NATIVE_END;
	}
	void UCustomGameInstance::StaticRegisterNativesUCustomGameInstance()
	{
		UClass* Class = UCustomGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Warp", &UCustomGameInstance::execWarp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomGameInstance_Warp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGameInstance_Warp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CustomGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameInstance_Warp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGameInstance, nullptr, "Warp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomGameInstance_Warp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameInstance_Warp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomGameInstance_Warp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomGameInstance_Warp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomGameInstance_NoRegister()
	{
		return UCustomGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCustomGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_GamesAssignmentTwo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomGameInstance_Warp, "Warp" }, // 2870963674
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomGameInstance.h" },
		{ "ModuleRelativePath", "CustomGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomGameInstance_Statics::ClassParams = {
		&UCustomGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomGameInstance, 241659640);
	template<> GAMESASSIGNMENTTWO_API UClass* StaticClass<UCustomGameInstance>()
	{
		return UCustomGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomGameInstance(Z_Construct_UClass_UCustomGameInstance, &UCustomGameInstance::StaticClass, TEXT("/Script/GamesAssignmentTwo"), TEXT("UCustomGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
