#pragma once
#include "Vehicle.h"
#include "Car.h"
#include <vector>

using namespace std;
class Garage
{
	
	int garageSize;
	vector<Vehicle*> Vehicles;
public:
	void ListVehicles();
	void ListTypeOfVehicle();
	void AddVehicle(int type, string color, int wheels, string regNum);
	void RemoveVehicle(string regNum);
	Vehicle* GetVehicleReg(string regNum);
	void SearchVehicles(string searchType, string value);

	Garage(int size);

};

