#include "MotherBoard.h"

//MotherBoard(MainMemory*, int, StorageDevice*, NetworkCard*);
MotherBoard::MotherBoard(PhysicalMemory* physicalMemory, NetworkCard* networkCard, int numOfPorts)
	: physicalMemory(physicalMemory), numOfPorts(numOfPorts + 3), networkCard(networkCard)
{
	port = new Port * [this->numOfPorts];

	port[0] = new Port("Power Connector");
	port[1] = new Port("Storage Connector");
	port[2] = new Port("USB", 9600);
}

void MotherBoard::AddPorts(string type, int baud_rate, int iterator)
{
	port[iterator] = new Port(type, baud_rate);
}

void MotherBoard::getSpecs() const
{
	physicalMemory->getSpecs();
	networkCard->getSpecs();
	cout << "Num of Ports : " << numOfPorts << '\n';
	for (int i = 0; i < numOfPorts; i++)
		port[i]->getSpecs();

}

MotherBoard::~MotherBoard()
{
	for (int i = 0; i < numOfPorts; i++)
		delete port[i];
	delete[] port;
}

