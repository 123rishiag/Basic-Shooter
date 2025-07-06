// Basic Shooter

#pragma once

#include "CoreMinimal.h"
#include "GameModes/ShooterGameModeBase.h"
#include "KillEmAllGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BASICSHOOTER_API AKillEmAllGameMode : public AShooterGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled) override;
};
