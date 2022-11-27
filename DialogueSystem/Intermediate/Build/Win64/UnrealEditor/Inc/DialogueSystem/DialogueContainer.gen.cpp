// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueSystem/DialogueContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueContainer() {}
// Cross Module References
	DIALOGUESYSTEM_API UClass* Z_Construct_UClass_UDialogueContainer_NoRegister();
	DIALOGUESYSTEM_API UClass* Z_Construct_UClass_UDialogueContainer();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DialogueSystem();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void UDialogueContainer::StaticRegisterNativesUDialogueContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueContainer);
	UClass* Z_Construct_UClass_UDialogueContainer_NoRegister()
	{
		return UDialogueContainer::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_DevContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_DevContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DialogueContainer.h" },
		{ "ModuleRelativePath", "DialogueContainer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueContainer_Statics::NewProp_m_DevContainer_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "DialogueContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueContainer_Statics::NewProp_m_DevContainer = { "m_DevContainer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueContainer, m_DevContainer), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueContainer_Statics::NewProp_m_DevContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueContainer_Statics::NewProp_m_DevContainer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueContainer_Statics::NewProp_m_DevContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueContainer_Statics::ClassParams = {
		&UDialogueContainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueContainer_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueContainer()
	{
		if (!Z_Registration_Info_UClass_UDialogueContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueContainer.OuterSingleton, Z_Construct_UClass_UDialogueContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueContainer.OuterSingleton;
	}
	template<> DIALOGUESYSTEM_API UClass* StaticClass<UDialogueContainer>()
	{
		return UDialogueContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueContainer);
	struct Z_CompiledInDeferFile_FID_DialogueSystem_Source_DialogueSystem_DialogueContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogueSystem_Source_DialogueSystem_DialogueContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueContainer, UDialogueContainer::StaticClass, TEXT("UDialogueContainer"), &Z_Registration_Info_UClass_UDialogueContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueContainer), 2796979883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogueSystem_Source_DialogueSystem_DialogueContainer_h_1976291088(TEXT("/Script/DialogueSystem"),
		Z_CompiledInDeferFile_FID_DialogueSystem_Source_DialogueSystem_DialogueContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DialogueSystem_Source_DialogueSystem_DialogueContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
