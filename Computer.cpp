#include "Computer.h"

Computer::Computer(Case* deviceCase)
	:deviceCase(deviceCase) {}

void Computer::getSpecs() const {}


double Computer::getcost() const 
{ 
	return cost; 
}

Case* Computer::getCase() const
{
	return deviceCase;
}

void Computer::setCost(double value)
{
	cost = value;
}

void Computer::setCase(Case* value)
{
	deviceCase = value;
}