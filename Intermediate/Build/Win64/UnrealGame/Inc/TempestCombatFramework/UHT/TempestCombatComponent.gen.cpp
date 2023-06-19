// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Components/TempestCombatComponent.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestCombatComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestAttackPropertiesObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseBuffObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseConditionObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestCombatComponent();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestCombatComponent_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestDefensePropertiesObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UEnum* Z_Construct_UEnum_TempestCombatFramework_EModifyingType();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModifyingType;
	static UEnum* EModifyingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EModifyingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EModifyingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TempestCombatFramework_EModifyingType, Z_Construct_UPackage__Script_TempestCombatFramework(), TEXT("EModifyingType"));
		}
		return Z_Registration_Info_UEnum_EModifyingType.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UEnum* StaticEnum<EModifyingType>()
	{
		return EModifyingType_StaticEnum();
	}
	struct Z_Construct_UEnum_TempestCombatFramework_EModifyingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TempestCombatFramework_EModifyingType_Statics::Enumerators[] = {
		{ "EModifyingType::Add", (int64)EModifyingType::Add },
		{ "EModifyingType::Remove", (int64)EModifyingType::Remove },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TempestCombatFramework_EModifyingType_Statics::Enum_MetaDataParams[] = {
		{ "Add.DisplayName", "Add" },
		{ "Add.Name", "EModifyingType::Add" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
		{ "Remove.DisplayName", "Remove" },
		{ "Remove.Name", "EModifyingType::Remove" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TempestCombatFramework_EModifyingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TempestCombatFramework,
		nullptr,
		"EModifyingType",
		"EModifyingType",
		Z_Construct_UEnum_TempestCombatFramework_EModifyingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TempestCombatFramework_EModifyingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TempestCombatFramework_EModifyingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TempestCombatFramework_EModifyingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TempestCombatFramework_EModifyingType()
	{
		if (!Z_Registration_Info_UEnum_EModifyingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModifyingType.InnerSingleton, Z_Construct_UEnum_TempestCombatFramework_EModifyingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EModifyingType.InnerSingleton;
	}
	DEFINE_FUNCTION(UTempestCombatComponent::execConstructDefensePropertyOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_PropertyToConstruct);
		P_GET_OBJECT_REF(UTempestDefensePropertiesObject,Z_Param_Out_ConstructedProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructDefensePropertyOfClass(Z_Param_PropertyToConstruct,Z_Param_Out_ConstructedProperty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCombatComponent::execGetCombatConditionOfGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_ConditionGameplayTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTempestBaseConditionObject**)Z_Param__Result=P_THIS->GetCombatConditionOfGameplayTag(Z_Param_ConditionGameplayTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCombatComponent::execRemoveFromCombatConditions)
	{
		P_GET_OBJECT(UTempestBaseConditionObject,Z_Param_ConditionToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromCombatConditions(Z_Param_ConditionToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCombatComponent::execAddToCombatConditions)
	{
		P_GET_OBJECT(UTempestBaseConditionObject,Z_Param_ConditionToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToCombatConditions(Z_Param_ConditionToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCombatComponent::execSetDefenseProperty)
	{
		P_GET_OBJECT(UTempestDefensePropertiesObject,Z_Param_NewDefenseProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefenseProperty(Z_Param_NewDefenseProperty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCombatComponent::execSetAttackProperty)
	{
		P_GET_OBJECT(UTempestAttackPropertiesObject,Z_Param_NewAttackProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttackProperty(Z_Param_NewAttackProperty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCombatComponent::execSetReceivedAttackProperty)
	{
		P_GET_OBJECT(UTempestAttackPropertiesObject,Z_Param_NewAttackProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReceivedAttackProperty(Z_Param_NewAttackProperty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCombatComponent::execRemoveFromAppliedBuffs)
	{
		P_GET_OBJECT(UTempestBaseBuffObject,Z_Param_BuffToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromAppliedBuffs(Z_Param_BuffToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCombatComponent::execAddToAppliedBuffs)
	{
		P_GET_OBJECT(UTempestBaseBuffObject,Z_Param_BuffToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToAppliedBuffs(Z_Param_BuffToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCombatComponent::execGetCombatStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetCombatStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestCombatComponent::execModifyCombatStatus)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_CombatStatusToModify);
		P_GET_ENUM(EModifyingType,Z_Param_ModifyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyCombatStatus(Z_Param_CombatStatusToModify,EModifyingType(Z_Param_ModifyType));
		P_NATIVE_END;
	}
	void UTempestCombatComponent::StaticRegisterNativesUTempestCombatComponent()
	{
		UClass* Class = UTempestCombatComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToAppliedBuffs", &UTempestCombatComponent::execAddToAppliedBuffs },
			{ "AddToCombatConditions", &UTempestCombatComponent::execAddToCombatConditions },
			{ "ConstructDefensePropertyOfClass", &UTempestCombatComponent::execConstructDefensePropertyOfClass },
			{ "GetCombatConditionOfGameplayTag", &UTempestCombatComponent::execGetCombatConditionOfGameplayTag },
			{ "GetCombatStatus", &UTempestCombatComponent::execGetCombatStatus },
			{ "ModifyCombatStatus", &UTempestCombatComponent::execModifyCombatStatus },
			{ "RemoveFromAppliedBuffs", &UTempestCombatComponent::execRemoveFromAppliedBuffs },
			{ "RemoveFromCombatConditions", &UTempestCombatComponent::execRemoveFromCombatConditions },
			{ "SetAttackProperty", &UTempestCombatComponent::execSetAttackProperty },
			{ "SetDefenseProperty", &UTempestCombatComponent::execSetDefenseProperty },
			{ "SetReceivedAttackProperty", &UTempestCombatComponent::execSetReceivedAttackProperty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTempestCombatComponent_AddToAppliedBuffs_Statics
	{
		struct TempestCombatComponent_eventAddToAppliedBuffs_Parms
		{
			UTempestBaseBuffObject* BuffToAdd;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuffToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCombatComponent_AddToAppliedBuffs_Statics::NewProp_BuffToAdd = { "BuffToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCombatComponent_eventAddToAppliedBuffs_Parms, BuffToAdd), Z_Construct_UClass_UTempestBaseBuffObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCombatComponent_AddToAppliedBuffs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCombatComponent_AddToAppliedBuffs_Statics::NewProp_BuffToAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCombatComponent_AddToAppliedBuffs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat Status Setters" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCombatComponent_AddToAppliedBuffs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCombatComponent, nullptr, "AddToAppliedBuffs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCombatComponent_AddToAppliedBuffs_Statics::TempestCombatComponent_eventAddToAppliedBuffs_Parms), Z_Construct_UFunction_UTempestCombatComponent_AddToAppliedBuffs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_AddToAppliedBuffs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCombatComponent_AddToAppliedBuffs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_AddToAppliedBuffs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCombatComponent_AddToAppliedBuffs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCombatComponent_AddToAppliedBuffs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCombatComponent_AddToCombatConditions_Statics
	{
		struct TempestCombatComponent_eventAddToCombatConditions_Parms
		{
			UTempestBaseConditionObject* ConditionToAdd;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConditionToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCombatComponent_AddToCombatConditions_Statics::NewProp_ConditionToAdd = { "ConditionToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCombatComponent_eventAddToCombatConditions_Parms, ConditionToAdd), Z_Construct_UClass_UTempestBaseConditionObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCombatComponent_AddToCombatConditions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCombatComponent_AddToCombatConditions_Statics::NewProp_ConditionToAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCombatComponent_AddToCombatConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat Status Setters" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCombatComponent_AddToCombatConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCombatComponent, nullptr, "AddToCombatConditions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCombatComponent_AddToCombatConditions_Statics::TempestCombatComponent_eventAddToCombatConditions_Parms), Z_Construct_UFunction_UTempestCombatComponent_AddToCombatConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_AddToCombatConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCombatComponent_AddToCombatConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_AddToCombatConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCombatComponent_AddToCombatConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCombatComponent_AddToCombatConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCombatComponent_ConstructDefensePropertyOfClass_Statics
	{
		struct TempestCombatComponent_eventConstructDefensePropertyOfClass_Parms
		{
			TSubclassOf<UTempestDefensePropertiesObject>  PropertyToConstruct;
			UTempestDefensePropertiesObject* ConstructedProperty;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_PropertyToConstruct;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstructedProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestCombatComponent_ConstructDefensePropertyOfClass_Statics::NewProp_PropertyToConstruct = { "PropertyToConstruct", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCombatComponent_eventConstructDefensePropertyOfClass_Parms, PropertyToConstruct), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestDefensePropertiesObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCombatComponent_ConstructDefensePropertyOfClass_Statics::NewProp_ConstructedProperty = { "ConstructedProperty", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCombatComponent_eventConstructDefensePropertyOfClass_Parms, ConstructedProperty), Z_Construct_UClass_UTempestDefensePropertiesObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCombatComponent_ConstructDefensePropertyOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCombatComponent_ConstructDefensePropertyOfClass_Statics::NewProp_PropertyToConstruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCombatComponent_ConstructDefensePropertyOfClass_Statics::NewProp_ConstructedProperty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCombatComponent_ConstructDefensePropertyOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Construction" },
		{ "Comment", "/* Construction */" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
		{ "ToolTip", "Construction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCombatComponent_ConstructDefensePropertyOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCombatComponent, nullptr, "ConstructDefensePropertyOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCombatComponent_ConstructDefensePropertyOfClass_Statics::TempestCombatComponent_eventConstructDefensePropertyOfClass_Parms), Z_Construct_UFunction_UTempestCombatComponent_ConstructDefensePropertyOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_ConstructDefensePropertyOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCombatComponent_ConstructDefensePropertyOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_ConstructDefensePropertyOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCombatComponent_ConstructDefensePropertyOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCombatComponent_ConstructDefensePropertyOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCombatComponent_GetCombatConditionOfGameplayTag_Statics
	{
		struct TempestCombatComponent_eventGetCombatConditionOfGameplayTag_Parms
		{
			FGameplayTag ConditionGameplayTag;
			UTempestBaseConditionObject* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConditionGameplayTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestCombatComponent_GetCombatConditionOfGameplayTag_Statics::NewProp_ConditionGameplayTag = { "ConditionGameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCombatComponent_eventGetCombatConditionOfGameplayTag_Parms, ConditionGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCombatComponent_GetCombatConditionOfGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCombatComponent_eventGetCombatConditionOfGameplayTag_Parms, ReturnValue), Z_Construct_UClass_UTempestBaseConditionObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCombatComponent_GetCombatConditionOfGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCombatComponent_GetCombatConditionOfGameplayTag_Statics::NewProp_ConditionGameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCombatComponent_GetCombatConditionOfGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCombatComponent_GetCombatConditionOfGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat Condition Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCombatComponent_GetCombatConditionOfGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCombatComponent, nullptr, "GetCombatConditionOfGameplayTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCombatComponent_GetCombatConditionOfGameplayTag_Statics::TempestCombatComponent_eventGetCombatConditionOfGameplayTag_Parms), Z_Construct_UFunction_UTempestCombatComponent_GetCombatConditionOfGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_GetCombatConditionOfGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCombatComponent_GetCombatConditionOfGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_GetCombatConditionOfGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCombatComponent_GetCombatConditionOfGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCombatComponent_GetCombatConditionOfGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCombatComponent_GetCombatStatus_Statics
	{
		struct TempestCombatComponent_eventGetCombatStatus_Parms
		{
			FGameplayTagContainer ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestCombatComponent_GetCombatStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCombatComponent_eventGetCombatStatus_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCombatComponent_GetCombatStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCombatComponent_GetCombatStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCombatComponent_GetCombatStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat Status Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCombatComponent_GetCombatStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCombatComponent, nullptr, "GetCombatStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCombatComponent_GetCombatStatus_Statics::TempestCombatComponent_eventGetCombatStatus_Parms), Z_Construct_UFunction_UTempestCombatComponent_GetCombatStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_GetCombatStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCombatComponent_GetCombatStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_GetCombatStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCombatComponent_GetCombatStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCombatComponent_GetCombatStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus_Statics
	{
		struct TempestCombatComponent_eventModifyCombatStatus_Parms
		{
			FGameplayTag CombatStatusToModify;
			EModifyingType ModifyType;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CombatStatusToModify;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModifyType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModifyType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus_Statics::NewProp_CombatStatusToModify = { "CombatStatusToModify", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCombatComponent_eventModifyCombatStatus_Parms, CombatStatusToModify), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus_Statics::NewProp_ModifyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus_Statics::NewProp_ModifyType = { "ModifyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCombatComponent_eventModifyCombatStatus_Parms, ModifyType), Z_Construct_UEnum_TempestCombatFramework_EModifyingType, METADATA_PARAMS(nullptr, 0) }; // 159436027
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus_Statics::NewProp_CombatStatusToModify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus_Statics::NewProp_ModifyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus_Statics::NewProp_ModifyType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat Status Setters" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCombatComponent, nullptr, "ModifyCombatStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus_Statics::TempestCombatComponent_eventModifyCombatStatus_Parms), Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCombatComponent_RemoveFromAppliedBuffs_Statics
	{
		struct TempestCombatComponent_eventRemoveFromAppliedBuffs_Parms
		{
			UTempestBaseBuffObject* BuffToRemove;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuffToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCombatComponent_RemoveFromAppliedBuffs_Statics::NewProp_BuffToRemove = { "BuffToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCombatComponent_eventRemoveFromAppliedBuffs_Parms, BuffToRemove), Z_Construct_UClass_UTempestBaseBuffObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCombatComponent_RemoveFromAppliedBuffs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCombatComponent_RemoveFromAppliedBuffs_Statics::NewProp_BuffToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCombatComponent_RemoveFromAppliedBuffs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat Status Setters" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCombatComponent_RemoveFromAppliedBuffs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCombatComponent, nullptr, "RemoveFromAppliedBuffs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCombatComponent_RemoveFromAppliedBuffs_Statics::TempestCombatComponent_eventRemoveFromAppliedBuffs_Parms), Z_Construct_UFunction_UTempestCombatComponent_RemoveFromAppliedBuffs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_RemoveFromAppliedBuffs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCombatComponent_RemoveFromAppliedBuffs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_RemoveFromAppliedBuffs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCombatComponent_RemoveFromAppliedBuffs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCombatComponent_RemoveFromAppliedBuffs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCombatComponent_RemoveFromCombatConditions_Statics
	{
		struct TempestCombatComponent_eventRemoveFromCombatConditions_Parms
		{
			UTempestBaseConditionObject* ConditionToRemove;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConditionToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCombatComponent_RemoveFromCombatConditions_Statics::NewProp_ConditionToRemove = { "ConditionToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCombatComponent_eventRemoveFromCombatConditions_Parms, ConditionToRemove), Z_Construct_UClass_UTempestBaseConditionObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCombatComponent_RemoveFromCombatConditions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCombatComponent_RemoveFromCombatConditions_Statics::NewProp_ConditionToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCombatComponent_RemoveFromCombatConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat Status Setters" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCombatComponent_RemoveFromCombatConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCombatComponent, nullptr, "RemoveFromCombatConditions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCombatComponent_RemoveFromCombatConditions_Statics::TempestCombatComponent_eventRemoveFromCombatConditions_Parms), Z_Construct_UFunction_UTempestCombatComponent_RemoveFromCombatConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_RemoveFromCombatConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCombatComponent_RemoveFromCombatConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_RemoveFromCombatConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCombatComponent_RemoveFromCombatConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCombatComponent_RemoveFromCombatConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCombatComponent_SetAttackProperty_Statics
	{
		struct TempestCombatComponent_eventSetAttackProperty_Parms
		{
			UTempestAttackPropertiesObject* NewAttackProperty;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAttackProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCombatComponent_SetAttackProperty_Statics::NewProp_NewAttackProperty = { "NewAttackProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCombatComponent_eventSetAttackProperty_Parms, NewAttackProperty), Z_Construct_UClass_UTempestAttackPropertiesObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCombatComponent_SetAttackProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCombatComponent_SetAttackProperty_Statics::NewProp_NewAttackProperty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCombatComponent_SetAttackProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat Status Setters" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCombatComponent_SetAttackProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCombatComponent, nullptr, "SetAttackProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCombatComponent_SetAttackProperty_Statics::TempestCombatComponent_eventSetAttackProperty_Parms), Z_Construct_UFunction_UTempestCombatComponent_SetAttackProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_SetAttackProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCombatComponent_SetAttackProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_SetAttackProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCombatComponent_SetAttackProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCombatComponent_SetAttackProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCombatComponent_SetDefenseProperty_Statics
	{
		struct TempestCombatComponent_eventSetDefenseProperty_Parms
		{
			UTempestDefensePropertiesObject* NewDefenseProperty;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDefenseProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCombatComponent_SetDefenseProperty_Statics::NewProp_NewDefenseProperty = { "NewDefenseProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCombatComponent_eventSetDefenseProperty_Parms, NewDefenseProperty), Z_Construct_UClass_UTempestDefensePropertiesObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCombatComponent_SetDefenseProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCombatComponent_SetDefenseProperty_Statics::NewProp_NewDefenseProperty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCombatComponent_SetDefenseProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat Status Setters" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCombatComponent_SetDefenseProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCombatComponent, nullptr, "SetDefenseProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCombatComponent_SetDefenseProperty_Statics::TempestCombatComponent_eventSetDefenseProperty_Parms), Z_Construct_UFunction_UTempestCombatComponent_SetDefenseProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_SetDefenseProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCombatComponent_SetDefenseProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_SetDefenseProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCombatComponent_SetDefenseProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCombatComponent_SetDefenseProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestCombatComponent_SetReceivedAttackProperty_Statics
	{
		struct TempestCombatComponent_eventSetReceivedAttackProperty_Parms
		{
			UTempestAttackPropertiesObject* NewAttackProperty;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAttackProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestCombatComponent_SetReceivedAttackProperty_Statics::NewProp_NewAttackProperty = { "NewAttackProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestCombatComponent_eventSetReceivedAttackProperty_Parms, NewAttackProperty), Z_Construct_UClass_UTempestAttackPropertiesObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestCombatComponent_SetReceivedAttackProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestCombatComponent_SetReceivedAttackProperty_Statics::NewProp_NewAttackProperty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestCombatComponent_SetReceivedAttackProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat Status Setters" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestCombatComponent_SetReceivedAttackProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestCombatComponent, nullptr, "SetReceivedAttackProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestCombatComponent_SetReceivedAttackProperty_Statics::TempestCombatComponent_eventSetReceivedAttackProperty_Parms), Z_Construct_UFunction_UTempestCombatComponent_SetReceivedAttackProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_SetReceivedAttackProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestCombatComponent_SetReceivedAttackProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestCombatComponent_SetReceivedAttackProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestCombatComponent_SetReceivedAttackProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestCombatComponent_SetReceivedAttackProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestCombatComponent);
	UClass* Z_Construct_UClass_UTempestCombatComponent_NoRegister()
	{
		return UTempestCombatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTempestCombatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatStatusContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CombatStatusContainer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AppliedBuffs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedBuffs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AppliedBuffs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatConditions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatConditions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CombatConditions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerDefenseProperty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerDefenseProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAttackProperty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerAttackProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceivedAttackProperty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReceivedAttackProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestCombatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestCombatComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestCombatComponent_AddToAppliedBuffs, "AddToAppliedBuffs" }, // 4287170555
		{ &Z_Construct_UFunction_UTempestCombatComponent_AddToCombatConditions, "AddToCombatConditions" }, // 1511889150
		{ &Z_Construct_UFunction_UTempestCombatComponent_ConstructDefensePropertyOfClass, "ConstructDefensePropertyOfClass" }, // 3846420675
		{ &Z_Construct_UFunction_UTempestCombatComponent_GetCombatConditionOfGameplayTag, "GetCombatConditionOfGameplayTag" }, // 1012085588
		{ &Z_Construct_UFunction_UTempestCombatComponent_GetCombatStatus, "GetCombatStatus" }, // 1322786685
		{ &Z_Construct_UFunction_UTempestCombatComponent_ModifyCombatStatus, "ModifyCombatStatus" }, // 482675373
		{ &Z_Construct_UFunction_UTempestCombatComponent_RemoveFromAppliedBuffs, "RemoveFromAppliedBuffs" }, // 3066502598
		{ &Z_Construct_UFunction_UTempestCombatComponent_RemoveFromCombatConditions, "RemoveFromCombatConditions" }, // 3487545169
		{ &Z_Construct_UFunction_UTempestCombatComponent_SetAttackProperty, "SetAttackProperty" }, // 1780092410
		{ &Z_Construct_UFunction_UTempestCombatComponent_SetDefenseProperty, "SetDefenseProperty" }, // 1122442624
		{ &Z_Construct_UFunction_UTempestCombatComponent_SetReceivedAttackProperty, "SetReceivedAttackProperty" }, // 1128275949
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestCombatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/TempestCombatComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_CombatStatusContainer_MetaData[] = {
		{ "Category", "Tempest Combat Status" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_CombatStatusContainer = { "CombatStatusContainer", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestCombatComponent, CombatStatusContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_CombatStatusContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_CombatStatusContainer_MetaData)) }; // 3057219007
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_AppliedBuffs_Inner = { "AppliedBuffs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTempestBaseBuffObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_AppliedBuffs_MetaData[] = {
		{ "Category", "Tempest Combat Buffs" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_AppliedBuffs = { "AppliedBuffs", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestCombatComponent, AppliedBuffs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_AppliedBuffs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_AppliedBuffs_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_CombatConditions_Inner = { "CombatConditions", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTempestBaseConditionObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_CombatConditions_MetaData[] = {
		{ "Category", "Tempest Combat Conditions" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_CombatConditions = { "CombatConditions", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestCombatComponent, CombatConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_CombatConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_CombatConditions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_OwnerDefenseProperty_MetaData[] = {
		{ "Category", "Tempest Combat Properties" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_OwnerDefenseProperty = { "OwnerDefenseProperty", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestCombatComponent, OwnerDefenseProperty), Z_Construct_UClass_UTempestDefensePropertiesObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_OwnerDefenseProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_OwnerDefenseProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_OwnerAttackProperty_MetaData[] = {
		{ "Category", "Tempest Combat Properties" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_OwnerAttackProperty = { "OwnerAttackProperty", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestCombatComponent, OwnerAttackProperty), Z_Construct_UClass_UTempestAttackPropertiesObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_OwnerAttackProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_OwnerAttackProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_ReceivedAttackProperty_MetaData[] = {
		{ "Category", "Tempest Combat Properties" },
		{ "ModuleRelativePath", "Public/Components/TempestCombatComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_ReceivedAttackProperty = { "ReceivedAttackProperty", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestCombatComponent, ReceivedAttackProperty), Z_Construct_UClass_UTempestAttackPropertiesObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_ReceivedAttackProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_ReceivedAttackProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestCombatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_CombatStatusContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_AppliedBuffs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_AppliedBuffs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_CombatConditions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_CombatConditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_OwnerDefenseProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_OwnerAttackProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestCombatComponent_Statics::NewProp_ReceivedAttackProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestCombatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestCombatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestCombatComponent_Statics::ClassParams = {
		&UTempestCombatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestCombatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCombatComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestCombatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestCombatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestCombatComponent()
	{
		if (!Z_Registration_Info_UClass_UTempestCombatComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestCombatComponent.OuterSingleton, Z_Construct_UClass_UTempestCombatComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestCombatComponent.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestCombatComponent>()
	{
		return UTempestCombatComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestCombatComponent);
	UTempestCombatComponent::~UTempestCombatComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_Statics::EnumInfo[] = {
		{ EModifyingType_StaticEnum, TEXT("EModifyingType"), &Z_Registration_Info_UEnum_EModifyingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 159436027U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestCombatComponent, UTempestCombatComponent::StaticClass, TEXT("UTempestCombatComponent"), &Z_Registration_Info_UClass_UTempestCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestCombatComponent), 305827939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_1130911931(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestCombatComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
