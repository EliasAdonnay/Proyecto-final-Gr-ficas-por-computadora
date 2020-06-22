// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CaracterBase.generated.h"

UCLASS(Blueprintable)
class APOCALIPSIS_API ACaracterBase : public ACharacter
{
	GENERATED_BODY()

public:

//Propiedad de salud
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Caracter Base")
		float Salud = 100;

//Propiedad para estaMuerto
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Caracter Base")
		bool estaMuerto = false; 

//Función para calcular si el jugador está muerto o no
	virtual void CalcularMuerte();

//Función para calcular la salud 
	UFUNCTION(BlueprintCallable, Category = "Caracter Base")
		virtual void CalcularSalud(float delta);

#if WITH_EDITOR
//Editor para cambiar las propiedades
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
		override;
#endif	

public:
	// Sets default values for this character's properties
	ACaracterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
