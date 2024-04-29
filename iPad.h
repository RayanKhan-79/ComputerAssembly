#pragma once
#include"Computer.h"
#include"AppleMotherBoard.h"
#include"Battery.h"

class iPad : public Computer
{
	Battery* battery;
	AppleMotherBoard* motherBoard;

public:
	iPad(AppleMotherBoard* motherBoard, string color, Battery* battery, double cost);
	void getSpecs() const;
};


