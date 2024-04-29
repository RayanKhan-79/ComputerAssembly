#pragma once
#include<iostream>
using namespace std;

class MainMemory
{
	int capacity;
	string technologyType;

public:
	MainMemory(int,string);
	void getSpecs() const;

	string getTechnology() const;
	int getCapacity() const;
	void setTechnologyType(string value);
	void setCapacity(int value);


};

