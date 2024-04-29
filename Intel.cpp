#include "Intel.h"

IntelCPU::IntelCPU(string name, int cores, float clockSpeed)
	: CPU(cores, clockSpeed, name, "x86") {}

void IntelCPU::getSpecs() const
{
	cout << "CPU : " << name << "  architecture : " << architecture << "  cores : " << numOfCores << "  clock speed " << cu.getclock() << "MHz\n";
}