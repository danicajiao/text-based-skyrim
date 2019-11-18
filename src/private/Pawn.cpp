#include "../public/Pawn.h"
using namespace std;

Pawn::Pawn() :
	level(1),
	health(100),
	stamina(100),
	magicka(100),
	totalCarryWeight(0),
	maxCarryWeight(150),
	inventoryCount(0)
{
	//...
}

Pawn::Pawn(int level,
	int health,
	int stamina,
	int magicka,
	float totalWeight,
	int maxCarryWeight,
	int inventoryCount) : 
	level(level),
	health(health),
	stamina(stamina),
	magicka(magicka),
	totalCarryWeight(totalCarryWeight),
	maxCarryWeight(maxCarryWeight),
	inventoryCount(inventoryCount)
{
	//...
}

int Pawn::getLevel()
{
	return level;
}

int Pawn::getHealth()
{
	return health;
}

int Pawn::getStamina()
{
	return stamina;
}

int Pawn::getMagicka()
{
	return magicka;
}

float Pawn::getTotalCarryWeight()
{
	return totalCarryWeight;
}

int Pawn::getMaxCarryWeight()
{
	return maxCarryWeight;
}

int Pawn::getInventoryCount()
{
	return inventoryCount;
}
