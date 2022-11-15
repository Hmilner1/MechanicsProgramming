// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueSystem/DialogueWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueWidget() {}
// Cross Module References
	DIALOGUESYSTEM_API UClass* Z_Construct_UClass_UDialogueWidget_NoRegister();
	DIALOGUESYSTEM_API UClass* Z_Construct_UClass_UDialogueWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DialogueSystem();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDialogueWidget::execDisplayBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayBox();
		P_NATIVE_END;
	}
	void UDialogueWidget::StaticRegisterNativesUDialogueWidget()
	{
		UClass* Class = UDialogueWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayBox", &UDialogueWidget::execDisplayBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueWidget_DisplayBox_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_DisplayBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_DisplayBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "DisplayBox", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidget_DisplayBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_DisplayBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidget_DisplayBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_DisplayBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueWidget);
	UClass* Z_Construct_UClass_UDialogueWidget_NoRegister()
	{
		return UDialogueWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Dialogue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_Dialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Border_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_Border;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DialogueSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueWidget_DisplayBox, "DisplayBox" }, // 1960623025
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueWidget.h" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_m_Dialogue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_m_Dialogue = { "m_Dialogue", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueWidget, m_Dialogue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_m_Dialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_m_Dialogue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_m_Border_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_m_Border = { "m_Border", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueWidget, m_Border), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_m_Border_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_m_Border_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_m_Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_m_Border,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueWidget_Statics::ClassParams = {
		&UDialogueWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueWidget()
	{
		if (!Z_Registration_Info_UClass_UDialogueWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueWidget.OuterSingleton, Z_Construct_UClass_UDialogueWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueWidget.OuterSingleton;
	}
	template<> DIALOGUESYSTEM_API UClass* StaticClass<UDialogueWidget>()
	{
		return UDialogueWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueWidget);
	struct Z_CompiledInDeferFile_FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueWidget, UDialogueWidget::StaticClass, TEXT("UDialogueWidget"), &Z_Registration_Info_UClass_UDialogueWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueWidget), 3302981176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_443115368(TEXT("/Script/DialogueSystem"),
		Z_CompiledInDeferFile_FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DialogueSystem_Source_DialogueSystem_DialogueWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
