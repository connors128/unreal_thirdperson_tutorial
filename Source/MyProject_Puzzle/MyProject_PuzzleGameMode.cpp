// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject_PuzzleGameMode.h"
#include "MyProject_PuzzleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyProject_PuzzleGameMode::AMyProject_PuzzleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
