// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GAMESASSIGNMENTTWO_FinishZone_generated_h
#error "FinishZone.generated.h already included, missing '#pragma once' in FinishZone.h"
#endif
#define GAMESASSIGNMENTTWO_FinishZone_generated_h

#define GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_SPARSE_DATA
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_RPC_WRAPPERS \
	virtual void ServerRPCWarpToEndLevel_Implementation(); \
	virtual void ServerRPCPlayerFinished_Implementation(); \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execServerRPCWarpToEndLevel); \
	DECLARE_FUNCTION(execServerRPCPlayerFinished); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRPCWarpToEndLevel_Implementation(); \
	virtual void ServerRPCPlayerFinished_Implementation(); \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execServerRPCWarpToEndLevel); \
	DECLARE_FUNCTION(execServerRPCPlayerFinished); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_EVENT_PARMS
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_CALLBACK_WRAPPERS
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinishZone(); \
	friend struct Z_Construct_UClass_AFinishZone_Statics; \
public: \
	DECLARE_CLASS(AFinishZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GamesAssignmentTwo"), NO_API) \
	DECLARE_SERIALIZER(AFinishZone)


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFinishZone(); \
	friend struct Z_Construct_UClass_AFinishZone_Statics; \
public: \
	DECLARE_CLASS(AFinishZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GamesAssignmentTwo"), NO_API) \
	DECLARE_SERIALIZER(AFinishZone)


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFinishZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFinishZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinishZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinishZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinishZone(AFinishZone&&); \
	NO_API AFinishZone(const AFinishZone&); \
public:


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinishZone(AFinishZone&&); \
	NO_API AFinishZone(const AFinishZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinishZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinishZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFinishZone)


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShapeComponent() { return STRUCT_OFFSET(AFinishZone, ShapeComponent); } \
	FORCEINLINE static uint32 __PPO__playersFinished() { return STRUCT_OFFSET(AFinishZone, playersFinished); } \
	FORCEINLINE static uint32 __PPO__playerRoundLimit() { return STRUCT_OFFSET(AFinishZone, playerRoundLimit); } \
	FORCEINLINE static uint32 __PPO__EndLevelTimer() { return STRUCT_OFFSET(AFinishZone, EndLevelTimer); }


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_10_PROLOG \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_EVENT_PARMS


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_PRIVATE_PROPERTY_OFFSET \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_SPARSE_DATA \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_RPC_WRAPPERS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_CALLBACK_WRAPPERS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_INCLASS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_PRIVATE_PROPERTY_OFFSET \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_SPARSE_DATA \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_CALLBACK_WRAPPERS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_INCLASS_NO_PURE_DECLS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESASSIGNMENTTWO_API UClass* StaticClass<class AFinishZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GamesAssignmentTwo_Source_GamesAssignmentTwo_FinishZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
