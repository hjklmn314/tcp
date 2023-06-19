// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 

#include "Components/TempestCameraModeComponent.h"
#include "Objects/TempestBaseCameraMode.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UTempestCameraModeComponent::UTempestCameraModeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTempestCameraModeComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTempestCameraModeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (CurrentCameraMode)
	{
		CurrentCameraMode->TickCameraMode(DeltaTime);
	}
}

void UTempestCameraModeComponent::InitializeCameraModeComponent_Implementation(UCameraComponent* NewCameraComponent, USpringArmComponent* NewSpringArmComponent)
{
	CameraComponent = NewCameraComponent;
	SpringArmComponent = NewSpringArmComponent;
}

void UTempestCameraModeComponent::SetCameraModeOfClass(TSubclassOf<UTempestBaseCameraMode> NewCameraModeClass)
{
	if (CurrentCameraMode)
	{
		if (CurrentCameraMode->GetClass() != NewCameraModeClass)
		{
			CurrentCameraMode->EndCameraMode();
			UTempestBaseCameraMode* LocalCreatedCameraMode = nullptr;
			ConstructCameraModeOfClass(NewCameraModeClass, LocalCreatedCameraMode);
			CurrentCameraMode = LocalCreatedCameraMode;

			CurrentCameraMode->StartCameraMode();

		}
	}
	else
	{
		UTempestBaseCameraMode* LocalCreatedCameraMode = nullptr;
		ConstructCameraModeOfClass(NewCameraModeClass, LocalCreatedCameraMode);
		CurrentCameraMode = LocalCreatedCameraMode;

		CurrentCameraMode->StartCameraMode();
	}
}

void UTempestCameraModeComponent::ConstructCameraModeOfClass(TSubclassOf<UTempestBaseCameraMode> NewCameraModeClass, UTempestBaseCameraMode*& CreatedCameraMode)
{
	if (NewCameraModeClass)
	{
		
		UTempestBaseCameraMode* LocalNewCameraMode = NewObject<UTempestBaseCameraMode>(GetOwner(), NewCameraModeClass);
		CreatedCameraMode = LocalNewCameraMode;

		LocalNewCameraMode->CameraModeComponent = this;
		LocalNewCameraMode->ConstructCameraMode();
		return;
		
	}
	CreatedCameraMode = nullptr;
}

