#pragma once
#include<iostream>
using namespace std;

class StorageDevice
{
	string type;
	int capacity;
	double price;

public:
	StorageDevice(string, int, double);
	void getSpecs() const;
	
	string getType() const;
	int getCapacity() const;
	double getPrice() const;

	void setPrice(double value);
	void setCapacity(int value);
	void setType(string value);
	
};

