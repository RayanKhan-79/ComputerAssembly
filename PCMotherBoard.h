#pragma once
#include"MotherBoard.h"
#include"Intel.h"

class PCMotherBoard : public MotherBoard
{
	IntelCPU* cpu;
	GPU* gpu;

public:
	PCMotherBoard(IntelCPU* cpu, GPU* gpu, PhysicalMemory* physicalMemory, NetworkCard*, int);
	void getSpecs() const;
};
