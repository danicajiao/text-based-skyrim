#include "../public/ConsoleManagement.h"
#include "../public/StartMenu.h"
#include "../public/World.h"
using namespace std;

int main()
{
	HANDLE hStdout;
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

	bool startFlag;
	initStartMenu(startFlag);

	if (startFlag)
	{
		cls(hStdout);	// Clear console screen
		// Check if first startup
			// Run first time sequence
		// Generate World Cells
		World skyrim;
		skyrim.listSubCells();
	}

	return 0;
}