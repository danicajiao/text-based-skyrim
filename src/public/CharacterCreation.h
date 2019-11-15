#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "ConsoleManagement.h"
#include "PPlayer.h"
#include "ERaces.h"
#include "EGenders.h"
using namespace std;

enum class ECreationMenuType
{
	Main,
	Race,
	Gender,
	Name,
	Done
};

void initCharacterCreation(HANDLE *hStdoutPtr);
void runCharacterCreationMenu(HANDLE *hStdoutPtr, PPlayer &playerTemp, bool &isFinished);
void runRaceMenu(HANDLE *hStdoutPtr, PPlayer &playerTemp);
void runGenderMenu(HANDLE *hStdoutPtr, PPlayer &playerTemp);
void runNameMenu(HANDLE *hStdoutPtr, PPlayer &playerTemp);
void runDoneMenu(HANDLE *hStdoutPtr, bool &isFinished);
int getChoice(ECreationMenuType menu);
