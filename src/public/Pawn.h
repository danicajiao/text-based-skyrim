#pragma once
#include <iostream>
#include <cereal/archives/json.hpp>
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

	template<class Archive>
	void serialize(Archive & archive)
	{
		archive(CEREAL_NVP(level),
			CEREAL_NVP(health),
			CEREAL_NVP(stamina),
			CEREAL_NVP(magicka),
			CEREAL_NVP(totalWeight),
			CEREAL_NVP(maxCarryWeight),
			CEREAL_NVP(inventoryCount)
		);
	}

protected:
	int level;
	int health;
	int stamina;
	int magicka;
	float totalWeight;
	int maxCarryWeight;
	int inventoryCount;
};