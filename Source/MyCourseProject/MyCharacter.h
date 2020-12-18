#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "MyCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDonatScoreEvent);

UCLASS()
class MYCOURSEPROJECT_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

	//ќбъ€вл€ем положение камеры прикрепленна€ к руке персонажа
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		class USpringArmComponent* CameraBoom;

	//ќбъ€вл€ем камеру персонажа
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		class UCameraComponent* FollowCamera;

	UPROPERTY(BlueprintAssignable, Category = "Donats")
		FDonatScoreEvent GetDonat;
	//ќбъ€вл€ем методы ходьбы влево, вправо, вперЄд, назад, и прыжок 
		void MoveRight();
		void MoveLeft();
		void Jump();
		void StopJumping();

		UFUNCTION()
		void CollectDon();

	//ќбъ€вл€ем переменную смерти котора€ видна€ и редактируема во всех разделах движка
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		//int DonutsCollected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		int ScoresPoints;

	float Delay = 1;
	float BuffTimer = 0;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	 float Width;

	

};