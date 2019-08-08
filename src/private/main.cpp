#include "../public/ConsoleManagement.h"
#include "../public/StartMenu.h"
#include "../public/World.h"
#include "../../scripts/prelude/public/PreludeScript.h"
#include "../public/CharacterCreation.h"
#include "../public/PPlayer.h"
using namespace std;

int main()
{
	// std output (console screen) handle
	HANDLE hStdout;
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	// std output handle pointer
	HANDLE *hStdoutPtr = &hStdout;

	// enum flag that will be used to determine whether a new game is launched, a saved game is loaded, or will remain in the start menu
	EStartType startFlag;
	runStartMenu(startFlag, hStdoutPtr);
	if (startFlag == EStartType::New)
	{
		runPreludeScript(hStdoutPtr);
		initCharacterCreation(hStdoutPtr);
	}

	return 0;
}