// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueSystem/DialogueInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueInteraction() {}
// Cross Module References
	DIALOGUESYSTEM_API UClass* Z_Construct_UClass_ADialogueInteraction_NoRegister();
	DIALOGUESYSTEM_API UClass* Z_Construct_UClass_ADialogueInteraction();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DialogueSystem();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ADialogueInteraction::StaticRegisterNativesADialogueInteraction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADialogueInteraction);
	UClass* Z_Construct_UClass_ADialogueInteraction_NoRegister()
	{
		return ADialogueInteraction::StaticClass();
	}
	struct Z_Construct_UClass_ADialogueInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Dialogue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_m_Dialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_Root;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADialogueInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueInteraction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DialogueInteraction.h" },
		{ "ModuleRelativePath", "DialogueInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueInteraction_Statics::NewProp_m_Dialogue_MetaData[] = {
		{ "Category", "TextBox" },
		{ "ModuleRelativePath", "DialogueInteraction.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADialogueInteraction_Statics::NewProp_m_Dialogue = { "m_Dialogue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADialogueInteraction, m_Dialogue), METADATA_PARAMS(Z_Construct_UClass_ADialogueInteraction_Statics::NewProp_m_Dialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADialogueInteraction_Statics::NewProp_m_Dialogue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueInteraction_Statics::NewProp_m_Root_MetaData[] = {
		{ "Category", "Root" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DialogueInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADialogueInteraction_Statics::NewProp_m_Root = { "m_Root", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADialogueInteraction, m_Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADialogueInteraction_Statics::NewProp_m_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADialogueInteraction_Statics::NewProp_m_Root_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADialogueInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueInteraction_Statics::NewProp_m_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADialogueInteraction_Statics::NewProp_m_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADialogueInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADialogueInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADialogueInteraction_Statics::ClassParams = {
		&ADialogueInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADialogueInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADialogueInteraction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADialogueInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADialogueInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADialogueInteraction()
	{
		if (!Z_Registration_Info_UClass_ADialogueInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADialogueInteraction.OuterSingleton, Z_Construct_UClass_ADialogueInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADialogueInteraction.OuterSingleton;
	}
	template<> DIALOGUESYSTEM_API UClass* StaticClass<ADialogueInteraction>()
	{
		return ADialogueInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADialogueInteraction);
	struct Z_CompiledInDeferFile_FID_DialogueSystem_Source_DialogueSystem_DialogueInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogueSystem_Source_DialogueSystem_DialogueInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADialogueInteraction, ADialogueInteraction::StaticClass, TEXT("ADialogueInteraction"), &Z_Registration_Info_UClass_ADialogueInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADialogueInteraction), 871329246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogueSystem_Source_DialogueSystem_DialogueInteraction_h_2668197914(TEXT("/Script/DialogueSystem"),
		Z_CompiledInDeferFile_FID_DialogueSystem_Source_DialogueSystem_DialogueInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DialogueSystem_Source_DialogueSystem_DialogueInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
