#pragma once
#include"PowerSupply.h"

class Battery : public PowerSupply
{
	int capacity;

public:
	Battery(int, double);
	void getSpecs() const;

	int getCapacity() const;
	void setCapacity(int);
};