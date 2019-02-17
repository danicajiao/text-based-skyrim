#include "../public/StartMenu.h"
using namespace std;

void initStartMenu()
{
	HANDLE hStdout;		// console screen handle
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

	printLogo();
	printTitle();
	this_thread::sleep_for(chrono::seconds(4));
	cls(hStdout);	// clears console screen
	printTitle();
	printMenuElements();
	getChoice();
}

void printLogo()
{
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
		 << "\t\t\t\t\t\t  - CONSOLE EDITION -\n" << endl;
}

void printMenuElements()
{
	cout << "[1] New\n"
		 << "[2] Load\n"
		 << "[3] Credits\n"
		 << "[4] Quit\n"
		 << endl;
}

int getChoice()
{
	int choice;
	cout << "Select an option: ";
	cin >> choice;
	while (choice < 1 || choice > 4)
	{
		cin.clear();	// clear bad input flag
		cin.ignore(256, '\n');	// clear (up to 256) characters out of the buffer until a '\n' character is removed
		cout << "Invalid option. Please enter a number from 1 to 4: ";
		cin >> choice;
	}
	return choice;
}
