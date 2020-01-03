#include "Motorcycle.h"

void Motorcycle::Print()
{
	cout << "Regnumber: " << GetRegNum() << endl;
	cout << "Color: " << GetColor() << endl;
	cout << "Type of Vehicle: " << GetType() << endl;
	cout << "Number of wheels: " << GetWheels() << endl;
	cout << "Has electric engine: " << GetEngine() << endl;
	cout << "Motorcycle is a moped: " << GetMoped() << endl;
}

void Motorcycle::SetType()
{
	this->VehicleType = "Motorcycle";
}

void Motorcycle::SetEngine(bool hasElectricEngine)
{
	this->HasElectricEngine = hasElectricEngine;
}

void Motorcycle::SetMoped(bool isMoped)
{
	this->IsMoped = isMoped;
}

std::string Motorcycle::GetType()
{
	return this->VehicleType;
}

bool Motorcycle::GetEngine()
{
	return this->HasElectricEngine;
}

bool Motorcycle::GetMoped()
{
	return this->IsMoped;
}

Motorcycle::Motorcycle()
{

}

Motorcycle::Motorcycle(string regNum, string color, int wheels, bool hasElectricEngine, bool isMoped)
{
	SetType();
	SetColor(color);
	SetWheels(wheels);
	SetRegNum(regNum);
	SetEngine(hasElectricEngine);
	SetMoped(isMoped);
}

Motorcycle::~Motorcycle()
{
}


