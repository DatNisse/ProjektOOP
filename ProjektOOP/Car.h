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
	string regNum;
	string color;
	int wheels;
	bool isConvertable;
	int numOfSeat;

	void SetType();
	void SetColor(string color);
	void SetWheels(int wheels);
	void SetRegNum(string regNum);
	string GetType();
	string GetColor();
	int GetWheels();
	string GetRegNum();

	void Print();
	Car();
	Car(string regNum, string color, int wheels, bool isConvertable, int numOfSeat);
	~Car();
};

