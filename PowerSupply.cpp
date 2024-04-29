#include "PowerSupply.h"

PowerSupply::PowerSupply(int wattage, string efficiencyRating, double price) 
	: wattage(wattage), efficiencyRating(efficiencyRating), price(price) {}

void PowerSupply::getSpecs() const
{
	cout << "Rating : " << efficiencyRating << "  Wattage : " << wattage << '\n';
}



int PowerSupply::getWattage() const
{
	return wattage;
}

string PowerSupply::getRating() const
{
	return efficiencyRating;
}

double PowerSupply::getPrice() const
{
	return price;
}

void PowerSupply::setWattage(int value)
{
	wattage = value;
}

void PowerSupply::setRating(string value)
{
	efficiencyRating = value;
}

void PowerSupply::setPrice(double value)
{
	price = value;
}



