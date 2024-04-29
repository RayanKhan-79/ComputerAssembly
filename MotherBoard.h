#pragma once
#include<iostream>
#include"MainMemory.h"
#include"Port.h"
#include"StorageDevice.h"
#include"NetworkCard.h"
#include"CPU.h"
#include"PhysicalMemory.h"
using namespace std;

class MotherBoard
{
protected:
	int numOfPorts;
	Port** port;
	
	PhysicalMemory* physicalMemory;
	NetworkCard* networkCard;

public:
	MotherBoard(PhysicalMemory*, NetworkCard*, int);
	~MotherBoard();
	void AddPorts(string, int, int);
	void getSpecs() const;
};


