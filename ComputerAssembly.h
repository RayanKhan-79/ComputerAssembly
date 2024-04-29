#pragma once
#include<iostream>
#include"PowerSupply.h"
#include"StorageDevice.h"
#include"NetworkCard.h"
#include"Computer.h"
#include"Case.h"
#include"PhysicalMemory.h"
#include"Battery.h"

using namespace std;

class ComputerAssembly
{
protected:
	double totalCost;
	ComputerAssembly* CA;
	Computer* Comp;

	PowerSupply* powerSupply;
	Battery* battery;
	NetworkCard* networkCard;
	StorageDevice* storageDevice;
	Case* deviceCase;
	MainMemory* RAM;
	PhysicalMemory* physicalMemory;

public:
	ComputerAssembly();
	~ComputerAssembly();
	StorageDevice* createStorageDevice();	
	StorageDevice* createStorageDevice(string); // for tablet
	NetworkCard* createNetworkCard();
	PowerSupply* createPowerSupply(int option1, int option2);
	Battery* createBattery(int lowerLimit, int upperLimit);
	MainMemory* createMainMemory(int lowerLimit, int upperLimit, int chipSize);
	string chooseCaseColor();
	virtual void Build(Computer*& Comp, int);
	void DisplayMenu();

};


