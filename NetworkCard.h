#pragma once
#include<iostream>
using namespace std;

class NetworkCard
{
	string type;
	int speed;
	double price;

public:
	NetworkCard(string, int, double);
	void getSpecs() const;

	string getType() const;
	int getSpeed() const;
	double getPrice() const;

	void setType(string value);
	void setSpeed(int value);
	void setPrice(double value);
};

