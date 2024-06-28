// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraCopyGameMode.h"
#include "LyraCopyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALyraCopyGameMode::ALyraCopyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
