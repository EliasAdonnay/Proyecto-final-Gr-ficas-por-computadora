// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef APOCALIPSIS_CaracterBase_generated_h
#error "CaracterBase.generated.h already included, missing '#pragma once' in CaracterBase.h"
#endif
#define APOCALIPSIS_CaracterBase_generated_h

#define Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_SPARSE_DATA
#define Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalcularSalud);


#define Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalcularSalud);


#define Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACaracterBase(); \
	friend struct Z_Construct_UClass_ACaracterBase_Statics; \
public: \
	DECLARE_CLASS(ACaracterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Apocalipsis"), NO_API) \
	DECLARE_SERIALIZER(ACaracterBase)


#define Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACaracterBase(); \
	friend struct Z_Construct_UClass_ACaracterBase_Statics; \
public: \
	DECLARE_CLASS(ACaracterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Apocalipsis"), NO_API) \
	DECLARE_SERIALIZER(ACaracterBase)


#define Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACaracterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACaracterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaracterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaracterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACaracterBase(ACaracterBase&&); \
	NO_API ACaracterBase(const ACaracterBase&); \
public:


#define Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACaracterBase(ACaracterBase&&); \
	NO_API ACaracterBase(const ACaracterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaracterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaracterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACaracterBase)


#define Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_PRIVATE_PROPERTY_OFFSET
#define Apocalipsis_Source_Apocalipsis_CaracterBase_h_9_PROLOG
#define Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_SPARSE_DATA \
	Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_RPC_WRAPPERS \
	Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_INCLASS \
	Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_SPARSE_DATA \
	Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_INCLASS_NO_PURE_DECLS \
	Apocalipsis_Source_Apocalipsis_CaracterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APOCALIPSIS_API UClass* StaticClass<class ACaracterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Apocalipsis_Source_Apocalipsis_CaracterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
