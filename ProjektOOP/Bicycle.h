#pragma once
#include "Vehicle.h"
#include <string>
#include <iostream>

using namespace std;

class Bicycle :
	public Vehicle
{
protected:
	string VehicleType;
	bool HasEngine;
	bool HasPackageholder;

public:
	void Print();

	void SetType();
	void SetHasEngine(bool hasEngine);
	void SetHasPackageHolder(bool packageHolder);

	string GetType();
	bool GetHasEngine();
	bool GetHasPackageholder();

	Bicycle();
	Bicycle(string regNum, string color, int wheels, bool hasEngine, bool hasPackageholder);
	~Bicycle();

	// Inherited via Vehicle
	

};

