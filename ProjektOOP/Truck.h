#pragma once
#include "Vehicle.h"
#include <string>
#include <iostream>

using namespace std;

class Truck :
	public Vehicle
{
protected:
	string VehicleType;
	bool HasCargo;
	string CargoType;
public:
	void Print();

	void SetType();
	void SetHasCargo(bool hasCargo);
	void SetCargoType(string cargoType);

	string GetType();
	bool GetHasCargo();
	string GetCargoType();

	Truck();
	Truck(string regNum, string color, int wheels, bool hasCargo, string cargoType);
	~Truck();


	// Inherited via Vehicle
	

};

