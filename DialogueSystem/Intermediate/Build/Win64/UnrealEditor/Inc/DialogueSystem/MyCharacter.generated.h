// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGUESYSTEM_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define DIALOGUESYSTEM_MyCharacter_generated_h

#define FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_9_DELEGATE \
struct _Script_DialogueSystem_eventDialogueEvent_Parms \
{ \
	TArray<FString> AISentText; \
	TArray<FString> PlayerSentText; \
	FString AiName; \
}; \
static inline void FDialogueEvent_DelegateWrapper(const FMulticastScriptDelegate& DialogueEvent, const TArray<FString>& AISentText, const TArray<FString>& PlayerSentText, const FString& AiName) \
{ \
	_Script_DialogueSystem_eventDialogueEvent_Parms Parms; \
	Parms.AISentText=AISentText; \
	Parms.PlayerSentText=PlayerSentText; \
	Parms.AiName=AiName; \
	DialogueEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_SPARSE_DATA
#define FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_RPC_WRAPPERS
#define FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter)


#define FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_11_PROLOG
#define FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_SPARSE_DATA \
	FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_RPC_WRAPPERS \
	FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_INCLASS \
	FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_SPARSE_DATA \
	FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUESYSTEM_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DialogueSystem_Source_DialogueSystem_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
