#pragma once
#include"CPU.h"

class IntelCPU : public CPU
{

public:
	IntelCPU(string name, int cores, float clockSpeed);
	void getSpecs() const;

};
