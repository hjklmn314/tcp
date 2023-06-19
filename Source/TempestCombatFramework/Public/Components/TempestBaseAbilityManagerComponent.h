// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Objects/TempestBaseAbilityObject.h"
#include "GameplayTagContainer.h"
#include "TempestBaseAbilityManagerComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdatedActiveAbility);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class TEMPESTCOMBATFRAMEWORK_API UTempestBaseAbilityManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTempestBaseAbilityManagerComponent();

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Base Dispatchers")
	FOnUpdatedActiveAbility OnUpdatedActiveAbility;

	UPROPERTY(VisibleAnywhere, Category = "Base Variables")
	UTempestBaseAbilityObject* CurrentActiveAbility;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Base Variables")
	TArray<UTempestBaseAbilityObject*> PassiveAbilities;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Base Variables")
	TArray<UTempestBaseAbilityObject*> ActivatableAbilities;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Initialization Functions")
	void InitializeAbilitySystemComponent();
	virtual void InitializeAbilitySystemComponent_Implementation();

	UFUNCTION(BlueprintCallable, Category = "Performing Ability")
	void PerformAbilityOfClass(TSubclassOf<UTempestBaseAbilityObject> AbilityToSet);
	
	UFUNCTION(BlueprintCallable, Category = "Performing Ability")
	bool TryPerformAbilityOfClass(TSubclassOf<UTempestBaseAbilityObject> AbilityToSet, bool ConditionCheck = true);

	UFUNCTION(BlueprintCallable, Category = "Performing Ability")
	bool TryPerformAbilitiesOfClass(TArray <TSubclassOf<UTempestBaseAbilityObject>> AbilitiesToSet, bool ConditionCheck = true);

	UFUNCTION(BlueprintCallable, Category = "Performing Ability")
	void SetCurrentActiveAbility(UTempestBaseAbilityObject* NewCurrentActiveAbility);

	UFUNCTION(BlueprintCallable, Category = "Performing Ability")
	void SetAsPassiveAbility(UTempestBaseAbilityObject* NewPassiveAbility);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Performing Ability")
	void EndAbilityOfClass(TSubclassOf<UTempestBaseAbilityObject> AbilityToEnd, bool bInterrupt);

	UFUNCTION(BlueprintCallable, Category = "Performing Ability")
	void RemoveFromPassiveAbilities(UTempestBaseAbilityObject* AbilityToRemove) { PassiveAbilities.Remove(AbilityToRemove); }

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Performing Ability")
	void ResetAbilityComponent();




	/* Getters */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	UTempestBaseAbilityObject* GetCurrentActiveAbility();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	void GetAbilityOfClass(TSubclassOf<UTempestBaseAbilityObject> AbilityToSearch, UTempestBaseAbilityObject*& FoundAbility);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	bool GetCanPerformAbilityOfClass(TSubclassOf<UTempestBaseAbilityObject> AbilityToSearch);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	void GetPassiveAbilities(TArray<UTempestBaseAbilityObject*>& PassiveAbilitiesArray) { PassiveAbilitiesArray = PassiveAbilities; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	void GetActivatableAbilities(TArray<UTempestBaseAbilityObject*>& ActivatableAbilitiesArray) { ActivatableAbilitiesArray = ActivatableAbilities; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	void GetChildAbilityOfClass(TSubclassOf<UTempestBaseAbilityObject> AbilityToSearch, UTempestBaseAbilityObject*& FoundAbility);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	UTempestBaseAbilityObject* GetAbilityOfGameplayTag(FGameplayTag AbilityGameplayTag);



	/* Construction */
	UFUNCTION(BlueprintCallable, Category = "Construction")
	void ConstructAbilityOfClass(TSubclassOf<UTempestBaseAbilityObject> AbilityToConstruct, UTempestBaseAbilityObject*& ConstructedAbility);
		
	/* Clears All The Arrays Associated For Finding and Setting Abilities*/
	UFUNCTION(BlueprintCallable, Category = "Clear")
	void ClearAbilityComponent(){PassiveAbilities.Empty(); ActivatableAbilities.Empty(); CurrentActiveAbility = nullptr;}
};
