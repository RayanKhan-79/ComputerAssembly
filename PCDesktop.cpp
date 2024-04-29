#include "PCDesktop.h"

PCDesktop::PCDesktop(PCMotherBoard* motherBoard, Case* deviceCase, PowerSupply* poweCable, double cost)
	: motherBoard(motherBoard), powerCable(powerCable), Computer(deviceCase)
{
	this->powerCable = poweCable;
	this->cost = cost;
}

void PCDesktop::getSpecs() const
{
	cout << "\nSpecs\n";
	motherBoard->getSpecs();
	powerCable->getSpecs();
	deviceCase->getSpecs();
}