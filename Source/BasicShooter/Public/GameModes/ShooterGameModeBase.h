// Basic Shooter

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShooterGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class BASICSHOOTER_API AShooterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void PawnKilled(APawn* PawnKilled);

};
