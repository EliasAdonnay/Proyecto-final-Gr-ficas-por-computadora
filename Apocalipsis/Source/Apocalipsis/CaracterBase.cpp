// Fill out your copyright notice in the Description page of Project Settings.


#include "CaracterBase.h"

// Sets default values
ACaracterBase::ACaracterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACaracterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACaracterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACaracterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//Implementa la función de CalcularSalud
void ACaracterBase::CalcularSalud(float Delta)
{
	Salud += Delta;
	CalcularMuerte();
}

//Implementa la función CalcularMuerte
void ACaracterBase::CalcularMuerte()
{
	if (Salud <= 0)
		estaMuerto = true;
	else
		estaMuerto = false;
}
//Implementa la función PostEditChangeProperty
#if WITH_EDITOR
void ACaracterBase::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	estaMuerto = false;
	Salud = 100; 

	Super::PostEditChangeProperty(PropertyChangedEvent);

	CalcularMuerte();
}

#endif

