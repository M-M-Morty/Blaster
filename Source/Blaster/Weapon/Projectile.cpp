// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "Components/BoxComponent.h"


AProjectile::AProjectile()
{
 	
	PrimaryActorTick.bCanEverTick = true;
	CollsionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollsionBox"));
	SetRootComponent(CollsionBox);
	CollsionBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	CollsionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CollsionBox->SetCollisionResponseToAllChannels(ECR_Ignore);
	CollsionBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Block);
	CollsionBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Block);

}

void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}


void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

