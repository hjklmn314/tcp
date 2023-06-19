// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestCombatFramework_init() {}
	TEMPESTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveAbility__DelegateSignature();
	TEMPESTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveState__DelegateSignature();
	TEMPESTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TempestCombatFramework;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TempestCombatFramework()
	{
		if (!Z_Registration_Info_UPackage__Script_TempestCombatFramework.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveAbility__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TempestCombatFramework_OnUpdatedActiveState__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TempestCombatFramework",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7FB5D7D0,
				0x389F7193,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TempestCombatFramework.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TempestCombatFramework.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TempestCombatFramework(Z_Construct_UPackage__Script_TempestCombatFramework, TEXT("/Script/TempestCombatFramework"), Z_Registration_Info_UPackage__Script_TempestCombatFramework, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7FB5D7D0, 0x389F7193));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
