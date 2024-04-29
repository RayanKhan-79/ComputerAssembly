#include "StorageDevice.h"

StorageDevice::StorageDevice(string type, int capacity, double price) : type(type), capacity(capacity), price(price) {}

void StorageDevice::getSpecs() const
{
	cout << "StorageDevice : " << capacity << "GB  " << type << '\n';
}


string StorageDevice::getType() const
{
	return type;
}

int StorageDevice::getCapacity() const
{
	return capacity;
}

double StorageDevice::getPrice() const
{
	return price;
}

void StorageDevice::setType(string value)
{
    type = value;
}

void StorageDevice::setCapacity(int value)
{
    capacity = value;
}

void StorageDevice::setPrice(double value)
{
    price = value;
}

