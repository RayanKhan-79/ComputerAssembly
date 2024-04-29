#pragma once
#include<iostream>
using namespace std;

class Case
{
	string formFactor;
	string color;
	double price;

public:
	Case(string="", string="", double= 0);
	void getSpecs() const;
	
	string getFormFactor() const;
	string getColor() const;
	double getPrice() const;

	void setFormFactor(string value);
	void setColor(string value);
	void setPrice(double value);

};

