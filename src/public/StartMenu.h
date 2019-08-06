//#pragma once
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include "ConsoleManagement.h"

enum class EMenuType
{
	Main,
	New,
	Credits,
	Quit
};

enum class EStartType
{
	None,
	New,
	Load
};

void runStartMenu(EStartType &startFlag, HANDLE *hStdoutPtr);
void printLogo();
void printTitle();
void runMainMenu(HANDLE *hStdoutPtr, EStartType &startFlag);
void runNewMenu(HANDLE *hStdoutPtr, EStartType &startFlag);
void runLoadMenu(HANDLE *hStdoutPtr, EStartType &startFlag);
void runCredits(HANDLE *hStdoutPtr, EStartType &startFlag);
void runQuitMenu(HANDLE *hStdoutPtr, EStartType &startFlag);
int getChoice(EMenuType menu);
int getLoadSaveChoice(int count);

