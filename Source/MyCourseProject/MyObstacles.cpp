// Fill out your copyright notice in the Description page of Project Settings.


#include "MyObstacles.h"
#include "Components/BoxComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AMyObstacles::AMyObstacles()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//���� ��� ������� ��� � �������������� �� ���� ���������� ���� �� ����
	Mesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/MyBluePrints/PolygonCity/PolygonCity/Meshes/Environments/SM_Env_Bridge_Pillar_01.SM_Env_Bridge_Pillar_01'")).Object;
	//���� ��� ������� ���� � �������������� �� ���� ����������
	VehColor = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MyBluePrints/ObstacleMaterial.ObstacleMaterial'")).Object;
	//C����� �������� ���������
	MyRootComp = CreateDefaultSubobject<UBoxComponent>("VehRoot");
	MyRootComp->SetBoxExtent(FVector(40.f, 42.f, 25.f));
	//��������� ���� � ������
	RootComponent = MyRootComp;
	//������� ����������� ���� ��� �������� ����� � ������
	class UStaticMeshComponent* VehComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Stolb"));
	//����� ����������� ����� ��� �����
	VehComp->SetStaticMesh(Mesh);
	//������� ��� ����������� ��� ����� ������
	VehComp->SetRelativeLocation(FVector(0, 0, 0));
	//��� ����������� �������� ������ ��� �����
	VehComp->SetMaterial(0, VehColor);
	//���������� � ����������� ����� ����� ������
	VehComp->AttachTo(MyRootComp);
}

// Called when the game starts or when spawned
void AMyObstacles::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyObstacles::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DeadTouch();
Buff += DeltaTime;
	if (Buff > Delay) {
		Destroy(true, true);
	}
}

void AMyObstacles::DeadTouch()
{
	//������� ������, ���� ������� ���� ������� � �������� �� �����������.
	TArray<AActor* > CollectedActors;
	GetOverlappingActors(CollectedActors);
	//�������� ���� � ��� ���� ������������.
	for (int32 i = 0; i < CollectedActors.Num(); i++) {
		AMyCharacter* const Test = Cast<AMyCharacter>(CollectedActors[i]);
		if (Test) {
			CollectedActors[i]->Destroy();
			//��� ��� �� ����� ������ ���������, �� ��� ������ ������ ���������
			break;
		}
	}
}

int AMyObstacles::GetEndScore()
{
	return EndScore;
}

