// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SteamGameMode.h"
#include "SteamCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASteamGameMode::ASteamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Personnage/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
