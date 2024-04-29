#pragma once
#include<iostream>
#include"Case.h"

using namespace std;

class Computer
{
protected:
	double cost = 0;
	Case* deviceCase;

public:
	Computer(Case* deviceCase);
	virtual void getSpecs() const;

	double getcost() const;
	Case* getCase() const;
	void setCost(double);
	void setCase(Case*);

};


