#pragma once
#include"ComputerAssembly.h"
#include"AppleMotherBoard.h"
#include"MacDesktop.h"
#include"MacLaptop.h"
#include"iPad.h"

class MacAssembly : public ComputerAssembly {

	AppleMotherBoard* motherBoard;
	AppleSilicon* cpu;

public:
	MacAssembly();
	~MacAssembly();
	AppleMotherBoard* createMotherBoard(string device, PhysicalMemory* physicalMemory, NetworkCard* networkCard);
	AppleSilicon* createCPU();
	void BuildDesktop(Computer*&);
	void BuildLaptop(Computer*&);
	void BuildTablet(Computer*&);
	void Build(Computer*& Comp, int);



};


