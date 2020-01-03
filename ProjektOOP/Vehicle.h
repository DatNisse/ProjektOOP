#pragma once
#include <string>
class Vehicle
{
protected:
	std::string regNum;
	std::string color;
	int wheels;
public:
	virtual void Print() = 0;
	virtual void SetType() = 0;
	
	virtual void SetColor(std::string color);
	virtual void SetWheels(int wheels);
	virtual void SetRegNum(std::string regNum);
	virtual std::string GetType() = 0;
	virtual std::string GetColor();
	virtual int GetWheels();
	virtual std::string GetRegNum();
};

