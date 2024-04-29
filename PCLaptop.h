#pragma once
#include"Computer.h"
#include"PCMotherBoard.h"
#include"Battery.h"

class PCLaptop : public Computer
{
	Battery* battery;
	PCMotherBoard* motherBoard;

public:
	PCLaptop(PCMotherBoard* motherBoard, string color, Battery* battery, double cost);
	void getSpecs() const;

};
