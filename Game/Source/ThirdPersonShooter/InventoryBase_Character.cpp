// Copyright (c) Improbable Worlds Ltd, All Rights Reserved

#include "InventoryBase_Character.h"

#include "SpatialNetDriver.h"
#include "UnrealNetwork.h"


// Sets default values
AInventoryBase_Character::AInventoryBase_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInventoryBase_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInventoryBase_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AInventoryBase_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

