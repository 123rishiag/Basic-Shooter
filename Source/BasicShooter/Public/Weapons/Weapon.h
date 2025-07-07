// Basic Shooter

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

class USceneComponent;
class USkeletalMeshComponent;
class UParticleSystem;
class USoundBase;

UCLASS()
class BASICSHOOTER_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:
	AWeapon();
	virtual void Tick(float DeltaTime) override;

	void PullTrigger();

protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* Mesh;

	UPROPERTY(EditDefaultsOnly)
	UParticleSystem* MuzzleFlash;

	UPROPERTY(EditDefaultsOnly)
	USoundBase* MuzzleSound;

	UPROPERTY(EditDefaultsOnly)
	UParticleSystem* ImpactEffect;

	UPROPERTY(EditDefaultsOnly)
	USoundBase* ImpactSound;

	UPROPERTY(EditAnywhere)
	float MaxRange = 1000.f;

	UPROPERTY(EditAnywhere)
	float DamageAmount = 10.f;

	bool WeaponTrace(FHitResult& Hit, FVector& ShotDirection);

	AController* GetOwnerController() const;

};
