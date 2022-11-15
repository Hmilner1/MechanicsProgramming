// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueSystem_init() {}
	DIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_DialogueSystem_TestEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DialogueSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DialogueSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_DialogueSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DialogueSystem_TestEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DialogueSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4DB88D75,
				0xA3AC88C0,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DialogueSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DialogueSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DialogueSystem(Z_Construct_UPackage__Script_DialogueSystem, TEXT("/Script/DialogueSystem"), Z_Registration_Info_UPackage__Script_DialogueSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4DB88D75, 0xA3AC88C0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
