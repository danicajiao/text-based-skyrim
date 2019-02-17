#pragma once
#include <string>
#include <vector>
#include "Pawn.h"
#include "Cell.h"

class World
{
public:
	World();	// Default constructor
	std::string getTime();
	void listSubCells();
	
private:
	unsigned int timeHour;
	unsigned int timeMinute;
	std::string semanticDay;
	std::vector<Cell> subCells;
};