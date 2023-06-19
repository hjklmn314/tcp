// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Objects/TempestBaseObject.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "TempestAttackPropertiesObject.generated.h"

/**
 * 
 */
UCLASS(Abstract, BlueprintType, EditInlineNew)
class TEMPESTCOMBATFRAMEWORK_API UTempestAttackPropertiesObject : public UTempestBaseObject
{

	GENERATED_BODY()

public:
	UTempestAttackPropertiesObject();

	UPROPERTY()
	AActor* AttackPropertyOwner;

	UPROPERTY()
	FHitResult HitResult;

	UPROPERTY()
	FGameplayTag ImpactResult;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Base Functions")
	AActor* GetAttackPropertyOwner() { return AttackPropertyOwner; }

	UFUNCTION(BlueprintCallable, Category = "Base Functions")
	void SetAttackPropertyOwner(AActor* NewAttacker) { AttackPropertyOwner = NewAttacker; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Base Functions")
	FHitResult GetHitResult() { return HitResult; }

	UFUNCTION(BlueprintCallable, Category = "Base Functions")
	void SetHitResult(FHitResult NewHitResult) { HitResult = NewHitResult; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Base Functions")
	FGameplayTag GetImpactResult() { return ImpactResult; }

	UFUNCTION(BlueprintCallable, Category = "Base Functions")
	void SetImpactResult(FGameplayTag NewImpactResult) { ImpactResult = NewImpactResult; }


	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Base Functions")
	void ConstructAttackPropertry();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Base Functions")
	void ProcessAttackPropertry();

protected:


};
