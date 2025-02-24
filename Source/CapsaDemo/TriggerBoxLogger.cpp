#include "TriggerBoxLogger.h"

DEFINE_LOG_CATEGORY(LogCustomTriggerBox)

ATriggerBox_Logger_Error::ATriggerBox_Logger_Error()
{
	OnActorBeginOverlap.AddDynamic(this, &ATriggerBox_Logger_Error::OnOverlapBegin);
}

void ATriggerBox_Logger_Error::BeginPlay()
{
	Super::BeginPlay();
}


void ATriggerBox_Logger_Error::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
	UE_LOG(LogCustomTriggerBox, Error, TEXT("OnBeginOverlap called"));
}