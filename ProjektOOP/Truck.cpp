#include "Truck.h"

void Truck::Print()
{
	cout << "Regnumber: " << GetRegNum() << endl;
	cout << "Color: " << GetColor() << endl;
	cout << "Type of Vehicle: " << GetType() << endl;
	cout << "Number of wheels: " << GetWheels() << endl;
	cout << "Truck can carry cargo type: " << GetCargoType() << endl;
	cout << "The truck has cargo loaded: " << GetHasCargo() << endl;
}

void Truck::SetType()
{
	this->VehicleType = "Truck";
}

void Truck::SetHasCargo(bool hasCargo)
{
	this->HasCargo = hasCargo;
}

void Truck::SetCargoType(string cargoType)
{
	this->CargoType = cargoType;
}

string Truck::GetType()
{
	return this->VehicleType;
}

bool Truck::GetHasCargo()
{
	return this->HasCargo;
}

string Truck::GetCargoType()
{
	return this->CargoType;
}

Truck::Truck()
{
}

Truck::Truck(string regNum, string color, int wheels, bool hasCargo, string cargoType)
{
	SetType();
	SetColor(color);
	SetWheels(wheels);
	SetRegNum(regNum);
	SetHasCargo(hasCargo);
	SetCargoType(cargoType);
}

Truck::~Truck()
{
}
