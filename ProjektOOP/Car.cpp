#include "Car.h"

void Car::SetType()
{
	this->VehicleType = "Car";
}

void Car::SetSeats(int numSeats)
{
	this->numOfSeat = numSeats;
}

void Car::SetConv(bool isConvertable)
{
	this->isConvertable = isConvertable;
}

string Car::GetType()
{
	return this->VehicleType;
}

int Car::GetSeats()
{
	return this->numOfSeat;
}

bool Car::GetConv()
{
	return this->isConvertable;
}

void Car::Print()
{
	cout << "Regnumber: " << GetRegNum() << endl; 
	cout << "Color: " << GetColor() << endl;
	cout << "Type of Vehicle: " << GetType() << endl;
	cout << "Number of wheels: " << GetWheels() << endl;
	cout << "Number of seats: " << GetSeats() << endl;
	cout << "Car is a convirtible: " << GetConv() << endl;
	
}

Car::Car()
{

}


Car::Car(string regNum, string color, int wheels, bool isConvertable, int numOfSeat)
{
	SetType();
	SetColor(color);
	SetWheels(wheels);
	SetRegNum(regNum);
	SetSeats(numOfSeat);
	SetConv(isConvertable);
}

Car::~Car()
{
	cout << "car was deleted" << endl;
}


