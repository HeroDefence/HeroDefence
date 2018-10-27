// Fill out your copyright notice in the Description page of Project Settings.

#include "MyHeroPawn.h"


// Sets default values
AMyHeroPawn::AMyHeroPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyHeroPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyHeroPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyHeroPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

