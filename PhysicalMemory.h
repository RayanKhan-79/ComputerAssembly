#pragma once
#include"MainMemory.h"
#include"StorageDevice.h"
#include<iostream>
using namespace std;

class PhysicalMemory
{
protected:
	int capacity;
	string technology;
	MainMemory* RAM;
	StorageDevice* storageDevice;


public:
	PhysicalMemory(string,MainMemory*,StorageDevice*);
	void getSpecs() const;

	MainMemory* getRam() const;
	StorageDevice* getStorage() const;

	int getCapacity() const;
	string getTechnology() const;
	void setTechnology(string value);
	void setCapacity(int value);
};

