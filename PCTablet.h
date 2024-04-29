#pragma once
#include"Computer.h"
#include"PCMotherBoard.h"
#include"Battery.h"

class PCTablet : public Computer
{
	Battery* battery;
	PCMotherBoard* motherBoard;

public:
	PCTablet(PCMotherBoard* motherBoard, string color, Battery* battery, double cost);
	void getSpecs() const;

};
