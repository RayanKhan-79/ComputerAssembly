#include "NetworkCard.h"

NetworkCard::NetworkCard(string type, int speed, double price) : type(type), speed(speed), price(price) {}

void NetworkCard::getSpecs() const
{
	cout << "Network Card : " << type << "  speed : " << speed << "Mbps\n";
}



string NetworkCard::getType() const
{
	return type;
}

int NetworkCard::getSpeed() const
{
	return speed;
}

double NetworkCard::getPrice() const
{
	return price;
}

void NetworkCard::setPrice(double value)
{
	price = value;
}

void NetworkCard::setSpeed(int value)
{
	speed = value;
}

void NetworkCard::setType(string value)
{
	type = value;
}