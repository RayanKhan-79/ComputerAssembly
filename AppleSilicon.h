#pragma once
#include"CPU.h"

class AppleSilicon : public CPU
{
	GPU* gpu;

public:
	AppleSilicon(string name, int capacitySize, int cores, float clockSpeed);
	~AppleSilicon();
	void getSpecs() const;

	GPU* getGPU() const;

};