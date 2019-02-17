#include "../public/World.h"
using namespace std;

World::World() : timeHour(12), timeMinute(0), semanticDay("Morndas")
{
	/// initializes the 9 hold cells to the subCells of World instance
	subCells = {
		Cell(EHold::Eastmarch),
		Cell(EHold::Falkreath),
		Cell(EHold::Haafingar),
		Cell(EHold::Hjaalmarch),
		Cell(EHold::ThePale),
		Cell(EHold::TheReach),
		Cell(EHold::TheRift),
		Cell(EHold::Whiterun),
		Cell(EHold::Winterhold)
	};
}

string World::getTime()
{
	// 
	string parsedTime;
	string parsedMins;

	if (timeHour > 12)
	{
		cout << "Hours value is not valid." << endl;
	}
	else if (timeMinute >= 60)
	{
		cout << "Minutes value is not valid." << endl;
	}
	else
	{
		if (timeMinute < 10)
		{
			parsedMins = "0" + to_string(timeMinute);
		}
		else
		{
			parsedMins = to_string(timeMinute);
		}

		parsedTime = to_string(timeHour) + ":" + parsedMins;
		//cout << parsedTime << endl;
	}
	return parsedTime;
}

void World::listSubCells()
{
	for (unsigned int i = 0; i < subCells.size(); i++)
	{
		cout << subCells[i].getCellName() << endl;
	}
}
