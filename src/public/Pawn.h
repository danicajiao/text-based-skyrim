#pragma once
#include <iostream>
using namespace std;

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