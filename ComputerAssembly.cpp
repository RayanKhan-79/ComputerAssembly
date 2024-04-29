#include "ComputerAssembly.h"
#include "PCAssembly.h"
#include "MacAssembly.h"

ComputerAssembly::ComputerAssembly()
	: totalCost(0), CA(NULL), Comp(NULL), powerSupply(NULL), battery(NULL), networkCard(NULL), storageDevice(NULL), deviceCase(NULL), RAM(NULL), physicalMemory(NULL) {}

// Create and return pointer to a storage device after taking user input and validation checks
// Parameter string to distinguish between laptops and tablets
StorageDevice* ComputerAssembly::createStorageDevice()
{
	StorageDevice* SD = NULL;
	int choice;
	cout << "\nChoose the specs for your Storage Device\n";
	cout << "1. 256GB HDD  for $100\n";
	cout << "2. 512GB HDD  for $150\n";
	cout << "3. 1TB HDD  for $200\n";
	cout << "4. 256GB SSD  for $150\n";
	cout << "5. 512GB SSD  for $200\n";
	cout << "6. 1TB SSD  for $250\n\n";
	while (true)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
			SD = new StorageDevice("HDD", 256, 100);
			totalCost += 100;
			return SD;
		case 2:
			SD = new StorageDevice("HDD", 512, 150);
			totalCost += 150;
			return SD;
		case 3:
			SD = new StorageDevice("HDD", 1024, 200);
			totalCost += 200;
			return SD;
		case 4:
			SD = new StorageDevice("SSD", 256, 150);
			totalCost += 150;
			return SD;
		case 5:
			SD = new StorageDevice("SSD", 512, 200);
			totalCost += 200;
			return SD;
		case 6:
			SD = new StorageDevice("SSD", 1024, 250);
			totalCost += 250;
			return SD;
		default:
			cout << "Please choose from the given options\n";
		}
	}
}

StorageDevice* ComputerAssembly::createStorageDevice(string)
{
	StorageDevice* SD = NULL;
	int choice;
	cout << "\nChoose the specs for your Storage Device\n";
	cout << "1. 64GB HDD  for $30\n";
	cout << "2. 128GB HDD  for $50\n";
	cout << "3. 256GB HDD  for $95\n";
	cout << "4. 64GB SSD  for $40\n";
	cout << "5. 128GB SSD  for $70\n";
	cout << "6. 256GB SSD  for $135\n\n";
	while (true)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
			SD = new StorageDevice("HDD", 64, 30);
			totalCost += 30;
			return SD;
		case 2:
			SD = new StorageDevice("HDD", 128, 50);
			totalCost += 50;
			return SD;
		case 3:
			SD = new StorageDevice("HDD", 256, 95);
			totalCost += 95;
			return SD;
		case 4:
			SD = new StorageDevice("SSD", 64, 40);
			totalCost += 40;
			return SD;
		case 5:
			SD = new StorageDevice("SSD", 128, 70);
			totalCost += 70;
			return SD;
		case 6:
			SD = new StorageDevice("SSD", 256, 135);
			totalCost += 135;
			return SD;
		default:
			cout << "Please choose from the given options\n";
		}
	}
}

// Create and return pointer to a NIC after taking user input and validation checks
NetworkCard* ComputerAssembly::createNetworkCard()
{
	NetworkCard* NC = NULL;
	int choice;
	cout << "\nchoose your Network Card\n";
	cout << "1. Wifi 15 Mbps for 40$\n";
	cout << "2. Wifi 30 Mbps for 80$\n";
	cout << "3. Ethernet 50 Mbps for 100$\n";
	cout << "4. Ethernet 75 Mbps for 200$\n\n";
	while (true)
	{
		cin >> choice;
		switch (choice)
		{
			case 1:
				NC = new NetworkCard("Wifi", 15, 40);
				totalCost += 40;
				return NC;
			case 2:
				NC = new NetworkCard("Wifi", 30, 80);
				totalCost += 80;
				return NC;
			case 3:
				NC = new NetworkCard("Ethernet", 50, 100);
				totalCost += 100;
				return NC;
			case 4:
				NC = new NetworkCard("EThernet", 75, 200);
				totalCost += 200;
				return NC;
			default:
				cout << "Please choose from the given options";
		}
	}
}

// give user three options of colors to choose from and returning it
string ComputerAssembly::chooseCaseColor()
{
	cout << "Choose a color for your case\n1. Black\n2. Silver\n3. White\n\n";
	int choice;
	while (true)
	{
		cin >> choice;
		switch (choice)
		{
			case 1:
				return "Black";
		
			case 2:
				return "Silver";
			
			case 3:
				return "White";
			
			default:
				cout << "Please choose from the given options\n";
		}
	}
}

// Create and return pointer to a power Cable after taking user input and validation checks
PowerSupply* ComputerAssembly::createPowerSupply(int option1, int option2)
{
	PowerSupply* pw = NULL;
	int choice;
	cout << "\nChoose your PowerCable\n";
	cout << option1 << " watt options:\n";
	cout << "1. 80 plus bronze for $100\n";
	cout << "2. 80 plus silver for $120\n";
	cout << "3. 80 plus gold for $140\n";
	cout << option2 << " watt options:\n";
	cout << "4. 80 plus bronze for $60\n";
	cout << "5. 80 plus silver for $80\n";
	cout << "6. 80 plus gold for $100\n\n";
	while (true)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
			pw = new PowerSupply(option1, "80 PLUS Bronze", 100);
			totalCost += 100;
			return pw;
		case 2:
			pw = new PowerSupply(option1, "80 PLUS Silver", 120);
			totalCost += 120;
			return pw;
		case 3:
			pw = new PowerSupply(option1, "80 PLUS Gold", 140);
			totalCost += 140;
			return pw;
		case 4:
			pw = new PowerSupply(option2, "80 PLUS Bronze", 60);
			totalCost += 60;
			return pw;
		case 5:
			pw = new PowerSupply(option2, "80 PLUS Silver", 80);
			totalCost += 80;
			return pw;
		case 6:
			pw = new PowerSupply(option2, "80 PLUS Gold", 100);
			totalCost += 100;
			return pw;

		default:
			cout << "Choose from the given options:";
		}
	}
}

// Create and return pointer to a Battery after taking user input and validation checks
Battery* ComputerAssembly::createBattery(int lowerLimit, int upperLimit)
{
	Battery* battery = NULL;
	int choice;
	cout << "\nHow much Battery do you need? (" << lowerLimit << "mAh - " << upperLimit << "mAh): ";
	while (true)
	{
		cin >> choice;
		if (!(choice % 2000) && choice >= lowerLimit && choice <= upperLimit)
		{
			battery = new Battery(choice,0.005*choice);
			totalCost += battery->getPrice();
			cout << "Cost is $" << battery->getPrice() << '\n';
			return battery;
		}

		cout << "Choose a valid number\n";

	}
}

// Create and return pointer to a RAM component after taking user input and validation checks
MainMemory* ComputerAssembly::createMainMemory(int lowerLimit, int upperLimit, int chipSize)
{
	MainMemory* RAM = NULL;
	int choice;
	cout << "\nHow much ram do you need?(" << lowerLimit << "GB - " << upperLimit << "GB): ";

	while (true)
	{
		cin >> choice;
		if (!(choice % chipSize) && choice >= lowerLimit && choice <= upperLimit)
		{
			cout << "Cost is $" << 10 * choice << '\n';
			totalCost += 10 * choice;
			RAM = new MainMemory(choice, "Silicon");
			return RAM;
		}

		cout << "choose a valid number\n";
	}
}


ComputerAssembly::~ComputerAssembly()
{
	delete powerSupply;
	delete battery;
	delete networkCard;
	delete storageDevice;
	delete deviceCase;
	delete RAM;
	delete physicalMemory;
}

// Give the user the choice of building a PC or Mac (Desktop, Laptop, Tablet)  
// Once created give another option to display specs and/or cost
void ComputerAssembly::DisplayMenu()
{
	int choice;
	bool repeat = true;
	cout << "Which Device do you want to create\n";
	cout << "1. PC Desktop\n";
	cout << "2. PC Laptop\n";
	cout << "3. PC Tablet\n";
	cout << "4. Mac Desktop\n";
	cout << "5. Mac Laptop\n";
	cout << "6. iPad\n";

	while (repeat)
	{
		repeat = true;
		cin >> choice;
		if (choice >= 1 && choice <= 3)
		{
			CA = new PCAssembly;
			CA->Build(Comp, choice);
			repeat = false;
		}

		if (choice >= 4 && choice <= 6)
		{
			CA = new MacAssembly;
			CA->Build(Comp, choice);
			repeat = false;
		}
	}

	repeat = true;
	cout << "Congrats on your Purchase\n";
	cout << "What do you want to do now ? \n";
	cout << "1. Display specs\n";
	cout << "2. See Cost\n";
	cout << "3. Go home\n";
	while (repeat)
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
			Comp->getSpecs();
			break;

		case 2:
			cout << "Cost = $" << Comp->getcost() << '\n';
			break;

		default:
			return;

		}
	}
}

// Virtual Function (For building specific devices)
void ComputerAssembly::Build(Computer*& Comp, int choice) {}

