#include "MacLaptop.h"

MacLaptop::MacLaptop(AppleMotherBoard* motherBoard, string caseColor, Battery* battery, double cost)
	: motherBoard(motherBoard), battery(battery), Computer(new Case("ATX-Mini", caseColor))
{
	this->battery = battery;
	this->cost = cost;
}

void MacLaptop::getSpecs() const
{
	cout << "\nSpecs\n";
	motherBoard->getSpecs();
	battery->getSpecs();
	deviceCase->getSpecs();
}
