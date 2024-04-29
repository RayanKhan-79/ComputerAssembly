#include "ALU.h"

ALU::ALU(int noA, int noS, int noR, int sR) : NoOfAdders(noA), NoOfSubtractors(noS), NoOfRegisters(noR), sizeOfRegisters(sR) {}


void ALU::setNoOfAdders(int value)
{
    NoOfAdders = value;
}


int ALU::getNoOfAdders() const
{
    return NoOfAdders;
}


void ALU::setNoOfSubtractors(int value)
{
    NoOfSubtractors = value;
}


int ALU::getNoOfSubtractors() const
{
    return NoOfSubtractors;
}


void ALU::setNoOfRegisters(int value)
{
    NoOfRegisters = value;
}


int ALU::getNoOfRegisters() const
{
    return NoOfRegisters;
}


void ALU::setSizeOfRegisters(int value)
{
    sizeOfRegisters = value;
}

int ALU::getSizeOfRegisters() const
{
    return sizeOfRegisters;
}
