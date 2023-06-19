// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Components/TempestAttributesComponents.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
#include "TempestCombatFramework/Public/Objects/TempestBaseAttributeModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestAttributesComponents() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestAttributesComponents();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestAttributesComponents_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseAttributeModifier_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseAttributeObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeModifierProperties();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	DEFINE_FUNCTION(UTempestAttributesComponents::execAddToActiveAttributeModifiers)
	{
		P_GET_OBJECT(UTempestBaseAttributeModifier,Z_Param_AttributeModifierToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToActiveAttributeModifiers(Z_Param_AttributeModifierToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestAttributesComponents::execRemoveFromActiveAttributeModifiers)
	{
		P_GET_OBJECT(UTempestBaseAttributeModifier,Z_Param_AttributeModifierToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromActiveAttributeModifiers(Z_Param_AttributeModifierToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestAttributesComponents::execGetAttributeOfGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_AttributeGameplayTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTempestBaseAttributeObject**)Z_Param__Result=P_THIS->GetAttributeOfGameplayTag(Z_Param_AttributeGameplayTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestAttributesComponents::execGetActiveAttributeModifierOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_AttributeModifierToSearch);
		P_GET_OBJECT_REF(UTempestBaseAttributeModifier,Z_Param_Out_FoundAttributeModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActiveAttributeModifierOfClass(Z_Param_AttributeModifierToSearch,Z_Param_Out_FoundAttributeModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestAttributesComponents::execGetAttributeOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_AttributeToSearch);
		P_GET_OBJECT_REF(UTempestBaseAttributeObject,Z_Param_Out_FoundAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAttributeOfClass(Z_Param_AttributeToSearch,Z_Param_Out_FoundAttribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestAttributesComponents::execConstructAttributeModifierOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_AttributeModifierToConstruct);
		P_GET_STRUCT(FAttributeModifierProperties,Z_Param_ModiferProperties);
		P_GET_OBJECT_REF(UTempestBaseAttributeModifier,Z_Param_Out_ConstructedAttributeModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructAttributeModifierOfClass(Z_Param_AttributeModifierToConstruct,Z_Param_ModiferProperties,Z_Param_Out_ConstructedAttributeModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestAttributesComponents::execConstructAttributeOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_AttributeToConstruct);
		P_GET_OBJECT_REF(UTempestBaseAttributeObject,Z_Param_Out_ConstructedAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructAttributeOfClass(Z_Param_AttributeToConstruct,Z_Param_Out_ConstructedAttribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestAttributesComponents::execClearAttributes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAttributes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestAttributesComponents::execAssignAttributes)
	{
		P_GET_TARRAY(UTempestBaseAttributeObject*,Z_Param_AttributesToAssign);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignAttributes(Z_Param_AttributesToAssign);
		P_NATIVE_END;
	}
	struct TempestAttributesComponents_eventInitializeAttributesComponent_Parms
	{
		TArray<TSubclassOf<UTempestBaseAttributeObject> > NewAttributesToCreate;
	};
	static FName NAME_UTempestAttributesComponents_InitializeAttributesComponent = FName(TEXT("InitializeAttributesComponent"));
	void UTempestAttributesComponents::InitializeAttributesComponent(TArray<TSubclassOf<UTempestBaseAttributeObject> > const& NewAttributesToCreate)
	{
		TempestAttributesComponents_eventInitializeAttributesComponent_Parms Parms;
		Parms.NewAttributesToCreate=NewAttributesToCreate;
		ProcessEvent(FindFunctionChecked(NAME_UTempestAttributesComponents_InitializeAttributesComponent),&Parms);
	}
	void UTempestAttributesComponents::StaticRegisterNativesUTempestAttributesComponents()
	{
		UClass* Class = UTempestAttributesComponents::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToActiveAttributeModifiers", &UTempestAttributesComponents::execAddToActiveAttributeModifiers },
			{ "AssignAttributes", &UTempestAttributesComponents::execAssignAttributes },
			{ "ClearAttributes", &UTempestAttributesComponents::execClearAttributes },
			{ "ConstructAttributeModifierOfClass", &UTempestAttributesComponents::execConstructAttributeModifierOfClass },
			{ "ConstructAttributeOfClass", &UTempestAttributesComponents::execConstructAttributeOfClass },
			{ "GetActiveAttributeModifierOfClass", &UTempestAttributesComponents::execGetActiveAttributeModifierOfClass },
			{ "GetAttributeOfClass", &UTempestAttributesComponents::execGetAttributeOfClass },
			{ "GetAttributeOfGameplayTag", &UTempestAttributesComponents::execGetAttributeOfGameplayTag },
			{ "RemoveFromActiveAttributeModifiers", &UTempestAttributesComponents::execRemoveFromActiveAttributeModifiers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTempestAttributesComponents_AddToActiveAttributeModifiers_Statics
	{
		struct TempestAttributesComponents_eventAddToActiveAttributeModifiers_Parms
		{
			UTempestBaseAttributeModifier* AttributeModifierToAdd;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeModifierToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_AddToActiveAttributeModifiers_Statics::NewProp_AttributeModifierToAdd = { "AttributeModifierToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttributesComponents_eventAddToActiveAttributeModifiers_Parms, AttributeModifierToAdd), Z_Construct_UClass_UTempestBaseAttributeModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestAttributesComponents_AddToActiveAttributeModifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_AddToActiveAttributeModifiers_Statics::NewProp_AttributeModifierToAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttributesComponents_AddToActiveAttributeModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Construction" },
		{ "ModuleRelativePath", "Public/Components/TempestAttributesComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttributesComponents_AddToActiveAttributeModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttributesComponents, nullptr, "AddToActiveAttributeModifiers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestAttributesComponents_AddToActiveAttributeModifiers_Statics::TempestAttributesComponents_eventAddToActiveAttributeModifiers_Parms), Z_Construct_UFunction_UTempestAttributesComponents_AddToActiveAttributeModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_AddToActiveAttributeModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttributesComponents_AddToActiveAttributeModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_AddToActiveAttributeModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttributesComponents_AddToActiveAttributeModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttributesComponents_AddToActiveAttributeModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestAttributesComponents_AssignAttributes_Statics
	{
		struct TempestAttributesComponents_eventAssignAttributes_Parms
		{
			TArray<UTempestBaseAttributeObject*> AttributesToAssign;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributesToAssign_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributesToAssign;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_AssignAttributes_Statics::NewProp_AttributesToAssign_Inner = { "AttributesToAssign", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTempestBaseAttributeObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_AssignAttributes_Statics::NewProp_AttributesToAssign = { "AttributesToAssign", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttributesComponents_eventAssignAttributes_Parms, AttributesToAssign), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestAttributesComponents_AssignAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_AssignAttributes_Statics::NewProp_AttributesToAssign_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_AssignAttributes_Statics::NewProp_AttributesToAssign,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttributesComponents_AssignAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Construction" },
		{ "ModuleRelativePath", "Public/Components/TempestAttributesComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttributesComponents_AssignAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttributesComponents, nullptr, "AssignAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestAttributesComponents_AssignAttributes_Statics::TempestAttributesComponents_eventAssignAttributes_Parms), Z_Construct_UFunction_UTempestAttributesComponents_AssignAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_AssignAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttributesComponents_AssignAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_AssignAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttributesComponents_AssignAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttributesComponents_AssignAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestAttributesComponents_ClearAttributes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttributesComponents_ClearAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Construction" },
		{ "ModuleRelativePath", "Public/Components/TempestAttributesComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttributesComponents_ClearAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttributesComponents, nullptr, "ClearAttributes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttributesComponents_ClearAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_ClearAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttributesComponents_ClearAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttributesComponents_ClearAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass_Statics
	{
		struct TempestAttributesComponents_eventConstructAttributeModifierOfClass_Parms
		{
			TSubclassOf<UTempestBaseAttributeModifier>  AttributeModifierToConstruct;
			FAttributeModifierProperties ModiferProperties;
			UTempestBaseAttributeModifier* ConstructedAttributeModifier;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeModifierToConstruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModiferProperties;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstructedAttributeModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass_Statics::NewProp_AttributeModifierToConstruct = { "AttributeModifierToConstruct", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttributesComponents_eventConstructAttributeModifierOfClass_Parms, AttributeModifierToConstruct), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseAttributeModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass_Statics::NewProp_ModiferProperties = { "ModiferProperties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttributesComponents_eventConstructAttributeModifierOfClass_Parms, ModiferProperties), Z_Construct_UScriptStruct_FAttributeModifierProperties, METADATA_PARAMS(nullptr, 0) }; // 1559468285
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass_Statics::NewProp_ConstructedAttributeModifier = { "ConstructedAttributeModifier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttributesComponents_eventConstructAttributeModifierOfClass_Parms, ConstructedAttributeModifier), Z_Construct_UClass_UTempestBaseAttributeModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass_Statics::NewProp_AttributeModifierToConstruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass_Statics::NewProp_ModiferProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass_Statics::NewProp_ConstructedAttributeModifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Construction" },
		{ "ModuleRelativePath", "Public/Components/TempestAttributesComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttributesComponents, nullptr, "ConstructAttributeModifierOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass_Statics::TempestAttributesComponents_eventConstructAttributeModifierOfClass_Parms), Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeOfClass_Statics
	{
		struct TempestAttributesComponents_eventConstructAttributeOfClass_Parms
		{
			TSubclassOf<UTempestBaseAttributeObject>  AttributeToConstruct;
			UTempestBaseAttributeObject* ConstructedAttribute;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeToConstruct;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstructedAttribute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeOfClass_Statics::NewProp_AttributeToConstruct = { "AttributeToConstruct", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttributesComponents_eventConstructAttributeOfClass_Parms, AttributeToConstruct), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseAttributeObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeOfClass_Statics::NewProp_ConstructedAttribute = { "ConstructedAttribute", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttributesComponents_eventConstructAttributeOfClass_Parms, ConstructedAttribute), Z_Construct_UClass_UTempestBaseAttributeObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeOfClass_Statics::NewProp_AttributeToConstruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeOfClass_Statics::NewProp_ConstructedAttribute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Construction" },
		{ "Comment", "/* Construction */" },
		{ "ModuleRelativePath", "Public/Components/TempestAttributesComponents.h" },
		{ "ToolTip", "Construction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttributesComponents, nullptr, "ConstructAttributeOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeOfClass_Statics::TempestAttributesComponents_eventConstructAttributeOfClass_Parms), Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestAttributesComponents_GetActiveAttributeModifierOfClass_Statics
	{
		struct TempestAttributesComponents_eventGetActiveAttributeModifierOfClass_Parms
		{
			TSubclassOf<UTempestBaseAttributeModifier>  AttributeModifierToSearch;
			UTempestBaseAttributeModifier* FoundAttributeModifier;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeModifierToSearch;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundAttributeModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_GetActiveAttributeModifierOfClass_Statics::NewProp_AttributeModifierToSearch = { "AttributeModifierToSearch", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttributesComponents_eventGetActiveAttributeModifierOfClass_Parms, AttributeModifierToSearch), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseAttributeModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_GetActiveAttributeModifierOfClass_Statics::NewProp_FoundAttributeModifier = { "FoundAttributeModifier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttributesComponents_eventGetActiveAttributeModifierOfClass_Parms, FoundAttributeModifier), Z_Construct_UClass_UTempestBaseAttributeModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestAttributesComponents_GetActiveAttributeModifierOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_GetActiveAttributeModifierOfClass_Statics::NewProp_AttributeModifierToSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_GetActiveAttributeModifierOfClass_Statics::NewProp_FoundAttributeModifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttributesComponents_GetActiveAttributeModifierOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestAttributesComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttributesComponents_GetActiveAttributeModifierOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttributesComponents, nullptr, "GetActiveAttributeModifierOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestAttributesComponents_GetActiveAttributeModifierOfClass_Statics::TempestAttributesComponents_eventGetActiveAttributeModifierOfClass_Parms), Z_Construct_UFunction_UTempestAttributesComponents_GetActiveAttributeModifierOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_GetActiveAttributeModifierOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttributesComponents_GetActiveAttributeModifierOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_GetActiveAttributeModifierOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttributesComponents_GetActiveAttributeModifierOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttributesComponents_GetActiveAttributeModifierOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfClass_Statics
	{
		struct TempestAttributesComponents_eventGetAttributeOfClass_Parms
		{
			TSubclassOf<UTempestBaseAttributeObject>  AttributeToSearch;
			UTempestBaseAttributeObject* FoundAttribute;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeToSearch;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundAttribute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfClass_Statics::NewProp_AttributeToSearch = { "AttributeToSearch", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttributesComponents_eventGetAttributeOfClass_Parms, AttributeToSearch), Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseAttributeObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfClass_Statics::NewProp_FoundAttribute = { "FoundAttribute", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttributesComponents_eventGetAttributeOfClass_Parms, FoundAttribute), Z_Construct_UClass_UTempestBaseAttributeObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfClass_Statics::NewProp_AttributeToSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfClass_Statics::NewProp_FoundAttribute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestAttributesComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttributesComponents, nullptr, "GetAttributeOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfClass_Statics::TempestAttributesComponents_eventGetAttributeOfClass_Parms), Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfGameplayTag_Statics
	{
		struct TempestAttributesComponents_eventGetAttributeOfGameplayTag_Parms
		{
			FGameplayTag AttributeGameplayTag;
			UTempestBaseAttributeObject* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeGameplayTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfGameplayTag_Statics::NewProp_AttributeGameplayTag = { "AttributeGameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttributesComponents_eventGetAttributeOfGameplayTag_Parms, AttributeGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttributesComponents_eventGetAttributeOfGameplayTag_Parms, ReturnValue), Z_Construct_UClass_UTempestBaseAttributeObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfGameplayTag_Statics::NewProp_AttributeGameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Public/Components/TempestAttributesComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttributesComponents, nullptr, "GetAttributeOfGameplayTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfGameplayTag_Statics::TempestAttributesComponents_eventGetAttributeOfGameplayTag_Parms), Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewAttributesToCreate_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAttributesToCreate_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewAttributesToCreate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent_Statics::NewProp_NewAttributesToCreate_Inner = { "NewAttributesToCreate", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTempestBaseAttributeObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent_Statics::NewProp_NewAttributesToCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent_Statics::NewProp_NewAttributesToCreate = { "NewAttributesToCreate", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttributesComponents_eventInitializeAttributesComponent_Parms, NewAttributesToCreate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent_Statics::NewProp_NewAttributesToCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent_Statics::NewProp_NewAttributesToCreate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent_Statics::NewProp_NewAttributesToCreate_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent_Statics::NewProp_NewAttributesToCreate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization Functions" },
		{ "ModuleRelativePath", "Public/Components/TempestAttributesComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttributesComponents, nullptr, "InitializeAttributesComponent", nullptr, nullptr, sizeof(TempestAttributesComponents_eventInitializeAttributesComponent_Parms), Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestAttributesComponents_RemoveFromActiveAttributeModifiers_Statics
	{
		struct TempestAttributesComponents_eventRemoveFromActiveAttributeModifiers_Parms
		{
			UTempestBaseAttributeModifier* AttributeModifierToRemove;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeModifierToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestAttributesComponents_RemoveFromActiveAttributeModifiers_Statics::NewProp_AttributeModifierToRemove = { "AttributeModifierToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestAttributesComponents_eventRemoveFromActiveAttributeModifiers_Parms, AttributeModifierToRemove), Z_Construct_UClass_UTempestBaseAttributeModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestAttributesComponents_RemoveFromActiveAttributeModifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestAttributesComponents_RemoveFromActiveAttributeModifiers_Statics::NewProp_AttributeModifierToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestAttributesComponents_RemoveFromActiveAttributeModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Construction" },
		{ "ModuleRelativePath", "Public/Components/TempestAttributesComponents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestAttributesComponents_RemoveFromActiveAttributeModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestAttributesComponents, nullptr, "RemoveFromActiveAttributeModifiers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestAttributesComponents_RemoveFromActiveAttributeModifiers_Statics::TempestAttributesComponents_eventRemoveFromActiveAttributeModifiers_Parms), Z_Construct_UFunction_UTempestAttributesComponents_RemoveFromActiveAttributeModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_RemoveFromActiveAttributeModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestAttributesComponents_RemoveFromActiveAttributeModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestAttributesComponents_RemoveFromActiveAttributeModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestAttributesComponents_RemoveFromActiveAttributeModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestAttributesComponents_RemoveFromActiveAttributeModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestAttributesComponents);
	UClass* Z_Construct_UClass_UTempestAttributesComponents_NoRegister()
	{
		return UTempestAttributesComponents::StaticClass();
	}
	struct Z_Construct_UClass_UTempestAttributesComponents_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedAttributes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedActiveAttributeModifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedActiveAttributeModifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CreatedActiveAttributeModifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestAttributesComponents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestAttributesComponents_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestAttributesComponents_AddToActiveAttributeModifiers, "AddToActiveAttributeModifiers" }, // 2701247253
		{ &Z_Construct_UFunction_UTempestAttributesComponents_AssignAttributes, "AssignAttributes" }, // 2267728098
		{ &Z_Construct_UFunction_UTempestAttributesComponents_ClearAttributes, "ClearAttributes" }, // 3581616505
		{ &Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeModifierOfClass, "ConstructAttributeModifierOfClass" }, // 1541225783
		{ &Z_Construct_UFunction_UTempestAttributesComponents_ConstructAttributeOfClass, "ConstructAttributeOfClass" }, // 2400568218
		{ &Z_Construct_UFunction_UTempestAttributesComponents_GetActiveAttributeModifierOfClass, "GetActiveAttributeModifierOfClass" }, // 2823415010
		{ &Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfClass, "GetAttributeOfClass" }, // 1822955934
		{ &Z_Construct_UFunction_UTempestAttributesComponents_GetAttributeOfGameplayTag, "GetAttributeOfGameplayTag" }, // 2029297132
		{ &Z_Construct_UFunction_UTempestAttributesComponents_InitializeAttributesComponent, "InitializeAttributesComponent" }, // 3332867796
		{ &Z_Construct_UFunction_UTempestAttributesComponents_RemoveFromActiveAttributeModifiers, "RemoveFromActiveAttributeModifiers" }, // 335709220
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestAttributesComponents_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/TempestAttributesComponents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/TempestAttributesComponents.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestAttributesComponents_Statics::NewProp_CreatedAttributes_Inner = { "CreatedAttributes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTempestBaseAttributeObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestAttributesComponents_Statics::NewProp_CreatedAttributes_MetaData[] = {
		{ "Category", "Attribute Base Variables" },
		{ "ModuleRelativePath", "Public/Components/TempestAttributesComponents.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestAttributesComponents_Statics::NewProp_CreatedAttributes = { "CreatedAttributes", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestAttributesComponents, CreatedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestAttributesComponents_Statics::NewProp_CreatedAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestAttributesComponents_Statics::NewProp_CreatedAttributes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestAttributesComponents_Statics::NewProp_CreatedActiveAttributeModifiers_Inner = { "CreatedActiveAttributeModifiers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTempestBaseAttributeModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestAttributesComponents_Statics::NewProp_CreatedActiveAttributeModifiers_MetaData[] = {
		{ "Category", "Attribute Base Variables" },
		{ "ModuleRelativePath", "Public/Components/TempestAttributesComponents.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTempestAttributesComponents_Statics::NewProp_CreatedActiveAttributeModifiers = { "CreatedActiveAttributeModifiers", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestAttributesComponents, CreatedActiveAttributeModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTempestAttributesComponents_Statics::NewProp_CreatedActiveAttributeModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestAttributesComponents_Statics::NewProp_CreatedActiveAttributeModifiers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestAttributesComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestAttributesComponents_Statics::NewProp_CreatedAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestAttributesComponents_Statics::NewProp_CreatedAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestAttributesComponents_Statics::NewProp_CreatedActiveAttributeModifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestAttributesComponents_Statics::NewProp_CreatedActiveAttributeModifiers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestAttributesComponents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestAttributesComponents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestAttributesComponents_Statics::ClassParams = {
		&UTempestAttributesComponents::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestAttributesComponents_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestAttributesComponents_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestAttributesComponents_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestAttributesComponents_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestAttributesComponents()
	{
		if (!Z_Registration_Info_UClass_UTempestAttributesComponents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestAttributesComponents.OuterSingleton, Z_Construct_UClass_UTempestAttributesComponents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestAttributesComponents.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestAttributesComponents>()
	{
		return UTempestAttributesComponents::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestAttributesComponents);
	UTempestAttributesComponents::~UTempestAttributesComponents() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestAttributesComponents_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestAttributesComponents_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestAttributesComponents, UTempestAttributesComponents::StaticClass, TEXT("UTempestAttributesComponents"), &Z_Registration_Info_UClass_UTempestAttributesComponents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestAttributesComponents), 1748120224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestAttributesComponents_h_1319036341(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestAttributesComponents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Components_TempestAttributesComponents_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
