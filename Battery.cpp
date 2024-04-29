#include "Battery.h"

Battery::Battery(int capacity, double price)
	: PowerSupply(40, "80 plus Bronze", price), capacity(capacity) {}

void Battery::getSpecs() const
{
	cout << "Battery capacity : " << capacity << "  ";
	PowerSupply::getSpecs();
}



int Battery::getCapacity() const
{
	return capacity;
}

void Battery::setCapacity(int value)
{
	capacity = value;
}