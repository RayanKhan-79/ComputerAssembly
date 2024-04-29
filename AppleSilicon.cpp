#include "AppleSilicon.h"

AppleSilicon::AppleSilicon(string brand, int capacitySize, int cores, float clockSpeed)
	: CPU(cores, clockSpeed, brand, "ARM64"), gpu(new GPU(brand, capacitySize)) {}

AppleSilicon::~AppleSilicon()
{
	delete gpu;
	gpu = NULL;
}

void AppleSilicon::getSpecs() const
{
	cout << "CPU : " << name << "  architecture : " << architecture << "  cores : " << numOfCores << "  clock speed " << cu.getclock() << "MHz\n";
	gpu->getSpecs();
}


GPU* AppleSilicon::getGPU() const
{
	return gpu;
}