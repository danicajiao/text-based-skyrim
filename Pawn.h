#pragma once
#include <iostream>
#include <vector>

class Pawn
{
public:
	Pawn(int level, int baseHealth, int baseStamina, int baseMagicka, int totalWeight, int maxCarryWeight, int inventoryCount);  //constructor

	int getLevel();
	int getBaseHealth();
	int getBaseStamina();
	int getBaseMagicka();
	int getTotalWeight();
	int getMaxCarryWeight();
	int getInventoryCount();

private:
	int level;
	int baseHealth;
	int baseStamina;
	int baseMagicka;
	int totalWeight;
	int maxCarryWeight;
	int inventoryCount;
};