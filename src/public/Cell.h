#pragma once
#include <string>
#include <vector>
#include "ECellNames.h"

class Cell
{
public:
	// constructor that creates a hold cell
	Cell(EHold holdName);
	// constructor that creates a town cell
	Cell(ETown townName);
	// gets the cell's name
	std::string getCellName();
private:
	// the cell's name
	std::string cellName;
	// if cell has been discovered by player
	bool isDiscovered;
	// vector of subcells 
	std::vector<Cell> subcells;
};