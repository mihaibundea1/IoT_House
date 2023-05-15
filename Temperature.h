#pragma once 
#include "ISensor.h"
class Temperature : public ISensor
{
public:
	double readSensor();//functie derivata din ISensor
protected:
	double generateTemperature();// [-40;80] [Celsius]
};

