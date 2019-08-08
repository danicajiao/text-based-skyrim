#pragma once
#include "Pawn.h"
#include "ERaces.h"
#include "EGenders.h"

class PPlayer : public Pawn
{
public:
	// default constructor
	PPlayer();
	// constructor
	PPlayer(int playerLevel,
		int playerHealth,
		int playerStamina,
		int playerMagicka,
		float playerTotalWeight,
		int playerMaxCarryWeight,
		int playerInventoryCount,
		int skillPoints);
	string getPlayerName();
	ERace getPlayerRace();
	string getPlayerRaceString();
	EGender getPlayerGender();
	string getPlayerGenderString();
	int getSkillPoints();
	void setPlayerRace(ERace raceChoice);
	void setPlayerGender(EGender genderChoice);
	void setPlayerName(string nameChoice);
private:
	string playerName;
	ERace playerRace;
	EGender playerGender;
	int skillPoints;
};