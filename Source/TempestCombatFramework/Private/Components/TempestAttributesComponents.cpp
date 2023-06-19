// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 


#include "Components/TempestAttributesComponents.h"
#include "Objects/TempestBaseAttributeObject.h"


// Sets default values for this component's properties
UTempestAttributesComponents::UTempestAttributesComponents()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTempestAttributesComponents::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTempestAttributesComponents::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	for (int32 i = 0; i < CreatedAttributes.Num(); i++)
	{
		if (CreatedAttributes[i])
		{
			CreatedAttributes[i]->TickAttribute(DeltaTime);
		}

	}

}

void UTempestAttributesComponents::InitializeAttributesComponent_Implementation(const TArray<TSubclassOf<UTempestBaseAttributeObject>>& NewAttributesToCreate)
{
	for (int32 i = 0; i < NewAttributesToCreate.Num(); i++)
	{

		if (NewAttributesToCreate[i])
		{
			UTempestBaseAttributeObject* LocalCreatedAttribute = nullptr;
			ConstructAttributeOfClass(NewAttributesToCreate[i], LocalCreatedAttribute);

		}

	}

}

void UTempestAttributesComponents::AssignAttributes(TArray<UTempestBaseAttributeObject*> AttributesToAssign)
{
	for (int32 i = 0; i < AttributesToAssign.Num(); i++)
	{
		if (AttributesToAssign[i])
		{

			UTempestBaseAttributeObject* LocalNewAttribute = DuplicateObject(AttributesToAssign[i],GetOwner());

			LocalNewAttribute->SetOwningActor(GetOwner());
			LocalNewAttribute->ConstructAttribute();

			CreatedAttributes.AddUnique(LocalNewAttribute);
		}
	}
}

void UTempestAttributesComponents::ClearAttributes()
{
	CreatedAttributes.Empty();
}

void UTempestAttributesComponents::ConstructAttributeOfClass(TSubclassOf<UTempestBaseAttributeObject> AttributeToConstruct, UTempestBaseAttributeObject*& ConstructedAttribute)
{
	ConstructedAttribute = nullptr;
	if (AttributeToConstruct)
	{
		UTempestBaseAttributeObject* LocalNewAttribute;
		LocalNewAttribute = NewObject<UTempestBaseAttributeObject>(GetOwner(), AttributeToConstruct);

		CreatedAttributes.AddUnique(LocalNewAttribute);

		LocalNewAttribute->SetOwningActor(GetOwner());
		LocalNewAttribute->ConstructAttribute();
		ConstructedAttribute = LocalNewAttribute;
	}

}

void UTempestAttributesComponents::GetAttributeOfClass(TSubclassOf<UTempestBaseAttributeObject> AttributeToSearch, UTempestBaseAttributeObject*& FoundAttribute)
{
	FoundAttribute = nullptr;
	for (int32 i = 0; i < CreatedAttributes.Num(); i++)
	{

		if (CreatedAttributes[i])
		{
			if (CreatedAttributes[i]->GetClass() == AttributeToSearch)
			{
				FoundAttribute = CreatedAttributes[i];

				return;
			}
		}

	}

	FoundAttribute = nullptr;
	return;
}

void UTempestAttributesComponents::GetActiveAttributeModifierOfClass(TSubclassOf<UTempestBaseAttributeModifier> AttributeModifierToSearch, UTempestBaseAttributeModifier*& FoundAttributeModifier)
{
	FoundAttributeModifier = nullptr;
	for (int32 i = 0; i < CreatedActiveAttributeModifiers.Num(); i++)
	{

		if (CreatedActiveAttributeModifiers[i])
		{
			if (CreatedActiveAttributeModifiers[i]->GetClass() == AttributeModifierToSearch)
			{
				FoundAttributeModifier = CreatedActiveAttributeModifiers[i];

				return;
			}
		}

	}

	FoundAttributeModifier = nullptr;
	return;
}

UTempestBaseAttributeObject* UTempestAttributesComponents::GetAttributeOfGameplayTag(FGameplayTag AttributeGameplayTag)
{
	
	UTempestBaseAttributeObject* LocalAttribute = nullptr;
	for (int32 i = 0; i < CreatedAttributes.Num(); i++)
	{
		if (CreatedAttributes[i])
		{
			if (CreatedAttributes[i]->AttributeGameplayTag == AttributeGameplayTag)
			{
				LocalAttribute = CreatedAttributes[i];
				return LocalAttribute;
			}
		}
	}

	return LocalAttribute;
}

void UTempestAttributesComponents::RemoveFromActiveAttributeModifiers(UTempestBaseAttributeModifier* AttributeModifierToRemove)
{
	if (AttributeModifierToRemove)
	{
		CreatedActiveAttributeModifiers.Remove(AttributeModifierToRemove);
	}
}

void UTempestAttributesComponents::AddToActiveAttributeModifiers(UTempestBaseAttributeModifier* AttributeModifierToAdd)
{
	if (AttributeModifierToAdd)
	{
		CreatedActiveAttributeModifiers.Add(AttributeModifierToAdd);
	}
}

void UTempestAttributesComponents::ConstructAttributeModifierOfClass(TSubclassOf<UTempestBaseAttributeModifier> AttributeModifierToConstruct, FAttributeModifierProperties ModiferProperties,UTempestBaseAttributeModifier*& ConstructedAttributeModifier)
{
	ConstructedAttributeModifier = nullptr;

	if (AttributeModifierToConstruct)
	{
		UTempestBaseAttributeModifier* LocalNewAttributeModifier;
		LocalNewAttributeModifier = NewObject<UTempestBaseAttributeModifier>(GetOwner(), AttributeModifierToConstruct);
		LocalNewAttributeModifier->ModiferProperties = ModiferProperties;
		LocalNewAttributeModifier->ConstructAttributeModifier();
		ConstructedAttributeModifier = LocalNewAttributeModifier;
	}
}

