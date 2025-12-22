// From Azad


#include "Character/AuraCharactorBase.h"

AAuraCharactorBase::AAuraCharactorBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AAuraCharactorBase::BeginPlay()
{
	Super::BeginPlay();
	
}
