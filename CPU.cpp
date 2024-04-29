#include "CPU.h"


CPU::CPU(int numOfCores, float clockSpeed, string name, string architecture) 
	: alu(64, 64, 64, 64), numOfCores(numOfCores), cu(clockSpeed), name(name), architecture(architecture) {}


string CPU::getArchitecture() const
{
	return architecture;
}

int CPU::getNumOfCores() const
{
	return numOfCores;
}

string CPU::getName() const
{
	return name;
}

void CPU::setNumOfCores(int value)
{
	numOfCores = value;
}

void CPU::setName(string value)
{
	name = value;
}

void CPU::setArchitecture(string value)
{
	architecture = value;
}

