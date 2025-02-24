#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"

#include "TriggerBoxLogger.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogCustomTriggerBox, Log, All);

UCLASS()
class CAPSADEMO_API ATriggerBox_Logger_Error : public ATriggerBox
{
	GENERATED_BODY()

public:
	ATriggerBox_Logger_Error();

protected:
	virtual void BeginPlay() override;
	
private:	
	UFUNCTION()
	void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
};
