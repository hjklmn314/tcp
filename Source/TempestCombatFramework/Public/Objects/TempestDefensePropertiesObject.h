// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Objects/TempestBaseObject.h"
#include "TempestDefensePropertiesObject.generated.h"

/**
 * 
 */
UCLASS()
class TEMPESTCOMBATFRAMEWORK_API UTempestDefensePropertiesObject : public UTempestBaseObject
{
	GENERATED_BODY()
public:

	UPROPERTY()
	AActor* DefensePropertyOwner;
	
	UPROPERTY(BlueprintReadOnly, Category = "Base Variables")
	FGameplayTag ImpactResult;


	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Base Functions")
	AActor* GetDefensePropertyOwner() { return DefensePropertyOwner; }

	UFUNCTION(BlueprintCallable, Category = "Base Functions")
	void SetDefensePropertyOwner(AActor* NewOwner) { DefensePropertyOwner = NewOwner; }

	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable, Category = "Base Functions")
	void ConstructDefenseProperty();
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Base Functions")
	void ProcessReceivedAttack();

	UFUNCTION(BlueprintCallable, Category = "Base Functions")
	void SetImpactResult(FGameplayTag NewImpactResult){ImpactResult = NewImpactResult;}

	
};
