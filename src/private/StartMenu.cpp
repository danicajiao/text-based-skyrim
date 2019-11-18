#include "../public/StartMenu.h"
using namespace std;

void runStartMenu(HANDLE *hStdoutPtr, EStartType &startType)
{
	printLogo();
	printTitle();
	// delays execution of main menu
	this_thread::sleep_for(chrono::seconds(4));

	startType = EStartType::None;

	// loops until user chooses to either create or load a game
	while (startType == EStartType::None)
	{
		runMainMenu(hStdoutPtr, startType);
	}
}

void printLogo()
{
	// TODO: Find better way to align items
	cout << "\t\t\t\t                        .    .                      \n"
		 << "\t\t\t\t                       yo    oy                     \n"
		 << "\t\t\t\t                      sy .    ys                    \n"
		 << "\t\t\t\t                     oM. y+:. .Mo                   \n"
		 << "\t\t\t\t                    +My -ms++` yM/                  \n"
		 << "\t\t\t\t                   /MM: .   /+ :MM/                 \n"
		 << "\t\t\t\t                  :MMh/` +s+- ./hMM:                \n"
		 << "\t\t\t\t                 -NMM-  .Ms     -MMN-               \n"
		 << "\t\t\t\t                 mMMM--hsmMd/sh-:MMMm               \n"
		 << "\t\t\t\t                 :MMMMMMMMMMMMMMMMMM:               \n"
		 << "\t\t\t\t                  /MMMmNMMMMMMNmMMM/                \n"
		 << "\t\t\t\t                   +MM+`/-dMo/`+MM+                 \n"
		 << "\t\t\t\t                    sM:   .M/  /Mo                  \n"
		 << "\t\t\t\t                     yMy. `N:.yMs                   \n"
		 << "\t\t\t\t                      hM-`d: :My                    \n"
		 << "\t\t\t\t                       d-/s  :h                     \n"
		 << "\t\t\t\t                       `.-s  .`                     \n"
		 << "\t\t\t\t                        `y  `                       \n"
		 << "\t\t\t\t                         -Nm.                       \n"
		 << "\t\t\t\t                          :-                        \n"
		 << endl;
}

void printTitle()
{
	cout << "\t\t\t\t------------- The Elder Scrolls V: Skyrim -------------\n"
		 << "\t\t\t\t                  - CONSOLE EDITION -                  \n"
		 << endl;
}

void runMainMenu(HANDLE *hStdoutPtr, EStartType &startType)
{
	cls(*hStdoutPtr);
	printTitle();
	cout << "[1] New\n"
		 << "[2] Load\n"
		 << "[3] Credits\n"
		 << "[4] Quit\n"
		 << endl;

	int choice = getChoice(EMenuType::Main);

	// runs a menu to the users corresponding choice
	switch (choice)
	{
	case 1:
		runNewMenu(hStdoutPtr, startType);
		break;
	case 2:
		runLoadMenu(hStdoutPtr, startType);
		break;
	case 3:
		runCredits(hStdoutPtr, startType);
		break;
	case 4:
		runQuitMenu(hStdoutPtr, startType);
		break;
	default:
		cout << "Failed to run a menu" << endl;
		break;
	}
}

void runNewMenu(HANDLE *hStdoutPtr, EStartType &startType)
{
	cls(*hStdoutPtr);	// clears screen
	cout << "\t\t\t\t          ---------- Start New Game ----------\n\n"
		 << "[1] Yes\n"
		 << "[2] No\n"
		 << endl;

	int choice = getChoice(EMenuType::New);

	if (choice == 1)
	{
		// will cause the loop that runs the menus to exit when '1' (Yes) is selected
		startType = EStartType::New;
	}
	else
	{
		// returns back to main menu if '2' (No) is selected
		runMainMenu(hStdoutPtr, startType);
	}
}

void runLoadMenu(HANDLE *hStdoutPtr, EStartType &startType)
{
	cls(*hStdoutPtr);	// clears screen
	cout << "\t\t\t\t             ---------- Load Game ----------\n" << endl;

	int count = 0;
	string playername;
	string date;
	string time;
	string meridiem;

	ifstream savefile;
	savefile.open("data/saves.txt");

	cout << "[0] Cancel" << endl;

	if (savefile.fail())
	{
		cout << "\nFailed to open the saves file." << endl;
	}
	else
	{
		while (!savefile.eof())
		{
			savefile >> playername >> date >> time >> meridiem;
			count++;
			cout << "[" << count << "] " << playername << " " << date << " " << time << " " << meridiem << endl;
		}
	}
	cout << endl;

	savefile.close();

	int choice = getLoadSaveChoice(count);

	if (choice == 0)
	{
		runMainMenu(hStdoutPtr, startType);
	}
	else
	{
		startType = EStartType::Load;
	}
}

void runCredits(HANDLE *hStdoutPtr, EStartType &startType)
{
	cls(*hStdoutPtr);
	cout << "\t\t\t\t              ---------- Credits ----------\n\n"
		 << "Designed and programmed by Daniel Cajiao\n"
		 << "Inspired by Bethesda Game Studio's The Elder Scrolls V: Skyrim\n\n"
		 << "[0] Back\n"
		 << endl;

	int choice = getChoice(EMenuType::Credits);

	if (choice == 0)
	{
		runMainMenu(hStdoutPtr, startType);
	}
}

void runQuitMenu(HANDLE *hStdoutPtr, EStartType &startType)
{
	cls(*hStdoutPtr);
	cout << "\t\t\t\t               ---------- Quit ----------\n\n"
		 << "[1] Yes\n"
		 << "[2] No\n"
		 << endl;

	int choice = getChoice(EMenuType::Quit);

	if (choice == 1)
	{
		exit(0);
	}
	else
	{
		runMainMenu(hStdoutPtr, startType);
	}
}

int getChoice(EMenuType menu)
{
	int choice;
	
	if (menu == EMenuType::Main)
	{
		cout << "Select a choice: ";
		cin >> choice;
		cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
		cout << endl;
		while (choice < 1 || choice > 4)
		{
			cin.clear();	// clear bad input flag
			cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
			cout << "Invalid option. Please enter a number from '1' to '4': ";
			cin >> choice;
		}
	}
	else if (menu == EMenuType::New)
	{
		cout << "Start a new game?: ";
		cin >> choice;
		cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
		cout << endl;
		while (choice < 1 || choice > 2)
		{
			cin.clear();	// clear bad input flag
			cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
			cout << "Invalid option. Please enter either '1' or '2': ";
			cin >> choice;
		}
	}
	else if (menu == EMenuType::Credits)
	{
		cout << "Enter '0' to return: ";
		cin >> choice;
		cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
		cout << endl;
		while (choice != 0)
		{
			cin.clear();	// clear bad input flag
			cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
			cout << "Invalid option. Please enter the number '0' to go back: ";
			cin >> choice;
		}
	}
	else if (menu == EMenuType::Quit)
	{
		cout << "Are you should you want to quit?: ";
		cin >> choice;
		cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
		cout << endl;
		while (choice < 1 || choice > 2)
		{
			cin.clear();	// clear bad input flag
			cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
			cout << "Invalid option. Please enter either 1 or 2: ";
			cin >> choice;
		}
	}
	return choice;
}

int getLoadSaveChoice(int count)
{
	cout << "Select a save to load or enter '0' to cancel: ";
	int choice;
	cin >> choice;
	cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
	cout << endl;

	while (choice < 0 || choice > count)
	{
		cin.clear();	// clear bad input flag
		cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
		cout << "Invalid option. Please enter a number from '0' to '" << count << "': ";
		cin >> choice;
	}
	return choice;
}
