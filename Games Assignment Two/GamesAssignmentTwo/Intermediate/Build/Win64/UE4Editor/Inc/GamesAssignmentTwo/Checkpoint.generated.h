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
#ifdef GAMESASSIGNMENTTWO_Checkpoint_generated_h
#error "Checkpoint.generated.h already included, missing '#pragma once' in Checkpoint.h"
#endif
#define GAMESASSIGNMENTTWO_Checkpoint_generated_h

#define GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_SPARSE_DATA
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACheckpoint(); \
	friend struct Z_Construct_UClass_ACheckpoint_Statics; \
public: \
	DECLARE_CLASS(ACheckpoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GamesAssignmentTwo"), NO_API) \
	DECLARE_SERIALIZER(ACheckpoint)


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACheckpoint(); \
	friend struct Z_Construct_UClass_ACheckpoint_Statics; \
public: \
	DECLARE_CLASS(ACheckpoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GamesAssignmentTwo"), NO_API) \
	DECLARE_SERIALIZER(ACheckpoint)


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACheckpoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACheckpoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckpoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckpoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACheckpoint(ACheckpoint&&); \
	NO_API ACheckpoint(const ACheckpoint&); \
public:


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACheckpoint(ACheckpoint&&); \
	NO_API ACheckpoint(const ACheckpoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckpoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckpoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACheckpoint)


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShapeComponent() { return STRUCT_OFFSET(ACheckpoint, ShapeComponent); } \
	FORCEINLINE static uint32 __PPO__CheckpointIndex() { return STRUCT_OFFSET(ACheckpoint, CheckpointIndex); }


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_9_PROLOG
#define GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_PRIVATE_PROPERTY_OFFSET \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_SPARSE_DATA \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_RPC_WRAPPERS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_INCLASS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_PRIVATE_PROPERTY_OFFSET \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_SPARSE_DATA \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_INCLASS_NO_PURE_DECLS \
	GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESASSIGNMENTTWO_API UClass* StaticClass<class ACheckpoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GamesAssignmentTwo_Source_GamesAssignmentTwo_Checkpoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
