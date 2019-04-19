// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SpeGameJamGameMode.h"
#include "SpeGameJamHUD.h"
#include "SpeGameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpeGameJamGameMode::ASpeGameJamGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASpeGameJamHUD::StaticClass();
}
