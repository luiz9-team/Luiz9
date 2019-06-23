// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Luiz9GameMode.h"
#include "Luiz9PlayerController.h"
#include "Luiz9Character.h"
#include "UObject/ConstructorHelpers.h"

ALuiz9GameMode::ALuiz9GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ALuiz9PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}