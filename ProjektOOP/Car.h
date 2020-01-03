#pragma once
#include "Vehicle.h"
#include <string>
#include <iostream>

using namespace std;

class Car :
	public Vehicle
{
public:

	string VehicleType;
	bool isConvertable;
	int numOfSeat;

	void SetType();
	void SetSeats(int numSeats);
	void SetConv(bool isConvertable);

	string GetType();
	int GetSeats();
	bool GetConv();

	void Print();
	Car();
	Car(string regNum, string color, int wheels, bool isConvertable, int numOfSeat);
	~Car();

	
	
};

