#pragma once
#include <iostream>
using namespace std;

class Pawn
{
public:
	// default constructor
	Pawn();
	// constructor
	Pawn(int level,
		int health,
		int stamina,
		int magicka,
		float totalWeight,
		int maxCarryWeight,
		int inventoryCount);

	int getLevel();
	int getHealth();
	int getStamina();
	int getMagicka();
	float getTotalWeight();
	int getMaxCarryWeight();
	int getInventoryCount();

protected:
	int level;
	int health;
	int stamina;
	int magicka;
	float totalWeight;
	int maxCarryWeight;
	int inventoryCount;
};