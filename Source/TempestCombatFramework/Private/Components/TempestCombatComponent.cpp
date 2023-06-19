// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 


#include "Components/TempestCombatComponent.h"
#include "Objects/TempestBaseBuffObject.h"
#include "Objects/TempestAttackPropertiesObject.h"
#include "Objects/TempestDefensePropertiesObject.h"
#include "Objects/TempestBaseConditionObject.h"

// Sets default values for this component's properties
UTempestCombatComponent::UTempestCombatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTempestCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTempestCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UTempestCombatComponent::ModifyCombatStatus(FGameplayTag CombatStatusToModify, EModifyingType ModifyType)
{
	if (ModifyType == EModifyingType::Add)
	{
		CombatStatusContainer.AddTag(CombatStatusToModify);
	}
	else
	{
		CombatStatusContainer.RemoveTag(CombatStatusToModify);
	}
}

UTempestBaseConditionObject* UTempestCombatComponent::GetCombatConditionOfGameplayTag(FGameplayTag ConditionGameplayTag)
{
	UTempestBaseConditionObject* LocalCondition = nullptr;
	for (int32 i = 0; i < CombatConditions.Num(); i++)
	{
		if (CombatConditions[i])
		{
			if (CombatConditions[i]->ConditionGameplayTag == ConditionGameplayTag)
			{
				LocalCondition = CombatConditions[i];
				return LocalCondition;
			}
		}
	}

	return LocalCondition;
}

void UTempestCombatComponent::ConstructDefensePropertyOfClass(TSubclassOf<UTempestDefensePropertiesObject> PropertyToConstruct, UTempestDefensePropertiesObject*& ConstructedProperty)
{
	ConstructedProperty = nullptr;
	if (PropertyToConstruct)
	{
		UTempestDefensePropertiesObject* LocalNewProperty;
		LocalNewProperty = NewObject<UTempestDefensePropertiesObject>(GetOwner(), PropertyToConstruct);

		LocalNewProperty->SetDefensePropertyOwner(GetOwner());
		LocalNewProperty->ConstructDefenseProperty();
		ConstructedProperty = LocalNewProperty;
	}
}

