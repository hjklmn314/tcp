// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 


#include "Components/TempestBaseStateManagerComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
UTempestBaseStateManagerComponent::UTempestBaseStateManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTempestBaseStateManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


void UTempestBaseStateManagerComponent::InitializeStateManagerComponent_Implementation(AActor* NewPerformingActor)
{
	PerformingActor = NewPerformingActor;
}

// Called every frame
void UTempestBaseStateManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	if (CurrentActiveState)
	{
		CurrentActiveState->TickState(DeltaTime);
	}
}

void UTempestBaseStateManagerComponent::PerformStateOfClass(TSubclassOf<UTempestBaseStateObject> StateToSet)
{
	TryPerformStateOfClass(StateToSet, false);
}

bool UTempestBaseStateManagerComponent::TryPerformStateOfClass(TSubclassOf<UTempestBaseStateObject> StateToSet, bool ConditionCheck /*= true*/)
{
	if (StateToSet)
	{

		UTempestBaseStateObject* LocalState = nullptr;
		GetStateOfClass(StateToSet, LocalState);


		if (LocalState)
		{

			if (ConditionCheck)
			{
				if (LocalState->CanPerformState())
				{
					if (CurrentActiveState)
					{

						CurrentActiveState->EndState();

					}

					LocalState->PrepareStateValues();
					CurrentActiveState = LocalState;

					CurrentActiveState->StartState();

					OnUpdatedActiveState.Broadcast();

					return true;
				}


			}
			else
			{
				if (CurrentActiveState)
				{

					CurrentActiveState->EndState();

				}

				LocalState->PrepareStateValues();
				CurrentActiveState = LocalState;

				CurrentActiveState->StartState();
				OnUpdatedActiveState.Broadcast();
				return true;
			}

			return false;
		}
		else
		{


			ConstructStateOfClass(StateToSet, LocalState);



			if (ConditionCheck)
			{
				if (LocalState->CanPerformState())
				{
					if (CurrentActiveState)
					{

						CurrentActiveState->EndState();

					}

					LocalState->PrepareStateValues();
					CurrentActiveState = LocalState;

					CurrentActiveState->StartState();
					OnUpdatedActiveState.Broadcast();
					return true;
				}


			}
			else
			{
				if (CurrentActiveState)
				{

					CurrentActiveState->EndState();

				}

				LocalState->PrepareStateValues();
				CurrentActiveState = LocalState;

				CurrentActiveState->StartState();
				OnUpdatedActiveState.Broadcast();
				return true;
			}


		}
	}
	return false;
}


bool UTempestBaseStateManagerComponent::TryPerformStatesOfClass(TArray <TSubclassOf<UTempestBaseStateObject>> StatesToSet, bool ConditionCheck /*= true*/)
{
	bool LocalBool = false;
	for (int32 i = 0; i < StatesToSet.Num(); i++)
	{
		if (StatesToSet[i])
		{
			LocalBool = TryPerformStateOfClass(StatesToSet[i], ConditionCheck);
			if (LocalBool)
			{
				return true;
			}
		}

	}
	return false;
}

void UTempestBaseStateManagerComponent::TrySetQueuedState(TSubclassOf<UTempestBaseStateObject> StateToQueue, bool ConditionCheck /*= true*/)
{
	if (StateToQueue)
	{
		if (ConditionCheck)
		{
			if (GetCanSetQueuedStateOfClass(StateToQueue))
			{
				AddToQueuedStates(StateToQueue);
			}
		}
		else
		{
			AddToQueuedStates(StateToQueue);
		}
	}
}

void UTempestBaseStateManagerComponent::SetCurrentActiveState(UTempestBaseStateObject* NewCurrentActiveState)
{
	CurrentActiveState = NewCurrentActiveState; 
	OnUpdatedActiveState.Broadcast();
}

void UTempestBaseStateManagerComponent::GetStateOfClass(TSubclassOf<UTempestBaseStateObject> StateToSearch, UTempestBaseStateObject*& FoundState)
{
	for (int32 i = 0; i < ActivatableStates.Num(); i++)
	{

		if (ActivatableStates[i])
		{
			if (ActivatableStates[i]->GetClass() == StateToSearch)
			{
				FoundState = ActivatableStates[i];

				return;
			}
		}

	}

	FoundState = nullptr;
	return;
}

void UTempestBaseStateManagerComponent::GetChildStateOfClass(TSubclassOf<UTempestBaseStateObject> StateToSearch, UTempestBaseStateObject*& FoundState)
{
	for (int32 i = 0; i < ActivatableStates.Num(); i++)
	{
		if (ActivatableStates[i])
		{
			if (UKismetMathLibrary::ClassIsChildOf(ActivatableStates[i]->GetClass(), StateToSearch))
			{
				FoundState = ActivatableStates[i];

				return;
			}
		}

	}

	FoundState = nullptr;
	return;
}

bool UTempestBaseStateManagerComponent::GetCanPerformStateOfClass(TSubclassOf<UTempestBaseStateObject> ClassToLookFor)
{
	if (ClassToLookFor)
	{
		UTempestBaseStateObject* LocalState = nullptr;
		GetStateOfClass(ClassToLookFor, LocalState);

		if (LocalState)
		{
			return LocalState->CanPerformState();
		}
		else
		{
			UTempestBaseStateObject* LocalNewState;
			ConstructStateOfClass(ClassToLookFor, LocalNewState);

			return LocalNewState->CanPerformState();
		}
	}
	return false;

}

bool UTempestBaseStateManagerComponent::GetCanSetQueuedStateOfClass(TSubclassOf<UTempestBaseStateObject> StateToSearch)
{
	UTempestBaseStateObject* LocalState = nullptr;
	GetStateOfClass(StateToSearch, LocalState);

	if (LocalState)
	{
		return LocalState->CanSetAsQueueState();
	}
	else
	{
		UTempestBaseStateObject* LocalNewState;
		ConstructStateOfClass(StateToSearch, LocalNewState);

		return LocalNewState->CanSetAsQueueState();
	}
}


UTempestBaseStateObject* UTempestBaseStateManagerComponent::GetStateOfGameplayTag(FGameplayTag StateGameplayTag)
{

	UTempestBaseStateObject* LocalState = nullptr;
	for (int32 i = 0; i < ActivatableStates.Num(); i++)
	{
		if (ActivatableStates[i])
		{
			if (ActivatableStates[i]->StateGameplayTag == StateGameplayTag)
			{
				LocalState = ActivatableStates[i];
				return LocalState;
			}
		}

	}

	return LocalState;
}

void UTempestBaseStateManagerComponent::ConstructStateOfClass(TSubclassOf<UTempestBaseStateObject> StateToConstruct, UTempestBaseStateObject*& ConstructedState)
{
	ConstructedState = nullptr;
	if (StateToConstruct)
	{
		UTempestBaseStateObject* LocalNewState;
		LocalNewState = NewObject<UTempestBaseStateObject>(GetOwner(), StateToConstruct);

		ActivatableStates.AddUnique(LocalNewState);
		LocalNewState->SetPerformingActor(PerformingActor);

		LocalNewState->ConstructState();
		ConstructedState = LocalNewState;
	}

}

