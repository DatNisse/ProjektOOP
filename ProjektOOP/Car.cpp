#include "Car.h"

void Car::SetType()
{
	this->VehicleType = "Car";
}

void Car::SetColor(string color)
{
	this->color = color;
}

void Car::SetWheels(int wheels)
{
	this->wheels = wheels;
}

void Car::SetRegNum(string regNum)
{
	this->regNum = regNum;
}

string Car::GetType()
{
	return this->VehicleType;
}

string Car::GetColor()
{
	return this->color;
}

int Car::GetWheels()
{
	return this->wheels;
}

string Car::GetRegNum()
{
	return this->regNum;
}

void Car::Print()
{
	cout << "Regnumber: " << this->regNum << endl; 
	cout << "Color" << this->color << endl;
	cout << "Type of Vehicle: " << this->VehicleType << endl;
	cout << "Number of wheels: " << this->wheels << endl;
	cout << "Number of seats: " << this->numOfSeat << endl;
	cout << "Car is a convirtible: " << this->isConvertable << endl;
	
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
	this->isConvertable = isConvertable;
	this->numOfSeat = numOfSeat;
}

Car::~Car()
{
}
