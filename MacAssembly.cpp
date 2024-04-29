#include "MacAssembly.h"

// Constructor & Destructor
MacAssembly::MacAssembly()
	: motherBoard(NULL), cpu(NULL) {}

MacAssembly::~MacAssembly()
{

	delete motherBoard;
	delete cpu;
}

// Create and return pointer to a newly assembled Apple MotherBoard after taking user input for ports 
// Also Aggregate all other created components networkCard, physical memory and cpu
AppleMotherBoard* MacAssembly::createMotherBoard(string device, PhysicalMemory* physicalMemory, NetworkCard* networkCard)
{
	AppleMotherBoard* Mb = NULL;
	int numOfPorts = 0;
	cout << "\nThis Motherboard already comes with the following ports:\n";
	cout << "1. Power Connector \n2. Storage Connecter (to the secondary memory)\n3. USB\n";

	if (device == "Tablet")
	{
		cout << "your processor, gpu, storage, NIC and RAM have been added\n";
		Mb = new AppleMotherBoard(cpu, physicalMemory, networkCard, numOfPorts);
	}

	else
	{
		cout << "How many additional ports do you need ? (maximum 7): ";
		do
		{
			cin >> numOfPorts;
			if (numOfPorts > 7)
				cout << "Please choose a valid number";

		} while (numOfPorts > 7);

		Mb = new AppleMotherBoard(cpu, physicalMemory, networkCard, numOfPorts);

		if (numOfPorts)
		{
			cout << "Choose your ports\n";
			cout << "1. USB\n2. HDMI\n3. VGI\n";
			int choice;
			for (int i = 0; i < numOfPorts; i++)
			{
				do
				{
					cin >> choice;
					switch (choice)
					{
					case 1:
						Mb->AddPorts("USB", 9600, i + 3);
						break;
					case 2:
						Mb->AddPorts("HDMI", 12600, i + 3);
						break;
					case 3:
						Mb->AddPorts("VGI", 12000, i + 3);
						break;
					default:
						cout << "Choose from the given options\n";
					}

				} while (choice < 1 || choice > 3);
			}
		}
		cout << "your processor, gpu, storage, NIC and RAM have been added\n";
	}


	return Mb;

}

// Create and return pointer to an Apple CPU after taking user input and performing validation checks
AppleSilicon* MacAssembly::createCPU()
{
	AppleSilicon* cpu = NULL;
	int choice;
	cout << "\nChoose your Processor\n";
	cout << "1. M1 16GB  $100\n";
	cout << "2. M1-Pro 32GB  $200\n";
	cout << "3. M1-Max 64GB  $300\n";
	cout << "4. M2 24GB  $400\n";
	cout << "5. M2-Pro 32GB  $450\n";
	cout << "6. M2-Max 64GB  $500\n\n";
	while (true)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
			cpu = new AppleSilicon("M1", 16, 8, 3.2);
			totalCost += 100;
			return cpu;
		case 2:
			cpu = new AppleSilicon("M1-Pro", 32, 10, 3.49);
			totalCost += 200;
			return cpu;
		case 3:
			cpu = new AppleSilicon("M1-Max", 64, 10, 3.49);
			totalCost += 300;
			return cpu;
		case 4:
			cpu = new AppleSilicon("M2", 24, 8, 3.49);
			totalCost += 400;
			return cpu;
		case 5:
			cpu = new AppleSilicon("M2-Pro", 32, 10, 3.49);
			totalCost += 450;
			return cpu;
		case 6:
			cpu = new AppleSilicon("M2-Max", 64, 10, 3.49);
			totalCost += 500;
			return cpu;
		default:
			cout << "Choose a valid option\n";
		}

	}
}

// Call appropriate Functions to either build a laptop, Desktop or tablet
void MacAssembly::BuildDesktop(Computer*& ref)
{
	cout << "\n==========================\n";
	cout << "| Building A Mac Desktop |\n";
	cout << "==========================\n\n";
	totalCost = 0;

	RAM = createMainMemory(4, 64, 4);
	storageDevice = createStorageDevice();
	physicalMemory = new PhysicalMemory("LPDDR5", RAM, storageDevice);
	networkCard = createNetworkCard();
	cpu = createCPU();
	motherBoard = createMotherBoard("Computer", physicalMemory, networkCard);

	cout << "Your Case will cost $20\n";
	totalCost += 20;
	deviceCase = new Case("ATX", chooseCaseColor(), 20);
	powerSupply = createPowerSupply(400, 300);

	ref = new MacDesktop(motherBoard, deviceCase, powerSupply, totalCost);
}

void MacAssembly::BuildLaptop(Computer*& ref)
{
	cout << "\n=========================\n";
	cout << "| Building A Mac Laptop |\n";
	cout << "=========================\n\n";
	totalCost = 0;

	RAM = createMainMemory(4, 64, 4);
	storageDevice = createStorageDevice();
	physicalMemory = new PhysicalMemory("LPDDR5", RAM, storageDevice);
	networkCard = createNetworkCard();
	cpu = createCPU();
	motherBoard = createMotherBoard("Computer", physicalMemory, networkCard);

	battery = createBattery(20000, 40000);

	ref = new MacLaptop(motherBoard, chooseCaseColor(), battery, totalCost);
}

void MacAssembly::BuildTablet(Computer*& ref)
{
	cout << "\n====================\n";
	cout << "| Building An iPad |\n";
	cout << "====================\n\n";
	totalCost = 0;

	RAM = createMainMemory(4, 16, 4);
	storageDevice = createStorageDevice("Tablet");
	physicalMemory = new PhysicalMemory("LPDDR5", RAM, storageDevice);
	networkCard = createNetworkCard();
	cpu = createCPU();
	motherBoard = createMotherBoard("Tablet", physicalMemory, networkCard);

	battery = createBattery(2000, 8000);

	ref = new iPad(motherBoard, chooseCaseColor(), battery, totalCost);

}

// For selection purposes only i.e calling the correct Build function
void MacAssembly::Build(Computer*& Comp, int choice)
{
	switch (choice)
	{
	case 4:
		BuildDesktop(Comp);
		break;
	case 5:
		BuildLaptop(Comp);
		break;
	case 6:
		BuildTablet(Comp);
		break;
	}
}
