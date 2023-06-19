// Created By Aamn Chahrour & Samrudh Sunil. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Objects/TempestBaseObject.h"
#include "TempestBaseConditionObject.generated.h"

/**
 * 
 */
UCLASS()
class TEMPESTCOMBATFRAMEWORK_API UTempestBaseConditionObject : public UTempestBaseObject
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Condition Properties")
	FGameplayTag ConditionGameplayTag;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Condition Base Functions")
	bool GetConditionResult();
	
};
