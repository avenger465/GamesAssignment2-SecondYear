// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamesAssignmentTwo/MainMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenu() {}
// Cross Module References
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_UMainMenu();
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_GamesAssignmentTwo();
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_UCustomGameInstance_NoRegister();
	GAMESASSIGNMENTTWO_API UClass* Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMainMenu::execHostServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execReturnMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnMainMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOpenHostMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenHostMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOpenJoinMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenJoinMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execQuitGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuitGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execJoinServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinServer();
		P_NATIVE_END;
	}
	void UMainMenu::StaticRegisterNativesUMainMenu()
	{
		UClass* Class = UMainMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HostServer", &UMainMenu::execHostServer },
			{ "JoinServer", &UMainMenu::execJoinServer },
			{ "OpenHostMenu", &UMainMenu::execOpenHostMenu },
			{ "OpenJoinMenu", &UMainMenu::execOpenJoinMenu },
			{ "QuitGame", &UMainMenu::execQuitGame },
			{ "ReturnMainMenu", &UMainMenu::execReturnMainMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainMenu_HostServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_HostServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_HostServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "HostServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_HostServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_HostServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_HostServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_HostServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_JoinServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_JoinServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_JoinServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "JoinServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_JoinServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_JoinServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_JoinServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_JoinServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OpenHostMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OpenHostMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OpenHostMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OpenHostMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_OpenHostMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OpenHostMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_OpenHostMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_OpenHostMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OpenJoinMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OpenJoinMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OpenJoinMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OpenJoinMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_OpenJoinMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OpenJoinMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_OpenJoinMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_OpenJoinMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_QuitGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_QuitGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_QuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "QuitGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_QuitGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_QuitGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_QuitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_QuitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_ReturnMainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_ReturnMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_ReturnMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "ReturnMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_ReturnMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_ReturnMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_ReturnMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenu_ReturnMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainMenu_NoRegister()
	{
		return UMainMenu::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstanceRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstanceRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameModeRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HostWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoinWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenuWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HostBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelHostMenuBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CancelHostMenuBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoinBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelJoinMenuBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CancelJoinMenuBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenHostMenuBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpenHostMenuBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenJoinMenuBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpenJoinMenuBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitBtn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GamesAssignmentTwo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenu_HostServer, "HostServer" }, // 1749150708
		{ &Z_Construct_UFunction_UMainMenu_JoinServer, "JoinServer" }, // 964625568
		{ &Z_Construct_UFunction_UMainMenu_OpenHostMenu, "OpenHostMenu" }, // 3105323593
		{ &Z_Construct_UFunction_UMainMenu_OpenJoinMenu, "OpenJoinMenu" }, // 426773700
		{ &Z_Construct_UFunction_UMainMenu_QuitGame, "QuitGame" }, // 80252382
		{ &Z_Construct_UFunction_UMainMenu_ReturnMainMenu, "ReturnMainMenu" }, // 144165108
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MainMenu.h" },
		{ "ModuleRelativePath", "MainMenu.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_GameInstanceRef_MetaData[] = {
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_GameInstanceRef = { "GameInstanceRef", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, GameInstanceRef), Z_Construct_UClass_UCustomGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_GameInstanceRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_GameInstanceRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_GameModeRef_MetaData[] = {
		{ "Comment", "//------------//\n// References //\n//------------//\n" },
		{ "ModuleRelativePath", "MainMenu.h" },
		{ "ToolTip", "References" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_GameModeRef = { "GameModeRef", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, GameModeRef), Z_Construct_UClass_AGamesAssignmentTwoGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_GameModeRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_GameModeRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_HostWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_HostWidget = { "HostWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, HostWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_HostWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_HostWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinWidget = { "JoinWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, JoinWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_MainMenuWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_MainMenuWidget = { "MainMenuWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, MainMenuWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_MainMenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_MainMenuWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_MenuSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_MenuSwitcher = { "MenuSwitcher", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, MenuSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_MenuSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_MenuSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_HostBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_HostBtn = { "HostBtn", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, HostBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_HostBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_HostBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_CancelHostMenuBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_CancelHostMenuBtn = { "CancelHostMenuBtn", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, CancelHostMenuBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_CancelHostMenuBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_CancelHostMenuBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinBtn = { "JoinBtn", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, JoinBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_CancelJoinMenuBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_CancelJoinMenuBtn = { "CancelJoinMenuBtn", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, CancelJoinMenuBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_CancelJoinMenuBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_CancelJoinMenuBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_OpenHostMenuBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_OpenHostMenuBtn = { "OpenHostMenuBtn", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, OpenHostMenuBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_OpenHostMenuBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_OpenHostMenuBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_OpenJoinMenuBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_OpenJoinMenuBtn = { "OpenJoinMenuBtn", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, OpenJoinMenuBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_OpenJoinMenuBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_OpenJoinMenuBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "//--------------------------//\n// widgets in the main menu //\n//--------------------------//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenu.h" },
		{ "ToolTip", "widgets in the main menu" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitBtn = { "QuitBtn", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, QuitBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitBtn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_GameInstanceRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_GameModeRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_HostWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_MainMenuWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_MenuSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_HostBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_CancelHostMenuBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_CancelJoinMenuBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_OpenHostMenuBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_OpenJoinMenuBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitBtn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainMenu_Statics::ClassParams = {
		&UMainMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainMenu, 1851224813);
	template<> GAMESASSIGNMENTTWO_API UClass* StaticClass<UMainMenu>()
	{
		return UMainMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenu(Z_Construct_UClass_UMainMenu, &UMainMenu::StaticClass, TEXT("/Script/GamesAssignmentTwo"), TEXT("UMainMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
