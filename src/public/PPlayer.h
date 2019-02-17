#pragma once
#include "Pawn.h"

class PPlayer : public Pawn
{
public:
	PPlayer(int level, int baseHealth, int baseStamina, int baseMagicka, int totalWeight, int maxCarryWeight, int inventoryCount, std::string playerRace);

	std::string getPlayerRace();
	int getSkillPoints();
private:
	std::string playerRace;
	int skillPoints;
};