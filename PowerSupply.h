#pragma once
#include<iostream>
using namespace std;

class PowerSupply
{
	int wattage;
	string efficiencyRating;
	double price;

public:
	PowerSupply(int, string, double price);
	void getSpecs() const;
	
	int getWattage() const;
	string getRating() const;
	double getPrice() const;

	void setWattage(int);
	void setRating(string);
	void setPrice(double);

	
};

