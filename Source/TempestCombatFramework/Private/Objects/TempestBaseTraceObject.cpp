// Copyright 2022, Developed by Aamn Chahrour & Samrudh Sunil, Published by Inherited Tempest. All Rights Reserved. 


#include "Objects/TempestBaseTraceObject.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/PrimitiveComponent.h"
#include "Objects/TempestAttackPropertiesObject.h"

void UTempestBaseTraceObject::SetTraceMeshInfo(UPrimitiveComponent* NewPrimitiveComponent, TArray<FName> PrimitiveComponentSocketNames)
{
	TracePrimitiveComponent = NewPrimitiveComponent;
	TracePrimitiveComponentSocketNames = PrimitiveComponentSocketNames;
}

void UTempestBaseTraceObject::ConstructAttackPropertyOfObject(UTempestAttackPropertiesObject* AttackPropertyToAssign)
{
	
	if (AttackPropertyToAssign)
	{
		UTempestAttackPropertiesObject* LocalNewAttackProperty = DuplicateObject(AttackPropertyToAssign, TraceOwner);
		AttackProperty = LocalNewAttackProperty;
		AttackProperty->SetAttackPropertyOwner(TraceOwner);
		AttackProperty->ConstructAttackPropertry();

	}

}

void UTempestBaseTraceObject::DoCollisionTrace_Implementation()
{

}
