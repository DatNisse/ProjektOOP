#pragma once
#include "Vehicle.h"
#include <string>
#include <iostream>

using namespace std;

class Bus :
	public Vehicle
{
protected:
	string VehicleType;
	bool DubbelDecker;
	string BussCompany;

public:
	// Inherited via Vehicle
	void Print();

	void SetType();
	void SetDubbelDecker(bool dubbelDecker);
	void SetBusCompany(string bussCompany);
		
	string GetType();
	bool GetDubbelDecker();
	string GetBusCompany();

	Bus();
	Bus(string regNum, string color, int wheels, bool isDubbelDecker, string busCompany);
	~Bus();

	// Inherited via Vehicle
	
};

