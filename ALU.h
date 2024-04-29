#pragma once
class ALU
{
	int NoOfAdders;
	int NoOfSubtractors;
	int NoOfRegisters;
	int sizeOfRegisters;

public:
	ALU(int=0, int=0, int=0, int=0);

	int getNoOfSubtractors() const;
	int getNoOfAdders() const;
	int getSizeOfRegisters() const;
	int getNoOfRegisters() const;
	
	void setNoOfSubtractors(int);
	void setNoOfAdders(int);
	void setSizeOfRegisters(int);
	void setNoOfRegisters(int);

};

