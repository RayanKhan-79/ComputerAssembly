#pragma once
#include"ComputerAssembly.h"
#include"PCMotherBoard.h"
#include"PCDesktop.h"
#include"PCLaptop.h"
#include"PCTablet.h"

class PCAssembly : public ComputerAssembly {

	PCMotherBoard* motherBoard;
	GPU* gpu;
	IntelCPU* cpu;

public:
	PCAssembly();
	~PCAssembly();
	PCMotherBoard* createMotherBoard(string device, IntelCPU* cpu, GPU* gpu, PhysicalMemory* physicalMemory, NetworkCard* networkCard);
	IntelCPU* createCPU();
	GPU* createGPU();
	GPU* createGPU(string); //for tablet
	void BuildDesktop(Computer*&);
	void BuildLaptop(Computer*&);
	void BuildTablet(Computer*&);
	void Build(Computer*& Comp, int);

};


