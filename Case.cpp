#include "Case.h"

Case::Case(string formFactor, string color, double price) : formFactor(formFactor), color(color), price(price) {}

void Case::getSpecs() const
{
	cout << "Case : " << formFactor << "  Color : " << color << '\n';
}



string Case::getFormFactor() const
{
	return formFactor;
}

string Case::getColor() const
{
	return color;
}

double Case::getPrice() const
{
	return price;
}

void Case::setFormFactor(string value)
{
    formFactor = value;
}

void Case::setColor(string value)
{
    color = value;
}

void Case::setPrice(double value)
{
    price = value;
}

