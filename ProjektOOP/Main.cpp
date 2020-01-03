// ProjektOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
#include "Garage.h"

using namespace std;

string Menu = "Find a vehicle in the garage by adding a parameter. \n1. To find with a registration number. \n2. To find all with colour.\n3. To find all with a specified number of wheels.\n4. To find all with a minimum number of passengers.\n5. To find all with cabriolet\n0. Exit the finding!";
Garage* garage;

void newGarage(int size)
{
	garage = new Garage(size);
}

int main()
{
    std::cout << Menu << "\n";

	newGarage(12);

	garage->AddVehicle(1, "Yellow", 4, "123ABC");
	garage->AddVehicle(1, "Yellow", 4, "123ABC");
	garage->AddVehicle(1, "Yellow", 4, "123ABC");
	
	garage->RemoveVehicle("123ABC");
	newGarage(12);

	garage->AddVehicle(1, "Yellow", 4, "123ABC");

	garage->ListVehicles();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
