#include "PhysicalMemory.h"

PhysicalMemory::PhysicalMemory(string type,MainMemory* RAM, StorageDevice* storageDevice ) 
	: technology(type), RAM(RAM), storageDevice(storageDevice), capacity(RAM->getCapacity() + storageDevice->getCapacity()) {}


void PhysicalMemory::getSpecs() const
{
	cout << "Physical Memory :" << technology << '\n';
	RAM->getSpecs();
	storageDevice->getSpecs();
}

MainMemory* PhysicalMemory::getRam() const
{
	return RAM;
}

StorageDevice* PhysicalMemory::getStorage() const
{
	return storageDevice;
}

int PhysicalMemory::getCapacity() const
{
	return capacity;
}
string PhysicalMemory::getTechnology() const
{
	return technology;
}

void PhysicalMemory::setTechnology(string value)
{
	technology = value;
}

void PhysicalMemory::setCapacity(int value)
{
	capacity = value;
}

