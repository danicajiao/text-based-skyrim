#pragma once
#include "Pawn.h"
#include "ERaces.h"
#include "EGenders.h"

// the player object (NOTE: only one per World instance); inherited from the Pawn class and contains additional stats
class PPlayer : public Pawn
{
public:
	// default constructor; Pawn: see Pawn default constructor, playerName: "Prisoner", playerRace: ERace::Nord, playerGender: EGender::Male, skillPoints: 0 
	PPlayer();
	// constructor; all member variables get defined through respective arguments
	PPlayer(int playerLevel,
		int playerHealth,
		int playerStamina,
		int playerMagicka,
		float playerTotalWeight,
		int playerMaxCarryWeight,
		int playerInventoryCount,
		int skillPoints
	);

	// gets the player's name
	string getPlayerName();
	// gets the player's race
	ERace getPlayerRace();
	// gets the player's race as a string
	string getPlayerRaceString();
	// gets the player's gender
	EGender getPlayerGender();
	// gets the players gender as a string
	string getPlayerGenderString();
	// gets the player's skill points
	int getSkillPoints();
	// sets the player's race
	void setPlayerRace(ERace raceChoice);
	// sets the player's gender
	void setPlayerGender(EGender genderChoice);
	// sets the player's name
	void setPlayerName(string nameChoice);

	// this method lets cereal know which data members to serialize
	template<class Archive>
	void serialize(Archive & archive)
	{
		archive(cereal::make_nvp("inheritedPawn", cereal::base_class<Pawn>(this)));
		archive(CEREAL_NVP(playerName),
			CEREAL_NVP(playerRace),
			CEREAL_NVP(playerGender),
			CEREAL_NVP(skillPoints)
		);
	}

private:
	// the player's name
	string playerName;
	// the player's race
	ERace playerRace;
	// the player's gender
	EGender playerGender;
	// the player's skill points
	int skillPoints;
};

