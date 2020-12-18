// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDonutSpawn.h"
#include "MyFloorActor.h"
#include "MyObstacles.h"
#include <random>

// Sets default values
AMyDonutSpawn::AMyDonutSpawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyDonutSpawn::BeginPlay()
{
	Super::BeginPlay();
	FVector FirstSpawn = FVector(1078, 0, 160);
	FRotator FirstRot = FRotator(0, 0, 0);
	if (GetWorld()) {
		GetWorld()->SpawnActor<AMyFloorActor>(FirstSpawn, FirstRot);
	}
}

// Called every frame
void AMyDonutSpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	BuffTimer += DeltaTime;
	if (BuffTimer > Delay) {
		AddFloor();
		AddRandDonut();
		AddObstacles();
		BuffTimer = 0;
	}
}

// Called to bind functionality to input
void AMyDonutSpawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
 
void AMyDonutSpawn::AddRandDonut() {
	//«адаЄм поворот дл€ наших пончиков
	FRotator DonRot = FRotator(0, 0, 0);
	//—лучайным образом выбираем линию на которую будут спавнитс€ пончики
	std::random_device rd;
	std::mt19937 rg(rd());
	auto generator = std::uniform_real_distribution<float>(0, 3);
	for (size_t i = 0; i < 4; ++i) {
		int NumbLine = generator(rg);
		float SpawnZ = FMath::FRandRange(MinZ, MaxZ);
		if (NumbLine == 0) {// райн€€ лева€ полоса
			for (size_t j = 0; j < 3; ++j) {
				float SpawnX = FMath::FRandRange(Xobj, Xobj + Width);
				FVector SpawnPoint = FVector(SpawnX, Line_0, SpawnZ);
				if (GetWorld()) {
					GetWorld()->SpawnActor<AMyDonuts>(SpawnPoint, DonRot);
				}
			}
		}
		if (NumbLine == 1) {// райн€€ лева€ полоса
			for (size_t j = 0; j < 3; ++j) {
				float SpawnX = FMath::FRandRange(Xobj, Xobj + Width);
				FVector SpawnPoint = FVector(SpawnX, Line_1, SpawnZ);
				if (GetWorld()) {
					GetWorld()->SpawnActor<AMyDonuts>(SpawnPoint, DonRot);
				}
			}
		}
		if (NumbLine == 2) {// райн€€ лева€ полоса
			for (size_t j = 0; j < 3; ++j) {
				float SpawnX = FMath::FRandRange(Xobj, Xobj + Width);
				FVector SpawnPoint = FVector(SpawnX, Line_2, SpawnZ);
				if (GetWorld()) {
					GetWorld()->SpawnActor<AMyDonuts>(SpawnPoint, DonRot);
				}
			}
		}
	}
}
void AMyDonutSpawn::AddFloor() {
	FRotator NewRot = FRotator(0, 0, 0);
	FVector NewVec(X + Width, 0, 160);
	GetWorld()->SpawnActor<AMyFloorActor>(NewVec, NewRot);
	X += Width;
	Xobj += Width;
}

void AMyDonutSpawn::AddObstacles()
{
	//«адаЄм поворот дл€ наших пончиков
	FRotator DonRot = FRotator(0, 0, 0);
	//—лучайным образом выбираем линию на которую будут спавнитс€ пончики
	std::random_device rd;
	std::mt19937 rg(rd());
	float SpawnZ = 220.f;
	auto generator = std::uniform_real_distribution<float>(0, 3);
	for (size_t i = 0; i < 4; ++i) {
		int NumbLine = generator(rg);
		if (NumbLine == 0) {// райн€€ лева€ полоса
			float SpawnX = FMath::FRandRange(Xobj, Xobj + Width);
			FVector SpawnPoint = FVector(SpawnX, Line_0, SpawnZ);
			if (GetWorld()) {
				GetWorld()->SpawnActor<AMyObstacles>(SpawnPoint, DonRot);
			}
		}
		if (NumbLine == 1) {// райн€€ лева€ полоса
			float SpawnX = FMath::FRandRange(Xobj, Xobj + Width);
			FVector SpawnPoint = FVector(SpawnX, Line_1, SpawnZ);
			if (GetWorld()) {
				GetWorld()->SpawnActor<AMyObstacles>(SpawnPoint, DonRot);
			}
		}
		if (NumbLine == 2) {// райн€€ лева€ полоса
			float SpawnX = FMath::FRandRange(Xobj, Xobj + Width);
			FVector SpawnPoint = FVector(SpawnX, Line_2, SpawnZ);
			if (GetWorld()) {
				GetWorld()->SpawnActor<AMyObstacles>(SpawnPoint, DonRot);
			}
		}
	}
}

