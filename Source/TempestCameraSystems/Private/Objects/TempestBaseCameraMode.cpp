// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 


#include "Objects/TempestBaseCameraMode.h"
#include "Components/TempestCameraModeComponent.h"
#include "Objects/TempestBaseCameraProperty.h"

UTempestBaseCameraMode::UTempestBaseCameraMode()
{

}

void UTempestBaseCameraMode::SetCameraModeStatus(FGameplayTag NewCameraModeStatus)
{
	CameraModeStatus = NewCameraModeStatus; 
	OnUpdatedCameraModeStatus();
}

void UTempestBaseCameraMode::GetCameraPropertyOfType(FGameplayTag PropertyTypeToFind, UTempestBaseCameraProperty*& FoundCameraProperty)
{
	UTempestBaseCameraProperty* LocalFoundCameraProperty = nullptr;
	FoundCameraProperty = LocalFoundCameraProperty;
	if (CreatedCameraProperties.Num() > 0)
	{
		for (int32 i = 0; i < CreatedCameraProperties.Num(); i++)
		{

			if (CreatedCameraProperties[i])
			{
				if (CreatedCameraProperties[i]->PropertyType == PropertyTypeToFind)
				{
					
					FoundCameraProperty = CreatedCameraProperties[i];
					return;
				}
			}

		}
	}
}

void UTempestBaseCameraMode::GetCameraPropertyOfClass(TSubclassOf<UTempestBaseCameraProperty> PropertyClassToFind, UTempestBaseCameraProperty*& FoundCameraProperty)
{
	FoundCameraProperty = nullptr;
	if (CreatedCameraProperties.Num() > 0)
	{
		for (int32 i = 0; i < CreatedCameraProperties.Num(); i++)
		{

			if (CreatedCameraProperties[i])
			{
				if (CreatedCameraProperties[i]->GetClass() == PropertyClassToFind)
				{

					FoundCameraProperty = CreatedCameraProperties[i];
					return;
				}
			}

		}
	}

}

void UTempestBaseCameraMode::ConstructCameraPropertyOfClass(TSubclassOf<UTempestBaseCameraProperty> NewCameraPropertyClass, UTempestBaseCameraProperty*& CreatedCameraProperty)
{
	if (NewCameraPropertyClass && CameraModeComponent)
	{
		UTempestBaseCameraProperty* LocalNewCameraProperty;
		LocalNewCameraProperty = NewObject<UTempestBaseCameraProperty>(CameraModeComponent->GetOwner(), NewCameraPropertyClass);
		CreatedCameraProperty = LocalNewCameraProperty;

		LocalNewCameraProperty->CameraMode = this;
		LocalNewCameraProperty->ConstructCameraProperty();
		CreatedCameraProperties.AddUnique(LocalNewCameraProperty);
		return;

	}
	CreatedCameraProperty = nullptr;
}

