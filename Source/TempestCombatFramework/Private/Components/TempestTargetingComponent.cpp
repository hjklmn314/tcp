// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 


#include "Components/TempestTargetingComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/PlayerCameraManager.h"

// Sets default values for this component's properties
UTempestTargetingComponent::UTempestTargetingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTempestTargetingComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTempestTargetingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	UpdatePotentialTargets();

	bool LocalBool = PotentialTargets.Contains(TargetedActor);
	
	if (TargetedActor && !LocalBool)
	{
		DisableLockOn();
	}
}


void UTempestTargetingComponent::InitializeTargetingComponent_Implementation(UCameraComponent* CameraComponent, USpringArmComponent* SpringArmComponent)
{
	OwnerCamera = CameraComponent;
	OwnerSpringArm = SpringArmComponent;
}

void UTempestTargetingComponent::SearchForActorToTarget()
{
	UpdatePotentialTargets();
	InternalSearchForActorToTarget();
}

void UTempestTargetingComponent::InternalSearchForActorToTarget()
{
	if (!TargetedActor)
	{
		TMap<AActor*, float> LocalPotentialTargets;

		for (AActor*& Elem : PotentialTargets)
		{
			if (CanBeTargeted(Elem))
			{
				LocalPotentialTargets.Add(Elem, UKismetMathLibrary::Abs(CalculateAngleFromCamera(Elem)));
			}
		}

		if (LocalPotentialTargets.Num() > 0)
		{
			TArray<AActor*> LocalTargets;
			TArray<float> LocalAngles;
			LocalPotentialTargets.GenerateKeyArray(LocalTargets);
			LocalPotentialTargets.GenerateValueArray(LocalAngles);

			int32 MinIndex;
			const float MaxValue = FMath::Min<float>(LocalAngles, &MinIndex);
			TargetedActor = LocalTargets[MinIndex];
			SetLockOnToTarget();
		}
	}
	else
	{
		DisableLockOn();
	}
}

void UTempestTargetingComponent::UpdatePotentialTargets()
{

	TArray<AActor*> OverlappedActors;
	TArray<AActor*> ActorsToIgnore;

	ActorsToIgnore.AddUnique(GetOwner());

	UKismetSystemLibrary::SphereOverlapActors(GetOwner(),GetOwner()->GetActorLocation(),TargetingRadius, TargetsType, ClassToTarget,ActorsToIgnore, OverlappedActors);
	
	TArray<AActor*> ValidOverlappedActors;
	

	for (AActor*& Elem : OverlappedActors)
	{
		if (CanBeTargeted(Elem))
		{
			ValidOverlappedActors.Add(Elem);
		}
	}
	PotentialTargets = ValidOverlappedActors;

}


void UTempestTargetingComponent::StaticSwitchToNewTarget(bool RightDirection)
{
	if (TargetedActor)
	{
		TMap<AActor*, float> LocalPotentialTargets;

		for (AActor*& Elem : PotentialTargets)
		{
			if (Elem != TargetedActor)
			{
				float LocalDistance = UKismetMathLibrary::Vector_Distance(GetOwner()->GetActorLocation(), Elem->GetActorLocation());

				FRotator RequiredRotation = UKismetMathLibrary::FindLookAtRotation(GetOwner()->GetActorLocation(), Elem->GetActorLocation());
				FRotator DeltaRotation;

				ACharacter* LocalOwnerCharacter = Cast<ACharacter>(GetOwner());
				
				DeltaRotation = UKismetMathLibrary::NormalizedDeltaRotator(LocalOwnerCharacter->GetControlRotation(), RequiredRotation);

				if (RightDirection == 1)
				{
					if (DeltaRotation.Yaw < 0.f && DeltaRotation.Yaw > -100.f)
					{
						LocalPotentialTargets.Add(Elem, DeltaRotation.Yaw);
					}
					else
					{
						LocalPotentialTargets.Add(Elem, -10000.f);
					}
				}
				else
				{
					if (DeltaRotation.Yaw > 0.f && DeltaRotation.Yaw < 100.f)
					{
						LocalPotentialTargets.Add(Elem, DeltaRotation.Yaw);
					}
					else
					{
						LocalPotentialTargets.Add(Elem, 10000.f);
					}
				}
			}

		}

		if (LocalPotentialTargets.Num() > 0)
		{
			TArray<AActor*> LocalTargets;
			TArray<float> LocalAngles;
			LocalPotentialTargets.GenerateKeyArray(LocalTargets);
			LocalPotentialTargets.GenerateValueArray(LocalAngles);

			if (RightDirection == 1)
			{
				int32 FoundIndex;
				const float MaxValue = FMath::Max<float>(LocalAngles, &FoundIndex);
				if (MaxValue > -10000.f)
				{
					DisableLockOn();
					TargetedActor = LocalTargets[FoundIndex];
					SetLockOnToTarget();
				}

			}
			else
			{
				int32 FoundIndex;
				const float MinValue = FMath::Min<float>(LocalAngles, &FoundIndex);
				if (MinValue < 10000.f)
				{
					DisableLockOn();
					TargetedActor = LocalTargets[FoundIndex];
					SetLockOnToTarget();
				}
			}

		}
		
	}
}


float UTempestTargetingComponent::CalculateAngleFromCamera(const AActor* TargetActor)
{
	FRotator FinalRotation;
	if (TargetActor && OwnerCamera)
	{
		
		FRotator RequiredRotation = UKismetMathLibrary::FindLookAtRotation(OwnerCamera->GetComponentLocation(), TargetActor->GetActorLocation());
		ACharacter* LocalOwnerCharacter = Cast<ACharacter>(GetOwner());
		FRotator DeltaRotation = UKismetMathLibrary::NormalizedDeltaRotator(RequiredRotation, LocalOwnerCharacter->GetControlRotation());
		FinalRotation = DeltaRotation;
	}

	return UKismetMathLibrary::Abs(UKismetMathLibrary::Abs(FinalRotation.Yaw) + UKismetMathLibrary::Abs(FinalRotation.Pitch));
}