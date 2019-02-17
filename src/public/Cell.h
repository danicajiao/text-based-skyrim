#pragma once
#include <string>
#include <vector>
#include "ECellNames.h"

class Cell
{
public:
	// Constructor that creates a hold cell
	Cell(EHold holdName);
	// Constructor that creates a town cell
	Cell(ETown townName);
	std::string getCellName();
private:
	std::string cellName;
	bool isDiscovered;
	std::vector<Cell> subCells;
};