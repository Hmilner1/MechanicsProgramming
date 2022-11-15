// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGUESYSTEM_DialogueWidget_generated_h
#error "DialogueWidget.generated.h already included, missing '#pragma once' in DialogueWidget.h"
#endif
#define DIALOGUESYSTEM_DialogueWidget_generated_h

#define FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_SPARSE_DATA
#define FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisplayBox);


#define FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayBox);


#define FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueWidget(); \
	friend struct Z_Construct_UClass_UDialogueWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UDialogueWidget)


#define FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueWidget(); \
	friend struct Z_Construct_UClass_UDialogueWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UDialogueWidget)


#define FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueWidget(UDialogueWidget&&); \
	NO_API UDialogueWidget(const UDialogueWidget&); \
public:


#define FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueWidget(UDialogueWidget&&); \
	NO_API UDialogueWidget(const UDialogueWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWidget)


#define FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_14_PROLOG
#define FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_SPARSE_DATA \
	FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_RPC_WRAPPERS \
	FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_INCLASS \
	FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_SPARSE_DATA \
	FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUESYSTEM_API UClass* StaticClass<class UDialogueWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
