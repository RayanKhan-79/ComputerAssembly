#include "Port.h"

Port::Port(string type, int baudRate) : type(type), baudRate(baudRate) {}

void Port::getSpecs() const 
{
	cout << type;
	if (baudRate)
		cout << "  baud rate: " << baudRate;
	cout << '\n';
}


string Port::getType() const
{
	return type;
}

int Port::getBaudRate() const
{
	return baudRate;
}

void Port::setType(string value)
{
	type = value;
}

void Port::setBaudRate(int value)
{
	baudRate = value;
}

