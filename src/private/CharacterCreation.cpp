#include "../public/CharacterCreation.h"

void initCharacterCreation(HANDLE *hStdoutPtr)
{
	PPlayer player;
	bool isFinished = false;


	while (isFinished == false)
	{
		runCharacterCreationMenu(hStdoutPtr, player, isFinished);
	}

	ofstream fileOut("data/player.json");

	{
		cereal::JSONOutputArchive oarchive(fileOut);
		oarchive(CEREAL_NVP(player));
	}
}

void runCharacterCreationMenu(HANDLE *hStdoutPtr, PPlayer &playerTemp, bool &isFinished)
{
	cls(*hStdoutPtr);
	cout << "\t\t\t             ---------- Create Your Character ----------\n" << endl;

	cout << "[1] Race\n"
		<< "[2] Gender\n"
		<< "[3] Name\n"
		<< "[4] Done\n"
		<< endl;

	cout << "Name: " << playerTemp.getPlayerName() << "\t\tRace: " << playerTemp.getPlayerRaceString() << "\t\tGender: " << playerTemp.getPlayerGenderString() << endl << endl;

	int choice = getChoice(ECreationMenuType::Main);

	switch (choice)
	{
	case 1:
		runRaceMenu(hStdoutPtr, playerTemp);
		break;
	case 2:
		runGenderMenu(hStdoutPtr, playerTemp);
		break;
	case 3:
		runNameMenu(hStdoutPtr, playerTemp);
		break;
	case 4:
		runDoneMenu(hStdoutPtr, isFinished);
		break;
	default:
		break;
	}
}

void runRaceMenu(HANDLE *hStdoutPtr, PPlayer &playerTemp)
{
	cls(*hStdoutPtr);
	cout << "\t\t\t             ---------- Create Your Character ----------\n" << endl;

	cout << "[1] Argonian\n"
		<< "[2] Breton\n"
		<< "[3] Dark Elf\n"
		<< "[4] High Elf\n"
		<< "[5] Imperial\n"
		<< "[6] Khajiit\n"
		<< "[7] Nord\n"
		<< "[8] Orc\n"
		<< "[9] Redguard\n"
		<< "[10] Wood Elf\n"
		<< endl;

	int choice = getChoice(ECreationMenuType::Race);

	switch (choice)
	{
	case 1:
		playerTemp.setPlayerRace(ERace::Argonian);
		break;
	case 2:
		playerTemp.setPlayerRace(ERace::Breton);
		break;
	case 3:
		playerTemp.setPlayerRace(ERace::DarkElf);
		break;
	case 4:
		playerTemp.setPlayerRace(ERace::HighElf);
		break;
	case 5:
		playerTemp.setPlayerRace(ERace::Imperial);
		break;
	case 6:
		playerTemp.setPlayerRace(ERace::Khajiit);
		break;
	case 7:
		playerTemp.setPlayerRace(ERace::Nord);
		break;
	case 8:
		playerTemp.setPlayerRace(ERace::Orc);
		break;
	case 9:
		playerTemp.setPlayerRace(ERace::Redguard);
		break;
	case 10:
		playerTemp.setPlayerRace(ERace::WoodElf);
		break;
	default:
		cout << "\nAn error occured setting the player race.\n" << endl;
		break;
	}
}

void runGenderMenu(HANDLE *hStdoutPtr, PPlayer & playerTemp)
{
	cls(*hStdoutPtr);
	cout << "\t\t\t             ---------- Create Your Character ----------\n" << endl;

	cout << "[1] Male\n"
		<< "[2] Female\n"
		<< endl;

	int choice = getChoice(ECreationMenuType::Gender);

	switch (choice)
	{
	case 1:
		playerTemp.setPlayerGender(EGender::Male);
		break;
	case 2:
		playerTemp.setPlayerGender(EGender::Female);
		break;
	default:
		cout << "\nAn error occured setting the player gender.\n" << endl;
		break;
	}
}

void runNameMenu(HANDLE *hStdoutPtr, PPlayer & playerTemp)
{
	cls(*hStdoutPtr);
	char tempName[100];
	cout << "\t\t\t             ---------- Create Your Character ----------\n" << endl;

	cout << "Type in a name for your character: ";
	cin.getline(tempName, sizeof(tempName));
	playerTemp.setPlayerName(tempName);
}

void runDoneMenu(HANDLE * hStdoutPtr, bool &isFinished)
{
	cls(*hStdoutPtr);
	cout << "\t\t\t             ---------- Create Your Character ----------\n" << endl;

	cout << "[1] Yes\n"
		<< "[2] No\n"
		<< endl;

	int choice = getChoice(ECreationMenuType::Done);

	switch (choice)
	{
	case 1:
		isFinished = true;
		break;
	case 2:
		isFinished = false;
		break;
	default:
		isFinished = false;
		break;
	}
}

int getChoice(ECreationMenuType menu)
{
	int choice;

	if (menu == ECreationMenuType::Main)
	{
		cout << "Select a characteristic to edit or enter '4' when done: ";
		cin >> choice;
		cout << endl;
		while (choice < 1 || choice > 4)
		{
			cin.clear();	// clear bad input flag
			cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
			cout << "Invalid option. Please enter a number from '1' to '4': ";
			cin >> choice;
		}
		cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
	}
	else if (menu == ECreationMenuType::Race)
	{
		cout << "Select a race: ";
		cin >> choice;
		cout << endl;
		while (choice < 1 || choice > 10)
		{
			cin.clear();	// clear bad input flag
			cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
			cout << "Invalid option. Please enter either '1' or '10': ";
			cin >> choice;
		}
		cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
	}
	else if (menu == ECreationMenuType::Gender)
	{
		cout << "Select a gender: ";
		cin >> choice;
		cout << endl;
		while (choice < 1 || choice > 2)
		{
			cin.clear();	// clear bad input flag
			cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
			cout << "Invalid option. Please enter either '1' or '2': ";
			cin >> choice;
		}
		cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
	}
	else if (menu == ECreationMenuType::Done)
	{
		cout << "Save the changes you've made to your character? (These can't be changed later): ";
		cin >> choice;
		cout << endl;
		while (choice < 1 || choice > 2)
		{
			cin.clear();	// clear bad input flag
			cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
			cout << "Invalid option. Please enter either '1' or '2': ";
			cin >> choice;
		}
		cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
	}
	return choice;
}