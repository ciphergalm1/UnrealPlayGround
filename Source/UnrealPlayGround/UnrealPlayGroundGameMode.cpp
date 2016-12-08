// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "UnrealPlayGround.h"
#include "UnrealPlayGroundGameMode.h"
#include "UnrealPlayGroundPawn.h"

AUnrealPlayGroundGameMode::AUnrealPlayGroundGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AUnrealPlayGroundPawn::StaticClass();
}
