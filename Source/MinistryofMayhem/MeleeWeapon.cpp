// Fill out your copyright notice in the Description page of Project Settings.

#include "MinistryofMayhem.h"
#include "MeleeWeapon.h"
#include "MinistryofMayhemCharacter.h"
#include "BaseEnemy.h"


// Sets default values
AMeleeWeapon::AMeleeWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeleeWeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	RootComponent = MeleeWeaponMesh;

}

// Called when the game starts or when spawned
void AMeleeWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMeleeWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

