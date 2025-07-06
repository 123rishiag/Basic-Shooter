// Basic Shooter


#include "Characters/Controllers/ShooterPlayerController.h"
#include "TimerManager.h"

void AShooterPlayerController::GameHasEnded(AActor* EndGameFocus, bool bIsWinner)
{
	Super::GameHasEnded(EndGameFocus, bIsWinner);

	GetWorldTimerManager().SetTimer(RestartTimer, this, &APlayerController::RestartLevel, RestartDelay);

}
