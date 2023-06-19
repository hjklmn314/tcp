// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "TempestBaseObject.h"
#include "TempestBaseAbilityObject.generated.h"

/**
 * 
 */

UCLASS()
class TEMPESTCOMBATFRAMEWORK_API UTempestBaseAbilityObject : public UTempestBaseObject
{
	GENERATED_BODY()
public:
	UTempestBaseAbilityObject();




	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Properties")
	FGameplayTag AbilityGameplayTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Properties")
	bool bHasCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Controls", meta = (EditCondition = "bHasCooldown"))
	float CooldownDuration = 0.f;


protected:
	UPROPERTY(BlueprintReadWrite, Category = "Ability Properties")
	class UAnimMontage* ActiveAbilityMontage;

	UPROPERTY()
	AActor* PerformingActor;

	UPROPERTY(BlueprintReadWrite, Category = "Cooldown")
	bool bAbilityOnCooldown;

public:
			/* Ability Main Functions */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Ability Base Functions")
	void ConstructAbility();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Ability Base Functions")
	void StartAbility();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Ability Base Functions")
	void TickAbility(float TickTime);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Ability Base Functions")
	void EndAbility();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Ability Base Functions")
	void InterruptAbility();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Ability Base Functions")
	void CancelAbility();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Ability Base Functions")
	void ApplyAbilityCooldown();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Ability Base Functions")
	void CooldownReset();

			/* Ability Getters */
	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, BlueprintCallable, Category = "Ability Getters")
	bool CanPerformAbility();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, BlueprintCallable, Category = "Ability Getters")
	bool CanRePerformAbility();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, BlueprintCallable, Category = "Ability Getters")
	bool CanIntteruptAbility();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, BlueprintCallable, Category = "Ability Getters")
	bool CanAbilityBeCanceled();

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, BlueprintCallable, Category = "Ability Getters")
	bool GetIsAbilityOnCooldown();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Ability Getters")
	void GetPerformingActor(AActor*& CurrentPerformingActor) { CurrentPerformingActor = PerformingActor; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Ability Getters")
	void GetActiveAbilityMontage(UAnimMontage*& CurrentActiveMontage) { CurrentActiveMontage = ActiveAbilityMontage; }


				/* Ability Setters */
	UFUNCTION(BlueprintCallable, Category = "Ability Setters")
	void SetActiveAbilityMontage(UAnimMontage* NewActiveMontage) { ActiveAbilityMontage = NewActiveMontage; }

	UFUNCTION(BlueprintCallable, Category = "Ability Setters")
	void SetPerformingActor(AActor* NewPerformingActor){PerformingActor = NewPerformingActor;}
};
