// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANKS_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	virtual void Tick( float DeltaTime ) override;

	virtual void BeginPlay() override;

	ATank* GetControlledTank() const;

	// Start the tank moving the barrels so that a shot would hit
	// where the crosshairs intersects the world
	void AimTowardsCrosshair();
	
	
	
};
