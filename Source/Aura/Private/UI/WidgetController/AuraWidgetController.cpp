// Aymeric Neumann - "Create a multiplayer RPG with Unreal Engine's Gameplay Ability System (GAS)!" tutorial on Udemy by Stephen Ulibarri


#include "UI/WidgetController/AuraWidgetController.h"

void UAuraWidgetController::SetWigetControllerParams(const FWidgetControllerParams& WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
}

void UAuraWidgetController::BroadacstInitialValues()
{
	
}
