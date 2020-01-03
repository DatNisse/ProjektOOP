#include "Garage.h"



void Garage::ListVehicles()
{
	cout << endl;
	for (size_t i = 0; i < Vehicles.size(); i++)
	{
		Vehicles.at(i)->Print();
		cout << endl;
	}

}

void Garage::ListTypeOfVehicle()
{
	string types[5] = { "Car", "Truck", "Motorcycle", "Bicycle", "Bus" };
	int counter;
	for (size_t i = 0; i < 5; i++)
	{
		counter = 0;
		cout << "The amount of type " << types[i] << ": ";
		for (size_t j = 0; j < Vehicles.size(); j++)
		{
			if (Vehicles.at(j)->GetType() == types[i])
			{
				counter++;
			}
		}
		cout << counter << endl;
	}
	

}



void Garage::AddVehicle(int type, string color, int wheels, string regNum)
{
	if ((Vehicles.size()) >= garageSize)
	{
		cout << "\nGarage is full!\n";
	}
	else
	{
		string input;
		switch (type)
		{
		case 1:
		{
			bool isConvertable;
			int numOfSeat;

			cin >> input;
			if (input == "y")
			{
				isConvertable = true;
			}
			else
			{
				isConvertable = false;
			}
			cin >> input;
			numOfSeat = stoi(input);
			this->Vehicles.push_back(new Car(regNum, color, wheels, isConvertable, numOfSeat));
			break;
		}
		case 2:
		{
			bool hasCargo;
			string typeCargo;

			cin >> input;
			if (input == "y")
			{
				hasCargo = true;
			}
			else
			{
				hasCargo = false;
			}
			cin >> input;
			typeCargo = input;
			this->Vehicles.push_back(new Truck(regNum, color, wheels, hasCargo, typeCargo));
			break;
		}
		case 3:
		{
			bool hasEngine;
			bool isMoped;

			cin >> input;
			if (input == "y")
			{
				hasEngine = true;
			}
			else
			{
				hasEngine = false;
			}
			cin >> input;
			if (input == "y")
			{
				isMoped = true;
			}
			else
			{
				isMoped = false;
			}
			this->Vehicles.push_back(new Motorcycle(regNum, color, wheels, hasEngine, isMoped));
			break;
		}
		case 4:
		{
			bool hasEngine;
			bool hasPackageholder;

			cin >> input;
			if (input == "y")
			{
				hasEngine = true;
			}
			else
			{
				hasEngine = false;
			}
			cin >> input;
			if (input == "y")
			{
				hasPackageholder = true;
			}
			else
			{
				hasPackageholder = false;
			}
			this->Vehicles.push_back(new Bicycle(regNum, color, wheels, hasEngine, hasPackageholder));
			break;
		}
		case 5:
		{
			bool dubbelDecker;
			string bussCompany;
			cin >> input;
			if (input == "y")
			{
				dubbelDecker = true;
			}
			else
			{
				dubbelDecker = false;
			}
			cin >> input;
			bussCompany = input;
			this->Vehicles.push_back(new Bus(regNum, color, wheels, dubbelDecker, bussCompany));
			break;
		}
		default:
			break;
		}
		
	}
	
}

Vehicle* Garage::GetVehicleReg(string regNum)
{
	
	for (size_t i = 0; i < Vehicles.size(); i++)
	{
			
		if (Vehicles.at(i)-> GetRegNum() == regNum)
		{
			return Vehicles.at(i);
		}
	}

	return nullptr;
}

void Garage::SearchRegNum(string regNum)
{
	for (size_t i = 0; i < Vehicles.size(); i++)
	{
		if (regNum == Vehicles.at(i)->GetRegNum())
		{
			Vehicles.at(i)->Print();
			return;
		}
	}
	cout << "No vehicle found." << endl;
	return;
}

void Garage::RemoveVehicle(string regNum)
{
	for (int i = 0; i < Vehicles.size(); i++)
	{
		if (Vehicles.at(i)->GetRegNum() == regNum)
		{
			
			
			delete Vehicles.at(i);
			Vehicles.erase(Vehicles.begin()+i);
			Vehicles.shrink_to_fit();
			return;
		}
	}
}

Garage::Garage(int size)
{
	this->garageSize = size;
	this->Vehicles = vector<Vehicle*>();

	this->Vehicles.push_back(new Car("ABC123", "Blue", 4, true, 2));
	this->Vehicles.push_back(new Car("LOL117", "Red", 4, true, 4));
	this->Vehicles.push_back(new Car("GTF090", "Yellow", 4, false, 6));
	this->Vehicles.push_back(new Car("BAD123", "Blue", 4, false, 4));
	this->Vehicles.push_back(new Truck("TTT121", "Green", 8, true, "Chicken"));
	this->Vehicles.push_back(new Truck("TFT131", "White", 6, false, "Oil"));
}

Garage::~Garage()
{
	for (size_t i = 0; i < Vehicles.size(); i++)
	{
		
		delete Vehicles.at(i);
		Vehicles.erase(Vehicles.begin() + i);
	}
	
}
