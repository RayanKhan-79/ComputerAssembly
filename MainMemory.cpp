#include "MainMemory.h"

MainMemory::MainMemory(int capacity, string technologyType) : capacity(capacity), technologyType(technologyType) {}

void MainMemory::getSpecs() const
{
	cout << "RAM : " << capacity << "GB   Technology : " << technologyType << '\n';
}


string MainMemory::getTechnology() const
{
	return technologyType;
}

int MainMemory::getCapacity() const
{
	return capacity;
}

void MainMemory::setTechnologyType(string value)
{
	technologyType = value;
}

void MainMemory::setCapacity(int value)
{
	capacity = value;
}