#include "PCTablet.h"

PCTablet::PCTablet(PCMotherBoard* motherBoard, string caseColor, Battery* battery, double cost)
	: motherBoard(motherBoard), battery(battery), Computer(new Case("ATX-Micro", caseColor))
{
	this->battery;
	this->cost = cost;
}

void PCTablet::getSpecs() const
{
	cout << "\nSpecs\n";
	motherBoard->getSpecs();
	battery->getSpecs();
	deviceCase->getSpecs();
}
