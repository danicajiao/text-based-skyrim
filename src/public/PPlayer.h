#pragma once
#include "Pawn.h"

class PPlayer : public Pawn
{
public:
	PPlayer(int level,
		int baseHealth,
		int baseStamina,
		int baseMagicka,
		int totalWeight,
		int maxCarryWeight,
		int inventoryCount,
		string playerRace);

	string getPlayerRace();
	int getSkillPoints();
private:
	string playerRace;
	int skillPoints;
};