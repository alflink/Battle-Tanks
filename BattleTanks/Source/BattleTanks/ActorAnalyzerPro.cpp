// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/Actor.h"
#include "ActorAnalyzerPro.h"


// Sets default values for this component's properties
UActorAnalyzerPro::UActorAnalyzerPro()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UActorAnalyzerPro::BeginPlay()
{
	Super::BeginPlay();

	OwnerName = *GetOwner()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("The owner of ActorAnalyzerPro is: %s"),*OwnerName);
	
}


// Called every frame
void UActorAnalyzerPro::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

