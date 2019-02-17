#include "../public/Pawn.h"
using namespace std;

Pawn::Pawn(int level, int baseHealth, int baseStamina, int baseMagicka, int totalWeight, int maxCarryWeight, int inventoryCount) : level(level), baseHealth(baseHealth), baseStamina(baseStamina), baseMagicka(baseMagicka), totalWeight(totalWeight), maxCarryWeight(maxCarryWeight), inventoryCount(inventoryCount)
{
	//...
}

int Pawn::getLevel()
{
	return level;
}

int Pawn::getBaseHealth()
{
	return baseHealth;
}

int Pawn::getBaseStamina()
{
	return baseStamina;
}

int Pawn::getBaseMagicka()
{
	return baseMagicka;
}

int Pawn::getTotalWeight()
{
	return totalWeight;
}

int Pawn::getMaxCarryWeight()
{
	return maxCarryWeight;
}

int Pawn::getInventoryCount()
{
	return inventoryCount;
}