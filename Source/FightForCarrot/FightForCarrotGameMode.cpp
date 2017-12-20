// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FightForCarrotGameMode.h"
#include "FightForCarrotCharacter.h"

AFightForCarrotGameMode::AFightForCarrotGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AFightForCarrotCharacter::StaticClass();	
}
