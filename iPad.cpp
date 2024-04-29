#include "iPad.h"

iPad::iPad(AppleMotherBoard* motherBoard, string caseColor, Battery* battery, double cost)
	: motherBoard(motherBoard), battery(battery), Computer(new Case("ATX-Micro", caseColor))
{
	this->battery = battery;
	this->cost = cost;
}

void iPad::getSpecs() const
{
	cout << "\nSpecs\n";
	motherBoard->getSpecs();
	battery->getSpecs();
	deviceCase->getSpecs();
}