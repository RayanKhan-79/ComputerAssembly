#include "PCAssembly.h"

// Constructor & Destructor
PCAssembly::PCAssembly()
	: motherBoard(NULL), gpu(NULL), cpu(NULL) {}

PCAssembly::~PCAssembly()
{

	delete motherBoard;
	delete gpu;
	delete cpu;
}

// Create and return pointer to a newly assembled Apple MotherBoard after taking user input for ports 
// Also Aggregate all other created components networkCard, physical memory, cpu and gpu
PCMotherBoard* PCAssembly::createMotherBoard(string device, IntelCPU* cpu, GPU* gpu, PhysicalMemory* physicalMemory, NetworkCard* networkCard)
{
	PCMotherBoard* Mb = NULL;
	int numOfPorts = 0;
	cout << "\nThis Motherboard already comes with the following ports:\n";
	cout << "1. Power Connector \n2. Storage Connecter (to the secondary memory)\n";

	if (device == "Tablet")
	{
		cout << "your processor, gpu, storage, NIC and RAM have been added\n";
		Mb = new PCMotherBoard(cpu, gpu, physicalMemory, networkCard, numOfPorts);
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

		Mb = new PCMotherBoard(cpu, gpu, physicalMemory, networkCard, numOfPorts);

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

// Create and return pointer to an Intel GPU after taking user input and performing validation checks
// Parameter string to differentiate between desktop and tablet options
GPU* PCAssembly::createGPU()
{
	GPU* gpu = NULL;
	int choice;
	cout << "\nWhich GPU do you want\n";
	cout << "AMD\n";
	cout << "1. Radeon RX 7900 GRE  $300\n";
	cout << "2. Radeon RX 7900 XT  $400\n";
	cout << "3. Radeon RX 7900 XTX  $500\n";
	cout << "Nvidia\n";
	cout << "4. RTX 3070Ti  $300\n";
	cout << "5. RTX 3080Ti  $400\n";
	cout << "6. RTX 3090Ti  $500\n";
	cout << "7. None\n";
	while (true)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
			gpu = new GPU("Radeon RX 7900 GRE", 16, 300);
			totalCost += 300;
			return gpu;

		case 2:
			gpu = new GPU("Radeon RX 7900 XT", 20, 400);
			totalCost += 400;
			return gpu;

		case 3:
			gpu = new GPU("Radeon RX 7900 XTX", 24, 500);
			totalCost += 500;
			return gpu;

		case 4:
			gpu = new GPU("RTX 3070Ti", 8, 300);
			totalCost += 300;
			return gpu;

		case 5:
			gpu = new GPU("RTX 3080Ti", 12, 400);
			totalCost += 400;
			return gpu;

		case 6:
			gpu = new GPU("RTX 3090Ti", 24, 500);
			totalCost += 500;
			return gpu;

		case 7:
			return NULL;

		default:
			cout << "Please choose form the given options\n";
		}
	}
}

GPU* PCAssembly::createGPU(string)
{
	GPU* gpu = NULL;
	int choice;
	cout << "\nWhich GPU do you want\n";
	cout << "1. AMD Radeon RX 7900M  $219\n";
	cout << "2. Nvidida GeForce RTX 40 $329\n";
	cout << "3. Intel Arc Alchemist $319\n\n";
	while (true)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
			gpu = new GPU("AMD Radeon RX 7900M", 16, 219);
			totalCost += 219;
			return gpu;

		case 2:
			gpu = new GPU("Nvidida GeForce RTX 40", 24, 329);
			totalCost += 329;
			return gpu;

		case 3:
			gpu = new GPU("Intel Arc Alchemist", 16, 319);
			totalCost += 319;
			return gpu;

		default:
			cout << "Please choose form the given options\n";
		}
	}
}

// Create and return pointer to an Intel CPU after taking user input and performing validation checks
IntelCPU* PCAssembly::createCPU()
{
	IntelCPU* cpu = NULL;
	int choice;
	cout << "\nWhich Processor Do you Want?\n";
	cout << "1. Ci3 $100\n";
	cout << "2. Ci5 $200\n";
	cout << "3. Ci7 $250\n";
	cout << "4. Ci9 $300\n";

	while (true)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
			cpu = new IntelCPU("Ci3", 4, 4.6);
			totalCost += 100;
			return cpu;
		case 2:
			cpu = new IntelCPU("Ci5", 6, 4.5);
			totalCost += 200;
			return cpu;
		case 3:
			cpu = new IntelCPU("Ci7", 8, 5);
			totalCost += 250;
			return cpu;
		case 4:
			cpu = new IntelCPU("Ci9", 18, 5);
			totalCost += 300;
			return cpu;
		default:
			cout << "Choose from the given options\n";
		}
	}

}

// Call appropriate Functions to either build a laptop, Desktop or tablet
void PCAssembly::BuildDesktop(Computer*& ref)
{

	cout << "\n=========================\n";
	cout << "| Building A PC Desktop |\n";
	cout << "=========================\n\n";
	totalCost = 0;

	RAM = createMainMemory(4, 64, 4);
	storageDevice = createStorageDevice();
	physicalMemory = new PhysicalMemory("DDR5", RAM, storageDevice);
	networkCard = createNetworkCard();
	gpu = createGPU();
	cpu = createCPU();
	motherBoard = createMotherBoard("Computer", cpu, gpu, physicalMemory, networkCard);



	cout << "Your Case will cost $20\n";
	totalCost += 20;
	string caseColor = chooseCaseColor();
	deviceCase = new Case("ATX", caseColor, 20);

	powerSupply = createPowerSupply(400, 300);

	ref = new PCDesktop(motherBoard, deviceCase, powerSupply, totalCost);
	cout << '$' << ref->getcost() << '\n';

}

void PCAssembly::BuildLaptop(Computer*& ref)
{
	cout << "\n========================\n";
	cout << "| Building A PC Laptop |\n";
	cout << "========================\n\n";
	totalCost = 0;

	RAM = createMainMemory(4, 64, 4);
	storageDevice = createStorageDevice();
	physicalMemory = new PhysicalMemory("DDR5", RAM, storageDevice);
	networkCard = createNetworkCard();
	gpu = createGPU();
	cpu = createCPU();
	motherBoard = createMotherBoard("Computer", cpu, gpu, physicalMemory, networkCard);

	battery = createBattery(20000, 40000);

	string caseColor = chooseCaseColor();
	ref = new PCLaptop(motherBoard, caseColor, battery, totalCost);
	cout << '$' << ref->getcost() << '\n';

}

void PCAssembly::BuildTablet(Computer*& ref)
{
	cout << "\n========================\n";
	cout << "| Building A PC Tablet |\n";
	cout << "========================\n\n";
	totalCost = 0;

	RAM = createMainMemory(4, 16, 4);
	storageDevice = createStorageDevice("Tablet");
	physicalMemory = new PhysicalMemory("DDR5", RAM, storageDevice);
	networkCard = createNetworkCard();
	gpu = createGPU("Tablet");
	cpu = createCPU();
	motherBoard = createMotherBoard("Tablet", cpu, gpu, physicalMemory, networkCard);

	battery = createBattery(2000, 8000);

	ref = new PCTablet(motherBoard, chooseCaseColor(), battery, totalCost);
	cout << '$' << ref->getcost() << '\n';

}

// For selection purposes only i.e calling the correct Build function
void PCAssembly::Build(Computer*& Comp, int choice)
{
	switch (choice)
	{
	case 1:
		BuildDesktop(Comp);
		break;
	case 2:
		BuildLaptop(Comp);
		break;
	case 3:
		BuildTablet(Comp);
		break;
	}
}
