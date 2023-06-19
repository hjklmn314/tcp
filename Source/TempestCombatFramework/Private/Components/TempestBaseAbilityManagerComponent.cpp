// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 


#include "Components/TempestBaseAbilityManagerComponent.h"
#include "Kismet/KismetMathLibrary.h"


// Sets default values for this component's properties
UTempestBaseAbilityManagerComponent::UTempestBaseAbilityManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTempestBaseAbilityManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTempestBaseAbilityManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	if (PassiveAbilities.Num() > 0)
	{
		for (int32 i = 0; i < PassiveAbilities.Num(); i++)
		{

			if (PassiveAbilities[i])
			{
				PassiveAbilities[i]->TickAbility(DeltaTime);
			}

		}
	}

	if (CurrentActiveAbility)
	{
		CurrentActiveAbility->TickAbility(DeltaTime);
	}
}

void UTempestBaseAbilityManagerComponent::InitializeAbilitySystemComponent_Implementation()
{

}


void UTempestBaseAbilityManagerComponent::PerformAbilityOfClass(TSubclassOf<UTempestBaseAbilityObject> AbilityToSet)
{
	TryPerformAbilityOfClass(AbilityToSet, false);
}

bool UTempestBaseAbilityManagerComponent::TryPerformAbilityOfClass(TSubclassOf<UTempestBaseAbilityObject> AbilityToSet, bool ConditionCheck /*= true*/)
{
	if (AbilityToSet)
	{
		UTempestBaseAbilityObject* LocalAbility = nullptr;
		GetAbilityOfClass(AbilityToSet, LocalAbility);

		if (LocalAbility)
		{
			if (ConditionCheck)
			{
				if (LocalAbility->CanPerformAbility())
				{
					LocalAbility->StartAbility();
					return true;
				}
			}
			else
			{

				LocalAbility->StartAbility();
				return true;
			}

			return false;
		}
		else
		{
			ConstructAbilityOfClass(AbilityToSet, LocalAbility);

			if (ConditionCheck)
			{
				if (LocalAbility->CanPerformAbility())
				{
					LocalAbility->StartAbility();

					return true;
				}
			}
			else
			{
				LocalAbility->StartAbility();

				return true;
			}
		}
	}
	return false;
}

bool UTempestBaseAbilityManagerComponent::TryPerformAbilitiesOfClass(TArray <TSubclassOf<UTempestBaseAbilityObject>> AbilitiesToSet, bool ConditionCheck /*= true*/)
{
	bool LocalBool = false;
	for (int32 i = 0; i < AbilitiesToSet.Num(); i++)
	{
		if (AbilitiesToSet[i])
		{
			LocalBool = TryPerformAbilityOfClass(AbilitiesToSet[i], ConditionCheck);
			if (LocalBool)
			{
				return true;
			}
		}

	}
	return false;
}

void UTempestBaseAbilityManagerComponent::SetCurrentActiveAbility(UTempestBaseAbilityObject* NewCurrentActiveAbility)
{
	CurrentActiveAbility = NewCurrentActiveAbility;
	OnUpdatedActiveAbility.Broadcast();

	if (NewCurrentActiveAbility)
	{
		if (PassiveAbilities.Num() > 0)
		{
			for (int32 i = 0; i < PassiveAbilities.Num(); i++)
			{

				if (PassiveAbilities[i] == NewCurrentActiveAbility)
				{
					RemoveFromPassiveAbilities(NewCurrentActiveAbility);
				}

			}
		}
	}

}

void UTempestBaseAbilityManagerComponent::SetAsPassiveAbility(UTempestBaseAbilityObject* NewPassiveAbility)
{
	if (NewPassiveAbility)
	{
		PassiveAbilities.AddUnique(NewPassiveAbility);
		if (NewPassiveAbility == CurrentActiveAbility)
		{
			CurrentActiveAbility = nullptr;
		}
	}
}

UTempestBaseAbilityObject* UTempestBaseAbilityManagerComponent::GetCurrentActiveAbility()
{
	return CurrentActiveAbility;
}

void UTempestBaseAbilityManagerComponent::GetAbilityOfClass(TSubclassOf<UTempestBaseAbilityObject> AbilityToSearch, UTempestBaseAbilityObject*& FoundAbility)
{
	for (int32 i = 0; i < ActivatableAbilities.Num(); i++)
	{

		if (ActivatableAbilities[i])
		{
			if (ActivatableAbilities[i]->GetClass() == AbilityToSearch)
			{
				FoundAbility = ActivatableAbilities[i];

				return;
			}
		}

	}

	FoundAbility = nullptr;
	return;
}

bool UTempestBaseAbilityManagerComponent::GetCanPerformAbilityOfClass(TSubclassOf<UTempestBaseAbilityObject> AbilityToSearch)
{
	if (AbilityToSearch)
	{
		UTempestBaseAbilityObject* LocalAbility = nullptr;
		GetAbilityOfClass(AbilityToSearch, LocalAbility);

		if (LocalAbility)
		{
			return LocalAbility->CanPerformAbility();
		}
		else
		{
			UTempestBaseAbilityObject* LocalNewAbility;
			ConstructAbilityOfClass(AbilityToSearch, LocalNewAbility);

			return LocalNewAbility->CanPerformAbility();
		}
	}
	return false;
}

void UTempestBaseAbilityManagerComponent::GetChildAbilityOfClass(TSubclassOf<UTempestBaseAbilityObject> AbilityToSearch, UTempestBaseAbilityObject*& FoundAbility)
{
	if (AbilityToSearch)
	{
		for (int32 i = 0; i < ActivatableAbilities.Num(); i++)
		{
			if (ActivatableAbilities[i])
			{
				if (UKismetMathLibrary::ClassIsChildOf(ActivatableAbilities[i]->GetClass(), AbilityToSearch))
				{
					FoundAbility = ActivatableAbilities[i];

					return;
				}
			}

		}

		FoundAbility = nullptr;
		return;
	}

}

UTempestBaseAbilityObject* UTempestBaseAbilityManagerComponent::GetAbilityOfGameplayTag(FGameplayTag AbilityGameplayTag)
{
	UTempestBaseAbilityObject* LocalAbility = nullptr;
	for (int32 i = 0; i < ActivatableAbilities.Num(); i++)
	{
		if (ActivatableAbilities[i])
		{
			if (ActivatableAbilities[i]->AbilityGameplayTag == AbilityGameplayTag)
			{
				LocalAbility = ActivatableAbilities[i];
				return LocalAbility;
			}
		}
	}

	return LocalAbility;
}

void UTempestBaseAbilityManagerComponent::ConstructAbilityOfClass(TSubclassOf<UTempestBaseAbilityObject> AbilityToConstruct, UTempestBaseAbilityObject*& ConstructedAbility)
{
	ConstructedAbility = nullptr;
	if (AbilityToConstruct)
	{
		UTempestBaseAbilityObject* LocalNewAbility;
		LocalNewAbility = NewObject<UTempestBaseAbilityObject>(GetOwner(), AbilityToConstruct);

		ActivatableAbilities.AddUnique(LocalNewAbility);
		LocalNewAbility->SetPerformingActor(GetOwner());
		LocalNewAbility->ConstructAbility();
		ConstructedAbility = LocalNewAbility;
	}

}

