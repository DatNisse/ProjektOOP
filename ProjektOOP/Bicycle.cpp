#include "Bicycle.h"

void Bicycle::Print()
{
	cout << "Regnumber: " << GetRegNum() << endl;
	cout << "Color: " << GetColor() << endl;
	cout << "Type of Vehicle: " << GetType() << endl;
	cout << "Number of wheels: " << GetWheels() << endl;
	cout << "Bike has engine: " << GetHasEngine() << endl;
}

void Bicycle::SetType()
{
	this->VehicleType = "Bicycle";
}

void Bicycle::SetHasEngine(bool hasEngine)
{
	this->HasEngine = hasEngine;
}

void Bicycle::SetHasPackageHolder(bool packageHolder)
{
	this->HasPackageholder = packageHolder;
}

std::string Bicycle::GetType()
{
	return this->VehicleType;
}

bool Bicycle::GetHasEngine()
{
	return this->HasEngine;
}

bool Bicycle::GetHasPackageholder()
{
	return this->HasPackageholder;
}

Bicycle::Bicycle()
{

}

Bicycle::Bicycle(string regNum, string color, int wheels, bool hasEngine, bool hasPackageholder)
{
	SetType();
	SetColor(color);
	SetWheels(wheels);
	SetRegNum(regNum);
	SetHasEngine(hasEngine);
	SetHasPackageHolder(hasPackageholder);
}

Bicycle::~Bicycle()
{
}


