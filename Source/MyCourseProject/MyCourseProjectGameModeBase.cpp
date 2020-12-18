// Copyright Epic Games, Inc. All Rights Reserved.


#include "MyCourseProjectGameModeBase.h"

AMyCourseProjectGameModeBase::AMyCourseProjectGameModeBase()
{
	Score = 0;
}

void AMyCourseProjectGameModeBase::AddScores(int Value)
{
	Score += Value;
}
