// // Aymeric Neumann - "Create a multiplayer RPG with Unreal Engine's Gameplay Ability System (GAS)!" tutorial on Udemy by Stephen Ulibarri


#include "UI/HUD/AuraHUD.h"

#include "Blueprint/UserWidget.h"
#include "UI/Widget/AuraUserWidget.h"

void AAuraHUD::BeginPlay()
{
	Super::BeginPlay();
	UUserWidget* Widget = CreateWidget<UAuraUserWidget>(GetWorld(), OverlayWidgetClass);
	Widget->AddToViewport();
}
