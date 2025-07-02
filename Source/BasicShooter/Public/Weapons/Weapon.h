// Basic Shooter

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

class USceneComponent;
class USkeletalMeshComponent;

UCLASS()
class BASICSHOOTER_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:
	AWeapon();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* Mesh;

};
