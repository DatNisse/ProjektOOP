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



void Garage::AddVehicle(int type, string color, int wheels, string regNum)
{
	if ((Vehicles.size()) >= garageSize)
	{
		cout << "Garage is full!\n";
	}
	else
	{
		bool isConvertable = true;;
		int numOfSeat = 4;

		this->Vehicles.push_back(new Car(regNum, color, wheels, isConvertable, numOfSeat));
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

void Garage::SearchVehicles(string searchType, string value)
{
	int a;
	cout << endl;
	for (size_t i = 0; i < Vehicles.size(); i++)
	{
		Vehicles.at(i)->Print();
		cout << endl;
	}
}

void Garage::RemoveVehicle(string regNum)
{
	for (int i = 0; i < Vehicles.size(); i++)
	{
		if (Vehicles.at(i)->GetRegNum() == regNum)
		{
			
			delete Vehicles.at(i);
			Vehicles.erase(Vehicles.begin()+i);
			
			return;
		}
	}
}

Garage::Garage(int size)
{
	this->garageSize = size;
	this->Vehicles = vector<Vehicle*>();
}