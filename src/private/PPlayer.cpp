#include "../public/PPlayer.h"

PPlayer::PPlayer() : Pawn(), playerName("Prisoner"), playerRace(ERace::Nord), playerGender(EGender::Male), skillPoints(0)
{
	//...
}

PPlayer::PPlayer(int playerLevel,
	int playerHealth,
	int playerStamina,
	int playerMagicka,
	float playerTotalWeight,
	int playerMaxCarryWeight,
	int playerInventoryCount,
	int skillPoints) :
	Pawn(playerLevel,
		playerHealth,
		playerStamina,
		playerMagicka,
		playerTotalWeight,
		playerMaxCarryWeight,
		playerInventoryCount),
	playerName("Prisoner"),
	playerRace(ERace::Nord),
	playerGender(EGender::Male),
	skillPoints(skillPoints)
{
	//...
}

string PPlayer::getPlayerName()
{
	return playerName;
}

ERace PPlayer::getPlayerRace()
{
	return playerRace;
}

string PPlayer::getPlayerRaceString()
{
	switch (playerRace)
	{
	case ERace::Argonian:
		return "Argonian";
		break;
	case ERace::Breton:
		return "Breton";
		break;
	case ERace::DarkElf:
		return "Dark Elf";
		break;
	case ERace::HighElf:
		return "High Elf";
		break;
	case ERace::Imperial:
		return "Imperial";
		break;
	case ERace::Khajiit:
		return "Khajiit";
		break;
	case ERace::Nord:
		return "Nord";
		break;
	case ERace::Orc:
		return "Orc";
		break;
	case ERace::Redguard:
		return "Redguard";
		break;
	case ERace::WoodElf:
		return "Wood Elf";
		break;
	default:
		return "ERROR";
		break;
	}
}

EGender PPlayer::getPlayerGender()
{
	return playerGender;
}

string PPlayer::getPlayerGenderString()
{
	switch (playerGender)
	{
	case EGender::Male:
		return "Male";
		break;
	case EGender::Female:
		return "Female";
		break;
	default:
		return "ERROR";
		break;
	}
}

int PPlayer::getSkillPoints()
{
	return skillPoints;
}

void PPlayer::setPlayerRace(ERace raceChoice)
{
	playerRace = raceChoice;
}

void PPlayer::setPlayerGender(EGender genderChoice)
{
	playerGender = genderChoice;
}

void PPlayer::setPlayerName(string nameChoice)
{
	playerName = nameChoice;
}
