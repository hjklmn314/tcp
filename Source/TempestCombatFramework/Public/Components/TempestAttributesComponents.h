// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "Objects/TempestBaseAttributeModifier.h"
#include "TempestAttributesComponents.generated.h"

class UTempestBaseAttributeObject;
class UTempestBaseAttributeModifier;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class TEMPESTCOMBATFRAMEWORK_API UTempestAttributesComponents : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTempestAttributesComponents();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Attribute Base Variables")
	TArray<UTempestBaseAttributeObject*> CreatedAttributes;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Attribute Base Variables")
	TArray<UTempestBaseAttributeModifier*> CreatedActiveAttributeModifiers;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable, Category = "Initialization Functions")
	void InitializeAttributesComponent(const TArray<TSubclassOf<UTempestBaseAttributeObject>>& NewAttributesToCreate);
	virtual void InitializeAttributesComponent_Implementation(const TArray<TSubclassOf<UTempestBaseAttributeObject>>& NewAttributesToCreate);

	UFUNCTION(BlueprintCallable, Category = "Construction")
	void AssignAttributes(TArray<UTempestBaseAttributeObject*> AttributesToAssign);

	UFUNCTION(BlueprintCallable, Category = "Construction")
	void ClearAttributes();

	/* Construction */
	UFUNCTION(BlueprintCallable, Category = "Construction")
	void ConstructAttributeOfClass(TSubclassOf<UTempestBaseAttributeObject> AttributeToConstruct, UTempestBaseAttributeObject*& ConstructedAttribute);

	UFUNCTION(BlueprintCallable, Category = "Construction")
	void ConstructAttributeModifierOfClass(TSubclassOf<UTempestBaseAttributeModifier> AttributeModifierToConstruct, FAttributeModifierProperties ModiferProperties,UTempestBaseAttributeModifier*& ConstructedAttributeModifier);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	void GetAttributeOfClass(TSubclassOf<UTempestBaseAttributeObject> AttributeToSearch, UTempestBaseAttributeObject*& FoundAttribute);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	void GetActiveAttributeModifierOfClass(TSubclassOf<UTempestBaseAttributeModifier> AttributeModifierToSearch, UTempestBaseAttributeModifier*& FoundAttributeModifier);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Getters")
	UTempestBaseAttributeObject* GetAttributeOfGameplayTag(FGameplayTag AttributeGameplayTag);


	UFUNCTION(BlueprintCallable, Category = "Construction")
	void RemoveFromActiveAttributeModifiers(UTempestBaseAttributeModifier* AttributeModifierToRemove);

	UFUNCTION(BlueprintCallable, Category = "Construction")
	void AddToActiveAttributeModifiers(UTempestBaseAttributeModifier* AttributeModifierToAdd);
	
};
