#pragma once
#include "Cell.h"
using namespace std;


Cell::Cell(EHold holdName)
{
	switch (holdName)
	{
	case EHold::Eastmarch:
		cellName = "Eastmarch";
		break;
	case EHold::Falkreath:
		cellName = "Falkreath Hold";
		break;
	case EHold::Haafingar:
		cellName = "Haafingar";
		break;
	case EHold::Hjaalmarch:
		cellName = "Hjaalmarch";
		break;
	case EHold::ThePale:
		cellName = "The Pale";
		break;
	case EHold::TheReach:
		cellName = "The Reach";
		break;
	case EHold::TheRift:
		cellName = "The Rift";
		break;
	case EHold::Whiterun:
		cellName = "Whiterun Hold";
		break;
	case EHold::Winterhold:
		cellName = "Winterhold";
		break;
	default:
		cellName = "null";
		break;
	}
}

Cell::Cell(ETown townName)
{
	switch (townName)
	{
	case ETown::Helgen:
		cellName = "Helgen";
		break;
	default:
		cellName = "null";
		break;
	}
}

string Cell::getCellName()
{
	return cellName;
}