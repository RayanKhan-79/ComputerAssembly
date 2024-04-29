#include "GPU.h"

GPU::GPU(string brand, int memorySize, double price) : brand(brand), memorySize(memorySize), price(price) {}

void GPU::getSpecs() const
{
	cout << "GPU : " << brand << "  size : " <<  memorySize << "GB" << '\n';
}


string GPU::getBrand() const
{
	return brand;
}

int GPU::getMemory() const
{
	return memorySize;
}

double GPU::getPrice() const
{
	return price;
}


void GPU::setBrand(string value)
{
    brand = value;
}

void GPU::setMemorySize(int value)
{
    memorySize = value;
}

void GPU::setPrice(double value)
{
    price = value;
}
