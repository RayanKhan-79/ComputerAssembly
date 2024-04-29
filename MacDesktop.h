#pragma once
#include"Computer.h"
#include"AppleMotherBoard.h"
#include"PowerSupply.h"


class MacDesktop : public Computer
{
	PowerSupply* powerCable;
	AppleMotherBoard* motherBoard;

public:
	MacDesktop(AppleMotherBoard* motherBoard, Case* deviceCase, PowerSupply* poweCable, double cost);
	void getSpecs() const;
};

