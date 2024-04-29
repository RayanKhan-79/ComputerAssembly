#include "PCMotherBoard.h"

PCMotherBoard::PCMotherBoard(IntelCPU* cpu, GPU* gpu, PhysicalMemory* physicalMemory, NetworkCard* networkCard, int numOfPorts)
	: MotherBoard(physicalMemory, networkCard, numOfPorts), cpu(cpu), gpu(gpu) {}

void PCMotherBoard::getSpecs() const
{
	cpu->getSpecs();
	if (gpu)
		gpu->getSpecs();
	MotherBoard::getSpecs();
}