#pragma once
#include"Computer.h"
#include"AppleMotherBoard.h"
#include"Battery.h"


class MacLaptop : public Computer
{
	Battery* battery;
	AppleMotherBoard* motherBoard;

public:
	MacLaptop(AppleMotherBoard* motherBoard, string color, Battery* battery, double cost);
	void getSpecs() const;
};

