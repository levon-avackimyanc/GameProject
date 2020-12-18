// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyCourseProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MYCOURSEPROJECT_API AMyCourseProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	
	AMyCourseProjectGameModeBase();

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Score")
		int Score;

		UFUNCTION()
			void AddScores(int Value);
};
