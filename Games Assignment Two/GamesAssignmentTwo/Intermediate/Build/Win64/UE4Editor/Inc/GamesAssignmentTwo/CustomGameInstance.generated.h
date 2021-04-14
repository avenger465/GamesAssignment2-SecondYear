// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMESASSIGNMENTTWO_CustomGameInstance_generated_h
#error "CustomGameInstance.generated.h already included, missing '#pragma once' in CustomGameInstance.h"
#endif
#define GAMESASSIGNMENTTWO_CustomGameInstance_generated_h

#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_SPARSE_DATA
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_RPC_WRAPPERS \
	virtual bool ServerSpawnPlayer_Validate(); \
	virtual void ServerSpawnPlayer_Implementation(); \
 \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execHost); \
	DECLARE_FUNCTION(execWarp); \
	DECLARE_FUNCTION(execServerSpawnPlayer); \
	DECLARE_FUNCTION(execSpawnPlayer); \
	DECLARE_FUNCTION(execLoadMenuWidget);


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerSpawnPlayer_Validate(); \
	virtual void ServerSpawnPlayer_Implementation(); \
 \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execHost); \
	DECLARE_FUNCTION(execWarp); \
	DECLARE_FUNCTION(execServerSpawnPlayer); \
	DECLARE_FUNCTION(execSpawnPlayer); \
	DECLARE_FUNCTION(execLoadMenuWidget);


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_EVENT_PARMS
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_CALLBACK_WRAPPERS
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomGameInstance(); \
	friend struct Z_Construct_UClass_UCustomGameInstance_Statics; \
public: \
	DECLARE_CLASS(UCustomGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GamesAssignmentTwo"), NO_API) \
	DECLARE_SERIALIZER(UCustomGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UCustomGameInstance*>(this); }


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCustomGameInstance(); \
	friend struct Z_Construct_UClass_UCustomGameInstance_Statics; \
public: \
	DECLARE_CLASS(UCustomGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GamesAssignmentTwo"), NO_API) \
	DECLARE_SERIALIZER(UCustomGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UCustomGameInstance*>(this); }


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGameInstance(UCustomGameInstance&&); \
	NO_API UCustomGameInstance(const UCustomGameInstance&); \
public:


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGameInstance(UCustomGameInstance&&); \
	NO_API UCustomGameInstance(const UCustomGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomGameInstance)


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_PRIVATE_PROPERTY_OFFSET
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_17_PROLOG \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_EVENT_PARMS


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_SPARSE_DATA \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_RPC_WRAPPERS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_CALLBACK_WRAPPERS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_INCLASS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_SPARSE_DATA \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_CALLBACK_WRAPPERS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_INCLASS_NO_PURE_DECLS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESASSIGNMENTTWO_API UClass* StaticClass<class UCustomGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GamesAssignmentTwo_Source_GamesAssignmentTwo_CustomGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
