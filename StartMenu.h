#pragma once
#include <stdlib.h>
#include <iostream>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include "ConsoleManagement.h"

void initStartMenu();
void printLogo();
void printTitle();
void printMenuElements();
int getChoice();