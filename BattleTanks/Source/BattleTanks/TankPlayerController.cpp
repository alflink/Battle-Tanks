// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"

void ATankPlayerController::Tick(float DeltaTime )
{
    Super::Tick( DeltaTime );
    // AimTowardsTank()
    
    
}

void ATankPlayerController::BeginPlay()
{
    Super::BeginPlay();

    auto ControlledTank = GetControlledTank();
    if(!ControlledTank)
    {
        UE_LOG(LogTemp,Warning,TEXT("Player controller not controlling a Tank!"));
    }
    else
    {
      UE_LOG(LogTemp,Warning,TEXT("Player Controller is controlling Tank: %s"),* ControlledTank->GetName());
    }

}

ATank* ATankPlayerController::GetControlledTank() const
{
    return Cast<ATank>(GetPawn());
}


void ATankPlayerController::AimTowardsCrosshair() 
{
    if(!GetControlledTank()) { return; }

    // Get world location if linetrace  through crosshair
    // if it hits the landscape
        // tell controlled tank to aim towards the crosshair
}