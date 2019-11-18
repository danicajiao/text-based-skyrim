#pragma once
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include "ConsoleManagement.h"

// enum value that is used for control flow in displaying and navigating menu types for the main manu
enum class EMenuType
{
	Main,
	New,
	Credits,
	Quit
};

// enum value that is used for control flow in initiating a game
enum class EStartType
{
	None,
	New,
	Load
};

// runs and displays the start menu containing the logo and title; takes a pointer to the console out handle and the start type enum's address 
void runStartMenu(HANDLE *hStdoutPtr, EStartType &startType);
// displays the skyrim logo
void printLogo();
// displays the skyrim title
void printTitle();
// runs and displays the main menu where the start, load, credits, and quit sub menus can be run from; takes a pointer to the console out handle and the start type enum's address  
void runMainMenu(HANDLE *hStdoutPtr, EStartType &startType);
// runs and displays the new game menu where the user can start a new game; takes a pointer to the console out handle and the start type enum's address
void runNewMenu(HANDLE *hStdoutPtr, EStartType &startType);
// runs and displays the load game menu where the user can load a previous save; takes a pointer to the console out handle and the start type enum's address
void runLoadMenu(HANDLE *hStdoutPtr, EStartType &startType);
// runs and displays the credits menu containing developer credits; takes a pointer to the console out handle and the start type enum's address
void runCredits(HANDLE *hStdoutPtr, EStartType &startType);
// runs and displays the quit menu where the user can terminate the program; takes a pointer to the console out handle and the start type enum's address
void runQuitMenu(HANDLE *hStdoutPtr, EStartType &startType);
// displays a prompt and gets a choice from the user to navigate menus; takes a menu type enum's address
int getChoice(EMenuType menu);
// displays a prompt and gets a choice from the user to select which save to load up; takes a count of the number of saves found locally
int getLoadSaveChoice(int count);

