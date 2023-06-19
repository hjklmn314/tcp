// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 


#include "Components/TempestCollisionManagerComponent.h"
#include "Objects/TempestBaseTraceObject.h"

// Sets default values for this component's properties
UTempestCollisionManagerComponent::UTempestCollisionManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTempestCollisionManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTempestCollisionManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	if (ActiveTraceObjects.Num() > 0)
	{
		for (int32 i = 0; i < ActiveTraceObjects.Num(); i++)
		{
			if (ActiveTraceObjects[i])
			{

				ActiveTraceObjects[i]->TickTrace(DeltaTime);
				
			}
		}
	}
}

void UTempestCollisionManagerComponent::ConstructTraceOfClass(TSubclassOf< class UTempestBaseTraceObject> TraceClassToConstruct, UTempestBaseTraceObject*& CreatedTraceObject)
{
	CreatedTraceObject = nullptr;
	if (TraceClassToConstruct)
	{
		UTempestBaseTraceObject* LocalNewTrace;
		LocalNewTrace = NewObject<UTempestBaseTraceObject>(GetOwner(), TraceClassToConstruct);
		CreatedTraceObjects.AddUnique(LocalNewTrace);
		LocalNewTrace->TraceOwner = GetOwner();
		LocalNewTrace->ConstructTrace();
		CreatedTraceObject = LocalNewTrace;
	}
}

void UTempestCollisionManagerComponent::GetTraceOfGameplayTag(FGameplayTag TraceCollisionToFind, UTempestBaseTraceObject*& FoundTraceCollision)
{
	FoundTraceCollision = nullptr;
	if (CreatedTraceObjects.Num() > 0)
	{
		for (int32 i = 0; i < CreatedTraceObjects.Num(); i++)
		{
			if (CreatedTraceObjects[i])
			{
				if (CreatedTraceObjects[i]->TraceGameplayTag == TraceCollisionToFind)
				{
					FoundTraceCollision = CreatedTraceObjects[i];
					return;
				}
			}
		}
	}
}

void UTempestCollisionManagerComponent::GetTraceByClass(TSubclassOf< class UTempestBaseTraceObject> TraceToFind, UTempestBaseTraceObject*& FoundTrace)
{
	FoundTrace = nullptr;
	if (TraceToFind)
	{
		if (CreatedTraceObjects.Num() > 0)
		{
			for (int32 i = 0; i < CreatedTraceObjects.Num(); i++)
			{
				if (CreatedTraceObjects[i])
				{
					if (CreatedTraceObjects[i]->GetClass() == TraceToFind)
					{
						FoundTrace = CreatedTraceObjects[i];
						return;
					}
				}
			}
		}
	}
	
}

