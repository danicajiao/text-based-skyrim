#pragma once
#include <iostream>
#include <string>
#include "ConsoleManagement.h"
using namespace std;

enum class ECreationMenuType
{
	Main,
	Race,
	Sex,
	Name,
	Done
};

enum class ERace
{
	Argonian,
	Breton,
	DarkElf,
	HighElf,
	Imperial,
	Khajiit,
	Nord,
	Orc,
	Redguard,
	WoodElf
};

enum class ESex
{
	Male,
	Female
};

void runCharacterCreation(HANDLE *hStdoutPtr);
void runCreationMenu(HANDLE *hStdoutPtr, bool &isFinished);
int getChoice(ECreationMenuType menu);
void runRaceMenu(HANDLE *hStdoutPtr);