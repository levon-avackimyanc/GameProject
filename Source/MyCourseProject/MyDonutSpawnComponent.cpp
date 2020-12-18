// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDonutSpawnComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UMyDonutSpawnComponent::UMyDonutSpawnComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UMyDonutSpawnComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

/*void UMyDonutSpawnComponent::DonutTouched()
{
	UE_LOG(LogTemp, Log, TEXT("Hello"));
		DonutsCollected += 10;
}*/


/*// Called every frame
void UMyDonutSpawnComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}*/

//int UMyDonutSpawnComponent::GetScore()
//{
	//return DonutsCollected;
//}

