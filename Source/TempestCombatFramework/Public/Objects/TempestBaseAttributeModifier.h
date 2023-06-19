// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Objects/TempestBaseObject.h"
#include "TempestBaseAttributeModifier.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FAttributeModifierProperties
{

	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="Base Attribute Modifier Properties", meta = (ExposeOnSpawn))
	FGameplayTag AttributeToModify;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Attribute Modifier Properties")
	bool bIndefinite = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Attribute Modifier Properties", meta = (EditCondition = "!bIndefinite", EditConditionHides))
	float ModificationDuration = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Attribute Modifier Properties")
	float ModificationInterval = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Attribute Modifier Properties")
	float AmountToAdd = 1.f;

};


UCLASS()
class TEMPESTCOMBATFRAMEWORK_API UTempestBaseAttributeModifier : public UTempestBaseObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "Attribute Modifier Initialization")
	FAttributeModifierProperties ModiferProperties;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Attribute Modifier Base Functions")
	void ConstructAttributeModifier();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Attribute Modifier Base Functions")
	void StartAttributeModifier();
	
};
