// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempestCombatFramework/Public/Objects/TempestBaseAttributeObject.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempestBaseAttributeObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseAttributeObject();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseAttributeObject_NoRegister();
	TEMPESTCOMBATFRAMEWORK_API UClass* Z_Construct_UClass_UTempestBaseObject();
	TEMPESTCOMBATFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature();
	TEMPESTCOMBATFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeProperties();
	UPackage* Z_Construct_UPackage__Script_TempestCombatFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeProperties;
class UScriptStruct* FAttributeProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeProperties, Z_Construct_UPackage__Script_TempestCombatFramework(), TEXT("AttributeProperties"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeProperties.OuterSingleton;
}
template<> TEMPESTCOMBATFRAMEWORK_API UScriptStruct* StaticStruct<FAttributeProperties>()
{
	return FAttributeProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributeProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAttributeValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAttributeValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "Category", "Base Attribute Properties" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeProperties, AttributeValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewProp_AttributeValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewProp_MinAttributeValue_MetaData[] = {
		{ "Category", "Base Attribute Properties" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewProp_MinAttributeValue = { "MinAttributeValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeProperties, MinAttributeValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewProp_MinAttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewProp_MinAttributeValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewProp_MaxAttributeValue_MetaData[] = {
		{ "Category", "Base Attribute Properties" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewProp_MaxAttributeValue = { "MaxAttributeValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeProperties, MaxAttributeValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewProp_MaxAttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewProp_MaxAttributeValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewProp_MinAttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewProp_MaxAttributeValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
		nullptr,
		&NewStructOps,
		"AttributeProperties",
		sizeof(FAttributeProperties),
		alignof(FAttributeProperties),
		Z_Construct_UScriptStruct_FAttributeProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_AttributeProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeProperties.InnerSingleton, Z_Construct_UScriptStruct_FAttributeProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributeProperties.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature_Statics
	{
		struct _Script_TempestCombatFramework_eventOnValueUpdated_Parms
		{
			FGameplayTag UpdatedValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdatedValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature_Statics::NewProp_UpdatedValue = { "UpdatedValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TempestCombatFramework_eventOnValueUpdated_Parms, UpdatedValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature_Statics::NewProp_UpdatedValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TempestCombatFramework, nullptr, "OnValueUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature_Statics::_Script_TempestCombatFramework_eventOnValueUpdated_Parms), Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTempestBaseAttributeObject::execGetOwningActor)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_CurrentOwningActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOwningActor(Z_Param_Out_CurrentOwningActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTempestBaseAttributeObject::execSetOwningActor)
	{
		P_GET_OBJECT(AActor,Z_Param_NewOwningActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwningActor(Z_Param_NewOwningActor);
		P_NATIVE_END;
	}
	struct TempestBaseAttributeObject_eventModifyAttribute_Parms
	{
		float ModifyBy;
	};
	struct TempestBaseAttributeObject_eventTickAttribute_Parms
	{
		float TickTime;
	};
	static FName NAME_UTempestBaseAttributeObject_ConstructAttribute = FName(TEXT("ConstructAttribute"));
	void UTempestBaseAttributeObject::ConstructAttribute()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAttributeObject_ConstructAttribute),NULL);
	}
	static FName NAME_UTempestBaseAttributeObject_ModifyAttribute = FName(TEXT("ModifyAttribute"));
	void UTempestBaseAttributeObject::ModifyAttribute(float ModifyBy)
	{
		TempestBaseAttributeObject_eventModifyAttribute_Parms Parms;
		Parms.ModifyBy=ModifyBy;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAttributeObject_ModifyAttribute),&Parms);
	}
	static FName NAME_UTempestBaseAttributeObject_TickAttribute = FName(TEXT("TickAttribute"));
	void UTempestBaseAttributeObject::TickAttribute(float TickTime)
	{
		TempestBaseAttributeObject_eventTickAttribute_Parms Parms;
		Parms.TickTime=TickTime;
		ProcessEvent(FindFunctionChecked(NAME_UTempestBaseAttributeObject_TickAttribute),&Parms);
	}
	void UTempestBaseAttributeObject::StaticRegisterNativesUTempestBaseAttributeObject()
	{
		UClass* Class = UTempestBaseAttributeObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningActor", &UTempestBaseAttributeObject::execGetOwningActor },
			{ "SetOwningActor", &UTempestBaseAttributeObject::execSetOwningActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTempestBaseAttributeObject_ConstructAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAttributeObject_ConstructAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute Base Functions" },
		{ "Comment", "/* Attribute Main Functions */" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeObject.h" },
		{ "ToolTip", "Attribute Main Functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAttributeObject_ConstructAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAttributeObject, nullptr, "ConstructAttribute", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAttributeObject_ConstructAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAttributeObject_ConstructAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAttributeObject_ConstructAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAttributeObject_ConstructAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAttributeObject_GetOwningActor_Statics
	{
		struct TempestBaseAttributeObject_eventGetOwningActor_Parms
		{
			AActor* CurrentOwningActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentOwningActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseAttributeObject_GetOwningActor_Statics::NewProp_CurrentOwningActor = { "CurrentOwningActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAttributeObject_eventGetOwningActor_Parms, CurrentOwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAttributeObject_GetOwningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAttributeObject_GetOwningActor_Statics::NewProp_CurrentOwningActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAttributeObject_GetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute Getters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAttributeObject_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAttributeObject, nullptr, "GetOwningActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAttributeObject_GetOwningActor_Statics::TempestBaseAttributeObject_eventGetOwningActor_Parms), Z_Construct_UFunction_UTempestBaseAttributeObject_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAttributeObject_GetOwningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAttributeObject_GetOwningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAttributeObject_GetOwningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAttributeObject_GetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAttributeObject_GetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAttributeObject_ModifyAttribute_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ModifyBy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTempestBaseAttributeObject_ModifyAttribute_Statics::NewProp_ModifyBy = { "ModifyBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAttributeObject_eventModifyAttribute_Parms, ModifyBy), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAttributeObject_ModifyAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAttributeObject_ModifyAttribute_Statics::NewProp_ModifyBy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAttributeObject_ModifyAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAttributeObject_ModifyAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAttributeObject, nullptr, "ModifyAttribute", nullptr, nullptr, sizeof(TempestBaseAttributeObject_eventModifyAttribute_Parms), Z_Construct_UFunction_UTempestBaseAttributeObject_ModifyAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAttributeObject_ModifyAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAttributeObject_ModifyAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAttributeObject_ModifyAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAttributeObject_ModifyAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAttributeObject_ModifyAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAttributeObject_SetOwningActor_Statics
	{
		struct TempestBaseAttributeObject_eventSetOwningActor_Parms
		{
			AActor* NewOwningActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOwningActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTempestBaseAttributeObject_SetOwningActor_Statics::NewProp_NewOwningActor = { "NewOwningActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAttributeObject_eventSetOwningActor_Parms, NewOwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAttributeObject_SetOwningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAttributeObject_SetOwningActor_Statics::NewProp_NewOwningActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAttributeObject_SetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute Setters" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAttributeObject_SetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAttributeObject, nullptr, "SetOwningActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTempestBaseAttributeObject_SetOwningActor_Statics::TempestBaseAttributeObject_eventSetOwningActor_Parms), Z_Construct_UFunction_UTempestBaseAttributeObject_SetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAttributeObject_SetOwningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAttributeObject_SetOwningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAttributeObject_SetOwningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAttributeObject_SetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAttributeObject_SetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTempestBaseAttributeObject_TickAttribute_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTempestBaseAttributeObject_TickAttribute_Statics::NewProp_TickTime = { "TickTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TempestBaseAttributeObject_eventTickAttribute_Parms, TickTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTempestBaseAttributeObject_TickAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTempestBaseAttributeObject_TickAttribute_Statics::NewProp_TickTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTempestBaseAttributeObject_TickAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute Base Functions" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTempestBaseAttributeObject_TickAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTempestBaseAttributeObject, nullptr, "TickAttribute", nullptr, nullptr, sizeof(TempestBaseAttributeObject_eventTickAttribute_Parms), Z_Construct_UFunction_UTempestBaseAttributeObject_TickAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAttributeObject_TickAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTempestBaseAttributeObject_TickAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTempestBaseAttributeObject_TickAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTempestBaseAttributeObject_TickAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTempestBaseAttributeObject_TickAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTempestBaseAttributeObject);
	UClass* Z_Construct_UClass_UTempestBaseAttributeObject_NoRegister()
	{
		return UTempestBaseAttributeObject::StaticClass();
	}
	struct Z_Construct_UClass_UTempestBaseAttributeObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnValueUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValues_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeGameplayTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeGameplayTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTempestBaseAttributeObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTempestBaseObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TempestCombatFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTempestBaseAttributeObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTempestBaseAttributeObject_ConstructAttribute, "ConstructAttribute" }, // 1398564848
		{ &Z_Construct_UFunction_UTempestBaseAttributeObject_GetOwningActor, "GetOwningActor" }, // 2309269814
		{ &Z_Construct_UFunction_UTempestBaseAttributeObject_ModifyAttribute, "ModifyAttribute" }, // 3403815225
		{ &Z_Construct_UFunction_UTempestBaseAttributeObject_SetOwningActor, "SetOwningActor" }, // 3671907149
		{ &Z_Construct_UFunction_UTempestBaseAttributeObject_TickAttribute, "TickAttribute" }, // 3312401718
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAttributeObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Objects/TempestBaseAttributeObject.h" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_OnValueUpdated_MetaData[] = {
		{ "Category", "Base Dispatchers" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeObject.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_OnValueUpdated = { "OnValueUpdated", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseAttributeObject, OnValueUpdated), Z_Construct_UDelegateFunction_TempestCombatFramework_OnValueUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_OnValueUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_OnValueUpdated_MetaData)) }; // 2572367813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_AttributeValues_MetaData[] = {
		{ "Category", "Attribute Properties" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_AttributeValues = { "AttributeValues", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseAttributeObject, AttributeValues), Z_Construct_UScriptStruct_FAttributeProperties, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_AttributeValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_AttributeValues_MetaData)) }; // 1194846934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_AttributeGameplayTag_MetaData[] = {
		{ "Category", "Attribute Properties" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_AttributeGameplayTag = { "AttributeGameplayTag", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseAttributeObject, AttributeGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_AttributeGameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_AttributeGameplayTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_OwningActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Objects/TempestBaseAttributeObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTempestBaseAttributeObject, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_OwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_OwningActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTempestBaseAttributeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_OnValueUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_AttributeValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_AttributeGameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTempestBaseAttributeObject_Statics::NewProp_OwningActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTempestBaseAttributeObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTempestBaseAttributeObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTempestBaseAttributeObject_Statics::ClassParams = {
		&UTempestBaseAttributeObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTempestBaseAttributeObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAttributeObject_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTempestBaseAttributeObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTempestBaseAttributeObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTempestBaseAttributeObject()
	{
		if (!Z_Registration_Info_UClass_UTempestBaseAttributeObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTempestBaseAttributeObject.OuterSingleton, Z_Construct_UClass_UTempestBaseAttributeObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTempestBaseAttributeObject.OuterSingleton;
	}
	template<> TEMPESTCOMBATFRAMEWORK_API UClass* StaticClass<UTempestBaseAttributeObject>()
	{
		return UTempestBaseAttributeObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTempestBaseAttributeObject);
	UTempestBaseAttributeObject::~UTempestBaseAttributeObject() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAttributeObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAttributeObject_h_Statics::ScriptStructInfo[] = {
		{ FAttributeProperties::StaticStruct, Z_Construct_UScriptStruct_FAttributeProperties_Statics::NewStructOps, TEXT("AttributeProperties"), &Z_Registration_Info_UScriptStruct_AttributeProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeProperties), 1194846934U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAttributeObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTempestBaseAttributeObject, UTempestBaseAttributeObject::StaticClass, TEXT("UTempestBaseAttributeObject"), &Z_Registration_Info_UClass_UTempestBaseAttributeObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTempestBaseAttributeObject), 2348608919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAttributeObject_h_3619532914(TEXT("/Script/TempestCombatFramework"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAttributeObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAttributeObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAttributeObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_TempestCombatFramework_Source_TempestCombatFramework_Public_Objects_TempestBaseAttributeObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
