#pragma once
#include <iostream>
#include <cereal/archives/json.hpp>
using namespace std;

// TODO: Change class Pawn to be an abstract class
// abstract game object with fundamental stats; i.e. the player, NPC's, creatures, and unique characters
class Pawn
{
public:
	// default constructor; level: 1, health: 100, stamina: 100, magicka: 100, totalWeight: 0, maxCarryWeight: 150
	Pawn();
	// constructor; all member variables get defined through respective arguments
	Pawn(int level,
		int health,
		int stamina,
		int magicka,
		float totalCarryWeight,
		int maxCarryWeight,
		int inventoryCount
	);

	// gets the pawn's level
	int getLevel();
	// gets the pawn's health
	int getHealth();
	// gets the pawn's stamina
	int getStamina();
	// gets the pawn's magicka
	int getMagicka();
	// gets the pawn's total carry weight
	float getTotalCarryWeight();
	// gets the pawn's max carry weight
	int getMaxCarryWeight();
	// gets the pawn's inventory count
	int getInventoryCount();

	// this method lets cereal know which data members to serialize
	template<class Archive>
	void serialize(Archive & archive)
	{
		archive(CEREAL_NVP(level),
			CEREAL_NVP(health),
			CEREAL_NVP(stamina),
			CEREAL_NVP(magicka),
			CEREAL_NVP(totalCarryWeight),
			CEREAL_NVP(maxCarryWeight),
			CEREAL_NVP(inventoryCount)
		);
	}

protected:
	// the pawn's level
	int level;
	// the pawn's health
	int health;
	// the pawn's stamina
	int stamina;
	// the pawn's magicka
	int magicka;
	// the pawn's total carry weight
	float totalCarryWeight;
	// the pawn's max carry weight
	int maxCarryWeight;
	// the pawn's inventory count
	int inventoryCount;
};