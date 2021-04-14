// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamesAssignmentTwo/PlayerInterfaceWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInterfaceWidget() {}
// Cross Module References
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_UPlayerInterfaceWidget_NoRegister();
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_UPlayerInterfaceWidget();
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_GamesAssignmentTwo();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerInterfaceWidget::execUpdateFinishedPlayersText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Players);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFinishedPlayersText(Z_Param_Players);
		P_NATIVE_END;
	}
	void UPlayerInterfaceWidget::StaticRegisterNativesUPlayerInterfaceWidget()
	{
		UClass* Class = UPlayerInterfaceWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateFinishedPlayersText", &UPlayerInterfaceWidget::execUpdateFinishedPlayersText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerInterfaceWidget_UpdateFinishedPlayersText_Statics
	{
		struct PlayerInterfaceWidget_eventUpdateFinishedPlayersText_Parms
		{
			int32 Players;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPlayerInterfaceWidget_UpdateFinishedPlayersText_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInterfaceWidget_eventUpdateFinishedPlayersText_Parms, Players), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInterfaceWidget_UpdateFinishedPlayersText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInterfaceWidget_UpdateFinishedPlayersText_Statics::NewProp_Players,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInterfaceWidget_UpdateFinishedPlayersText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerInterfaceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInterfaceWidget_UpdateFinishedPlayersText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInterfaceWidget, nullptr, "UpdateFinishedPlayersText", nullptr, nullptr, sizeof(PlayerInterfaceWidget_eventUpdateFinishedPlayersText_Parms), Z_Construct_UFunction_UPlayerInterfaceWidget_UpdateFinishedPlayersText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterfaceWidget_UpdateFinishedPlayersText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInterfaceWidget_UpdateFinishedPlayersText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInterfaceWidget_UpdateFinishedPlayersText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInterfaceWidget_UpdateFinishedPlayersText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInterfaceWidget_UpdateFinishedPlayersText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerInterfaceWidget_NoRegister()
	{
		return UPlayerInterfaceWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInterfaceWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishedPlayerstext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FinishedPlayerstext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInterfaceWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GamesAssignmentTwo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerInterfaceWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInterfaceWidget_UpdateFinishedPlayersText, "UpdateFinishedPlayersText" }, // 3156850932
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInterfaceWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerInterfaceWidget.h" },
		{ "ModuleRelativePath", "PlayerInterfaceWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInterfaceWidget_Statics::NewProp_FinishedPlayerstext_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerInterfaceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInterfaceWidget_Statics::NewProp_FinishedPlayerstext = { "FinishedPlayerstext", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerInterfaceWidget, FinishedPlayerstext), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerInterfaceWidget_Statics::NewProp_FinishedPlayerstext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInterfaceWidget_Statics::NewProp_FinishedPlayerstext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInterfaceWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInterfaceWidget_Statics::NewProp_FinishedPlayerstext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInterfaceWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInterfaceWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInterfaceWidget_Statics::ClassParams = {
		&UPlayerInterfaceWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerInterfaceWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInterfaceWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInterfaceWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInterfaceWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInterfaceWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerInterfaceWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerInterfaceWidget, 1767085053);
	template<> GAMESASSIGNMENTTWO_API UClass* StaticClass<UPlayerInterfaceWidget>()
	{
		return UPlayerInterfaceWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerInterfaceWidget(Z_Construct_UClass_UPlayerInterfaceWidget, &UPlayerInterfaceWidget::StaticClass, TEXT("/Script/GamesAssignmentTwo"), TEXT("UPlayerInterfaceWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInterfaceWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
