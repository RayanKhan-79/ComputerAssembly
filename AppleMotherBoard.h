#pragma once
#include"MotherBoard.h"
#include"AppleSilicon.h"

class AppleMotherBoard : public MotherBoard
{
	AppleSilicon* cpu;

public:
	AppleMotherBoard(AppleSilicon* cpu, PhysicalMemory* physicalMemory, NetworkCard*, int);
	void getSpecs() const;
};

