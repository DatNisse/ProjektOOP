#include "Vehicle.h"


void Vehicle::SetColor(std::string color)
{
	this->color = color;
}

void Vehicle::SetWheels(int wheels)
{
	this->wheels = wheels;
}

void Vehicle::SetRegNum(std::string regNum)
{
	this->regNum = regNum;
}



std::string Vehicle::GetColor()
{
	return this->color;
}

int Vehicle::GetWheels()
{
	return this->wheels;
}

std::string Vehicle::GetRegNum()
{
	return this->regNum;
}