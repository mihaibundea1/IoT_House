#pragma once
#include <random>
#include <ctime>
#include <iomanip>
class ISensor
{
public:
	virtual double readSensor() = 0;
};

