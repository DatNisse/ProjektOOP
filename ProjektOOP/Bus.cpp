#include "Bus.h"

void Bus::Print()
{
	cout << "Regnumber: " << GetRegNum() << endl;
	cout << "Color: " << GetColor() << endl;
	cout << "Type of Vehicle: " << GetType() << endl;
	cout << "Number of wheels: " << GetWheels() << endl;
	cout << "The bus is a Dubbeldecker: " << GetDubbelDecker() << endl;
}

void Bus::SetType()
{
	this->VehicleType = "Bus";
}

void Bus::SetDubbelDecker(bool dubbelDecker)
{
	this->DubbelDecker = dubbelDecker;
}

void Bus::SetBusCompany(string bussCompany)
{
	this->BussCompany = bussCompany;
}

std::string Bus::GetType()
{
	return this->VehicleType;
}

bool Bus::GetDubbelDecker()
{
	return this->DubbelDecker;
}

string Bus::GetBusCompany()
{
	return this->BussCompany;
}

Bus::Bus()
{
}

Bus::Bus(string regNum, string color, int wheels, bool isDubbelDecker, string busCompany)
{
	SetType();
	SetColor(color);
	SetWheels(wheels);
	SetRegNum(regNum);
	SetDubbelDecker(isDubbelDecker);
	SetBusCompany(busCompany);
}

Bus::~Bus()
{

}


