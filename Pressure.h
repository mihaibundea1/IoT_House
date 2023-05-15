#pragma once
#include "ISensor.h"
#include <random>
#include <ctime>
class Pressure : public ISensor
{
public:
	double readSensor();//functie derivata din ISensor
protected:
	double generatePressure(); // [300;1100] [hPa]
};

