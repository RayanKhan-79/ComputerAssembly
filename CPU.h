#pragma once
#include"ALU.h"
#include"ControlUnit.h"
#include"GPU.h"

class CPU
{
protected:
	int numOfCores;
	string name;
	ALU alu;
	ControlUnit cu;
	string architecture;

public:
	CPU(int numOfCores, float clockSpeed, string name, string architecture);

	string getArchitecture() const;
	string getName() const;
	int getNumOfCores() const;
	
	void setNumOfCores(int value);
	void setName(string value);
	void setArchitecture(string value);
};


