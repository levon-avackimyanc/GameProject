// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFloorActor.h"
#include "Components/BoxComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AMyFloorActor::AMyFloorActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Берём уже готовый мэш и инициализируем им нашу переменную того же типа
	FloorMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Engine/BasicShapes/Cube")).Object;
	FloorColor = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/StarterContent/Materials/M_CobbleStone_Rough.M_CobbleStone_Rough'")).Object;
	MyRootComp = CreateDefaultSubobject<UBoxComponent>(TEXT("FloorBox"));
	MyRootComp->SetBoxExtent(FVector(0, 0, 1));
	RootComponent = MyRootComp;
	class UStaticMeshComponent* FloorComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor"));
	FloorComp->SetStaticMesh(FloorMesh);
	FloorComp->SetRelativeRotation(FRotator(0, 90, 0));
	FloorComp->SetRelativeLocation(FVector(0, 0, 0));
	FloorComp->SetRelativeScale3D(FVector(18.0f, 22.0f, 1.0f));
	FloorComp->SetMaterial(0, FloorColor);
	FloorComp->AttachTo(MyRootComp);
}

// Called when the game starts or when spawned
void AMyFloorActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyFloorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Buff += DeltaTime;
	if (Buff > Delay) {
	  Destroy(true, true);
	}
}

void AMyFloorActor::SpawnFloorWithObstacles()
{
	/*TArray <AActor* > CharacterTouch;
	GetOverlappingActors(CharacterTouch);
	FVector Vec = GetActorLocation();
	for (int32 i = 0; i < CharacterTouch.Num(); i++) {
		if (i == 0) {
			FRotator NewRot = FRotator(0, 0, 0);
			FVector NewVec(Vec.X + Width, Vec.Y, Vec.Z);
			GetWorld()->SpawnActor<AMyFloorActor>(NewVec, NewRot);
			//Задаём поворот для наших пончиков
			FRotator DonRot = FRotator(0, 0, 0);
			//Случайным образом выбираем линию на которую будут спавнится пончики
			std::random_device rd;
			std::mt19937 rg(rd());
			auto generator = std::uniform_real_distribution<float>(0, 3);
			auto GeneratorForObstacles = std::uniform_real_distribution<float>(WidthToObstaclesMin, WidthToObstaclesMax);
			int NumbLine = generator(rg);
			float SpawnZ = 221.f;
			if (NumbLine == 0) {//Середина
				float WidthToObstacles = GeneratorForObstacles(rg);
				FVector SpawnPoint = FVector(Vec.X + WidthToObstacles, Line_0, SpawnZ);
				if (GetWorld()) {
					GetWorld()->SpawnActor<AMyObstacles>(SpawnPoint, DonRot);
				}
			}
			if (NumbLine == 1) {//Крайняя правая полоса
				float WidthToObstacles = GeneratorForObstacles(rg);
				FVector SpawnPoint = FVector(Vec.X + WidthToObstacles, Line_1, SpawnZ);
				if (GetWorld()) {
					GetWorld()->SpawnActor<AMyObstacles>(SpawnPoint, DonRot);
				}
			}
			if (NumbLine == 2) {//Крайняя левая полоса
				float WidthToObstacles = GeneratorForObstacles(rg);
				FVector SpawnPoint = FVector(Vec.X + WidthToObstacles, Line_2, SpawnZ);
				if (GetWorld()) {
					GetWorld()->SpawnActor<AMyObstacles>(SpawnPoint, DonRot);
				}
			}
		}
		else {
			Destroy(true, true);
		}*/
	}

/*void AMyFloorActor::SpawnDonuts()
{
	//Задаём поворот для наших пончиков
	FRotator DonRot = FRotator(0, 0, 0);
	//Случайным образом выбираем линию на которую будут спавнится пончики
	std::random_device rd;
	std::mt19937 rg(rd());
	FVector Vec = GetActorLocation();
	auto generator = std::uniform_real_distribution<float>(0, 3);
	int NumbLine = generator(rg);
	if (NumbLine == 0) {//Середина
		float SpawnZ = FMath::FRandRange(MinZ, MaxZ);
		FVector SpawnPoint = FVector(Vec.X+Width, Line_0, SpawnZ);
		if (GetWorld()) {
			GetWorld()->SpawnActor<AMyDonuts>(SpawnPoint, DonRot);
		}
	}
	if (NumbLine == 1) {//Крайняя правая полоса
		float SpawnZ = FMath::FRandRange(MinZ, MaxZ);
		FVector SpawnPoint = FVector(Vec.X+Width, Line_1, SpawnZ);
		if (GetWorld()) {
			GetWorld()->SpawnActor<AMyDonuts>(SpawnPoint, DonRot);
		}
	}
	if (NumbLine == 2) {//Крайняя левая полоса
		float SpawnZ = FMath::FRandRange(MinZ, MaxZ);
		FVector SpawnPoint = FVector(Vec.X + Width, Line_2, SpawnZ);
		if (GetWorld()) {
			GetWorld()->SpawnActor<AMyDonuts>(SpawnPoint, DonRot);
		}
		}
	}*/
