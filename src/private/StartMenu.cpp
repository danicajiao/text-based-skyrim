#include "../public/StartMenu.h"
using namespace std;

void initStartMenu(bool &startFlag)
{
	HANDLE hStdout;		// std output handle
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

	printLogo();
	printTitle();
	this_thread::sleep_for(chrono::seconds(4));

	startFlag = false;

	while (startFlag == false)
	{
		runMainMenu(hStdout, startFlag);
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

void runMainMenu(HANDLE hStdout, bool &startFlag)
{
	cls(hStdout);	// clears console screen
	printTitle();
	cout << "[1] New\n"
		 << "[2] Load\n"
		 << "[3] Credits\n"
		 << "[4] Quit\n"
		 << endl;

	int choice = getChoice(MenuType::Main);

	switch (choice)
	{
	case 1:
		runNewMenu(hStdout, startFlag);
		break;
	case 2:
		runLoadMenu(hStdout, startFlag);
		break;
	case 3:
		runCredits(hStdout, startFlag);
		break;
	case 4:
		runQuitMenu(hStdout, startFlag);
		break;
	default:
		cout << "Error running menu" << endl;
		break;
	}
}

void runNewMenu(HANDLE hStdout, bool &startFlag)
{
	cls(hStdout);
	cout << "\t\t\t\t          ---------- Start New Game ----------       \n\n"
		 << "[1] Yes\n"
		 << "[2] No\n"
		 << endl;

	int choice = getChoice(MenuType::New);

	if (choice == 1)
	{
		startFlag = true;
	}
	else
	{
		runMainMenu(hStdout, startFlag);
	}
}

void runLoadMenu(HANDLE hStdout, bool &startFlag)
{
	cls(hStdout);
	cout << "\t\t\t\t             ---------- Load Game ----------         \n" << endl;

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
		runMainMenu(hStdout, startFlag);
	}
	else
	{
		startFlag = true;
	}
}

void runCredits(HANDLE hStdout, bool &startFlag)
{
	cls(hStdout);
	cout << "\t\t\t\t              ---------- Credits ----------          \n\n"
		 << "Designed and programmed by Daniel Cajiao\n"
		 << "Inspired by Bethesda Game Studio's The Elder Scrolls V: Skyrim\n\n"
		 << "[0] Back\n"
		 << endl;

	int choice = getChoice(MenuType::Credits);

	if (choice == 0)
	{
		runMainMenu(hStdout, startFlag);
	}
}

void runQuitMenu(HANDLE hStdout, bool &startFlag)
{
	cls(hStdout);
	cout << "\t\t\t\t               ---------- Quit ----------            \n\n"
		 << "[1] Yes\n"
		 << "[2] No\n"
		 << endl;

	int choice = getChoice(MenuType::Quit);

	if (choice == 1)
	{
		exit(0);
	}
	else
	{
		runMainMenu(hStdout, startFlag);
	}
}

int getChoice(MenuType menu)
{
	int choice;
	
	if (menu == MenuType::Main)
	{
		cout << "Select a choice: ";
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
	else if (menu == MenuType::New)
	{
		cout << "Start a new game?: ";
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
	else if (menu == MenuType::Credits)
	{
		cout << "Enter '0' to return: ";
		cin >> choice;
		cout << endl;
		while (choice != 0)
		{
			cin.clear();	// clear bad input flag
			cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
			cout << "Invalid option. Please enter the number '0' to go back: ";
			cin >> choice;
		}
	}
	else if (menu == MenuType::Quit)
	{
		cout << "Are you should you want to quit?: ";
		cin >> choice;
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
