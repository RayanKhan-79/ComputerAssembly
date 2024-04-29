#pragma once
#include"Computer.h"
#include"PCMotherBoard.h"
#include"PowerSupply.h"

class PCDesktop : public Computer
{
	PowerSupply* powerCable;
	PCMotherBoard* motherBoard;

public:
	PCDesktop(PCMotherBoard* motherBoard, Case* deviceCase, PowerSupply* poweCable, double cost);
	void getSpecs() const;
};

