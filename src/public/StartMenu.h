#pragma once
#include <stdlib.h>
#include <iostream>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include "ConsoleManagement.h"

void initStartMenu();
void printLogo();
void printTitle();
void runMainMenu();
void runNewMenu(HANDLE hStdout);
void runLoadMenu(HANDLE hStdout);
void runCredits(HANDLE hStdout);
int getChoice();