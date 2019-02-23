#pragma once
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include "ConsoleManagement.h"

enum class MenuType
{
	Main,
	New,
	Credits,
	Quit
};

void initStartMenu();
void printLogo();
void printTitle();
void runMainMenu(HANDLE hStdout, bool &startFlag);
void runNewMenu(HANDLE hStdout, bool &startFlag);
void runLoadMenu(HANDLE hStdout, bool &startFlag);
void runCredits(HANDLE hStdout);
void runQuitMenu(HANDLE hStdout, bool &startFlag);
int getChoice(MenuType menu);
int getLoadChoice(int count);

