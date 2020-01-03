#pragma once
#include "Vehicle.h"
#include <string>
#include <iostream>

using namespace std;

class Motorcycle :
	public Vehicle
{
protected:
	
	string VehicleType;
	bool HasElectricEngine;
	bool IsMoped;

public:
	void Print();
	
	void SetType();
	void SetEngine(bool hasElectricEngine);
	void SetMoped(bool isMoped);

	string GetType();
	bool GetEngine();
	bool GetMoped();

	Motorcycle();
	Motorcycle(string regNum, string color, int wheels, bool hasElectricEngine, bool isMoped);
	~Motorcycle();

	
};

