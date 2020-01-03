// ProjektOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Garage.h"

using namespace std;


Garage* garage;
string input;
int choice;

void PrintAddVehicle()
{
	cout << "Please Specify type of vehicle: " << endl;
	cout << "1: Car" << endl;
	cout << "2: Truck" << endl;
	cout << "3: Motorcycle" << endl;
	cout << "4: Bicycle" << endl;
	cout << "5: Truck" << endl;
}

void PrintMenu()
{
	system("CLS");
	cout << "Welcome! please choose one of the following options: " << endl;
	cout << "1: List all Vehicles" << endl;
	cout << "2: List amount of vehicle per type" << endl;
	cout << "3: Add Vehicle" << endl;
	cout << "4: Remove Vehicle" << endl;
	cout << "5: Search Vehicle" << endl;
	cout << "6: New Garage(deletes previous garage)" << endl;
	cout << "" << endl;
	cout << "0: Exit program" << endl;
}

void newGarage(int size)
{
	
	delete garage;
	garage = new Garage(size);
}

int main()
{
	bool exit = false;

	garage = new Garage(12);
	
	

	do
	{
		PrintMenu();

		cin >> input;

		choice = stoi(input);

		switch (choice)
		{
		case 0:
		{
			exit = true;
			break;
		}
		case 1:
		{
			garage->ListVehicles();
			break;
		}
		case 2:
		{
			garage->ListTypeOfVehicle();
			break;
		}
		case 3:
		{
			
			string regNum;
			string color;
			int wheels;
			int choice2;
			PrintAddVehicle();
			cin >> choice2;
			switch (choice2)
			{
			case 1:
			{
				cout << "Please specify artributes in the following order: " << endl;
				cout << "Regnummer, color, number of wheels, is it convitible(y/n), number of seats" << endl;
				cin >> input; 
				regNum = input;
				cin >> input;
				color = input;
				cin >> input;
				wheels = stoi(input);
				garage->AddVehicle(1, color, wheels, regNum);
				break;
			}
			case 2:
			{
				cout << "Please specify artributes in the following order: " << endl;
				cout << "Regnummer, color, number of wheels, is the truck carrying cargo(y/n), what cargo type is it specified for" << endl;
				cin >> input;
				regNum = input;
				cin >> input;
				color = input;
				cin >> input;
				wheels = stoi(input);
				garage->AddVehicle(2, color, wheels, regNum);
				break;
			}
			case 3:
			{
				cout << "Please specify artributes in the following order: " << endl;
				cout << "Regnummer, color, number of wheels, does the motorcycle have electricengine(y/n), is the motorcycle a moped" << endl;
				cin >> input;
				regNum = input;
				cin >> input;
				color = input;
				cin >> input;
				wheels = stoi(input);
				garage->AddVehicle(3, color, wheels, regNum);
				break;
			}
			case 4:
			{
				cout << "Please specify artributes in the following order: " << endl;
				cout << "Regnummer, color, number of wheels, does the bike have an engine(y/n), does the bike have a packageholder(y/n)" << endl;
				cin >> input;
				regNum = input;
				cin >> input;
				color = input;
				cin >> input;
				wheels = stoi(input);
				garage->AddVehicle(4, color, wheels, regNum);
				break;
			}
			case 5:
			{
				cout << "Please specify artributes in the following order: " << endl;
				cout << "Regnummer, color, number of wheels, is the bus a dubbeldecker(y/n), which buscompany the bus belongs to" << endl;
				cin >> input;
				regNum = input;
				cin >> input;
				color = input;
				cin >> input;
				wheels = stoi(input);
				garage->AddVehicle(5, color, wheels, regNum);
				break;
			}
			default:
				break;
			}

			cout << "The vehicle was added." << endl;
			break;
		}
		case 4:
		{
			cout << "Please specify the regnumber of vehicle to be deleted: " << endl;
			cin >> input;
			garage->RemoveVehicle(input);
			cout << "The vehicle was removed" << endl;
			break;
		}
		case 5:
		{
			cout << "Please specify the regnumber of vehicle to be printed: " << endl;
			cin >> input;
			garage->SearchRegNum(input);
			break;
		}
		case 6:
		{
			cout << "Please specify the size of new garage: " << endl;
			cin >> input;
			newGarage(stoi(input));
			cout << "New garage has been created" << endl;
			break;
		}
		
		default:
			cout << "Invalid input" << endl;
			break;
		}
		if (choice != 0)
		{
			cout << "\nEnter any key to continue\n";
			cin >> input;
		}
		
	} while (exit == false);
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
