#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "ConsoleManagement.h"
#include "PPlayer.h"
#include "ERaces.h"
#include "EGenders.h"
using namespace std;

// enum value that is used for control flow in displaying and navigating menu types for the player's character creation
enum class ECreationMenuType
{
	Main,
	Race,
	Gender,
	Name,
	Done
};

// instanciates the player object and runs the character creation menu; takes a pointer to the console out handle 
void initCharacterCreation(HANDLE *hStdoutPtr);
// runs and displays the character creation menu where the race, gender, name, and done sub menus can be run from; takes a pointer to the console out handle, address of the player's object, and the address of the isFinished bool value 
void runCharacterCreationMenu(HANDLE *hStdoutPtr, PPlayer &playerTemp, bool &isFinished);
// runs and displays the race selection menu for the player's character; takes a pointer to the console out handle and the address of the player object
void runRaceMenu(HANDLE *hStdoutPtr, PPlayer &playerTemp);
// runs and displays the gender selection menu for the player's character; takes a pointer to the console out handle and the address of the player object
void runGenderMenu(HANDLE *hStdoutPtr, PPlayer &playerTemp);
// runs and displays the naming menu for the player's character;takes a pointer to the console out handle and the address of the player object 
void runNameMenu(HANDLE *hStdoutPtr, PPlayer &playerTemp);
// runs and displays the "done" menu prompting the user to confirm their changes; takes a pointer to the console out handle and the address of the isFinished bool value
void runDoneMenu(HANDLE *hStdoutPtr, bool &isFinished);
// displays a prompt and gets a choice from the user to navigate menus; takes a creation menu type enum's address
int getChoice(ECreationMenuType menu);
