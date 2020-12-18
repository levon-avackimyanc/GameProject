// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDonuts.h"
#include "Components/SphereComponent.h"
#include "MyCharacter.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AMyDonuts::AMyDonuts()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyRootComp = CreateDefaultSubobject<USphereComponent>("DonRoot");
	//��������� ����������� ���� � ������
	//����� ������
	MyRootComp->SetSphereRadius(97.5f);
	RootComponent = MyRootComp;
	//���� ��� ������� ��� � �������������� �� ���� ���������� ���� �� ����
	MyMeshComp = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/MyBluePrints/PolygonCity/PolygonCity/Meshes/Props/SM_Prop_LargeSign_Donut_01.SM_Prop_LargeSign_Donut_01'")).Object;
	DonColor = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MyBluePrints/DonutMaterial.DonutMaterial'")).Object;
	DonColor2 = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/MyBluePrints/DonutMaterial2.DonutMaterial2'")).Object;
	FVector Size = FVector(0.5f, 0.5f, 0.5f);
	//������� ����������� ���� ��� �������� ����� � ������
	class UStaticMeshComponent* EatDon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Eat"));
	//����� ����������� ����� ��� �����
	EatDon->SetStaticMesh(MyMeshComp);
	//����� ��� ����� ��� ��� �����������
	EatDon->SetRelativeRotation(FRotator(90, 0, 0));
	EatDon->SetRelativeLocation(FVector(0, 0, 0));
	EatDon->SetRelativeScale3D(FVector(0.5, 0.5, 0.5));
	EatDon->SetMaterial(0, DonColor);
	EatDon->SetMaterial(1, DonColor2);
	//���������� ������ � ����������� ����� ����� ������
	EatDon->AttachTo(MyRootComp);
	//�������� ��������� ������ ��� ����� ������
	EatDon->SetSimulatePhysics(false);
}

// Called when the game starts or when spawned
void AMyDonuts::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyDonuts::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Buff += DeltaTime;
	if (Buff > Delay) {
		Destroy(true, true);
		}
}


/*void AMyDonuts::CollectDonut()
{
	//������� ������, ���� ������� ���� ������� � �������� �� �����������.
	TArray<AActor* > CollectedDonuts;
	//�������� ���� �������, � �������� �����������.
	GetOverlappingActors(CollectedDonuts);
	
	//�������� ���� � ��� ���� ������������.
	for (int32 i = 0; i < CollectedDonuts.Num(); i++) {
		AMyCharacter* const Test = Cast<AMyCharacter>(CollectedDonuts[i]);
		if (Test) {
			Destroy(true, true);
			//��� ��� �� ����� ������ ���������, �� ��� ������ ������ ���������
			break;
		}
	}
}*/

