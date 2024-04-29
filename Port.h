#pragma once
#include<iostream>
using namespace std;
class Port
{
	string type;
	int baudRate;

public:
	Port(string, int baudRate = 0);
	void getSpecs() const;

	string getType() const;
	int getBaudRate() const;
	void setType(string);
	void setBaudRate(int);

};

