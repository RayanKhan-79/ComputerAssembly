#include "AppleMotherBoard.h"

AppleMotherBoard::AppleMotherBoard(AppleSilicon* cpu, PhysicalMemory* physicalMemory, NetworkCard* networkCard, int numOfPorts)
	: MotherBoard(physicalMemory, networkCard, numOfPorts), cpu(cpu) {}

void AppleMotherBoard::getSpecs() const
{
	cpu->getSpecs();
	MotherBoard::getSpecs();
}
