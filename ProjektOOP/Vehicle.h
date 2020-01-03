#pragma once
#include <string>
class Vehicle
{
public:
	virtual void Print() = 0;
	virtual void SetType() = 0;
	virtual void SetColor(std::string color) = 0;
	virtual void SetWheels(int wheels) = 0;
	virtual void SetRegNum(std::string regNum) = 0;
	virtual std::string GetType() = 0;
	virtual std::string GetColor() = 0;
	virtual int GetWheels() = 0;
	virtual std::string GetRegNum() = 0;
};

