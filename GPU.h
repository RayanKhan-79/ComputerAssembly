#pragma once
#include<iostream>
using namespace std;

class GPU
{
	string brand;
	int memorySize;
	double price;

public:
	GPU(string, int, double price = 0);
	void getSpecs() const;

	string getBrand() const;
	int getMemory() const;
	double getPrice() const;

	void setBrand(string value);
	void setMemorySize(int value);
	void setPrice(double value);
};



