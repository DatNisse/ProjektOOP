#pragma once
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "Bicycle.h"
#include "Bus.h"
#include <vector>

using namespace std;
class Garage
{
protected:
	int garageSize;
	vector<Vehicle*> Vehicles;
	int buffer[];
public:
	void ListVehicles();
	void ListTypeOfVehicle();
	void AddVehicle(int type, string color, int wheels, string regNum);
	void RemoveVehicle(string regNum);
	Vehicle* GetVehicleReg(string regNum);
	void SearchRegNum(string regNum);

	Garage(int size);
	~Garage();
};

