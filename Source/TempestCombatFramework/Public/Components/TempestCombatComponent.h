// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include <Engine/EngineTypes.h>
#include "TempestCombatComponent.generated.h"

UENUM(BlueprintType)
enum class EModifyingType : uint8
{
	Add			UMETA(DisplayName="Add"),
	Remove		UMETA(DisplayName = "Remove"),

};

class UTempestBaseBuffObject;
class UTempestBaseConditionObject;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class TEMPESTCOMBATFRAMEWORK_API UTempestCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTempestCombatComponent();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tempest Combat Status")
	FGameplayTagContainer CombatStatusContainer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tempest Combat Buffs")
	TArray<UTempestBaseBuffObject*> AppliedBuffs;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tempest Combat Conditions")
	TArray<UTempestBaseConditionObject*> CombatConditions;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tempest Combat Properties")
	UTempestDefensePropertiesObject* OwnerDefenseProperty;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tempest Combat Properties")
	UTempestAttackPropertiesObject* OwnerAttackProperty;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tempest Combat Properties")
	UTempestAttackPropertiesObject* ReceivedAttackProperty;



protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	UFUNCTION(BlueprintCallable, Category = "Combat Status Setters")
	void ModifyCombatStatus(FGameplayTag CombatStatusToModify, EModifyingType ModifyType);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Combat Status Getters")
	FGameplayTagContainer GetCombatStatus(){return CombatStatusContainer;}

	UFUNCTION(BlueprintCallable, Category = "Combat Status Setters")
	void AddToAppliedBuffs(UTempestBaseBuffObject* BuffToAdd){AppliedBuffs.AddUnique(BuffToAdd);}

	UFUNCTION(BlueprintCallable, Category = "Combat Status Setters")
	void RemoveFromAppliedBuffs(UTempestBaseBuffObject* BuffToRemove){AppliedBuffs.Remove(BuffToRemove);}

	UFUNCTION(BlueprintCallable, Category = "Combat Status Setters")
	void SetReceivedAttackProperty(UTempestAttackPropertiesObject* NewAttackProperty){ReceivedAttackProperty = NewAttackProperty;}

	UFUNCTION(BlueprintCallable, Category = "Combat Status Setters")
	void SetAttackProperty(UTempestAttackPropertiesObject* NewAttackProperty) { OwnerAttackProperty = NewAttackProperty; }

	UFUNCTION(BlueprintCallable, Category = "Combat Status Setters")
	void SetDefenseProperty(UTempestDefensePropertiesObject* NewDefenseProperty) { OwnerDefenseProperty = NewDefenseProperty; }

	UFUNCTION(BlueprintCallable, Category = "Combat Status Setters")
	void AddToCombatConditions(UTempestBaseConditionObject* ConditionToAdd) { CombatConditions.AddUnique(ConditionToAdd); }

	UFUNCTION(BlueprintCallable, Category = "Combat Status Setters")
	void RemoveFromCombatConditions(UTempestBaseConditionObject* ConditionToRemove) { CombatConditions.Remove(ConditionToRemove); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Combat Condition Getters")
	UTempestBaseConditionObject* GetCombatConditionOfGameplayTag(FGameplayTag ConditionGameplayTag);

	/* Construction */
	UFUNCTION(BlueprintCallable, Category = "Construction")
	void ConstructDefensePropertyOfClass(TSubclassOf<UTempestDefensePropertiesObject> PropertyToConstruct, UTempestDefensePropertiesObject*& ConstructedProperty);


};
