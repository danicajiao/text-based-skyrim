#include "../public/CharacterCreation.h"

void runCharacterCreation(HANDLE *hStdoutPtr)
{
	bool isFinished = false;

	while (isFinished == false)
	{
		runCreationMenu(hStdoutPtr, isFinished);
	}
}

void runCreationMenu(HANDLE *hStdoutPtr, bool &isFinished)
{
	cls(*hStdoutPtr);


	cout << "\t\t\t             ---------- Create Your Character ----------\n" << endl;

	cout << "[1] Race\n"
		<< "[2] Sex\n"
		<< "[3] Name\n"
		<< "[4] Done\n"
		<< endl;

	int choice = getChoice(ECreationMenuType::Main);

	switch (choice)
	{
	case 1:
		runRaceMenu(hStdoutPtr);
	default:
		break;
	}
}

void runRaceMenu(HANDLE *hStdoutPtr)
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

	default:
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
	}
	else if (menu == ECreationMenuType::Sex)
	{
		cout << "Select a sex: ";
		cin >> choice;
		cout << endl;
		while (choice < 1 || choice > 2)
		{
			cin.clear();	// clear bad input flag
			cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
			cout << "Invalid option. Please enter either '1' or '2': ";
			cin >> choice;
		}
	}
	else if (menu == ECreationMenuType::Name)
	{
		
	}


	return choice;
}