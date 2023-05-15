#pragma once
#include "ISensor.h"
#include <random>
#include <ctime>
class Humidity : public ISensor
{
public:
	double readSensor();//functie derivata din ISensor
protected:
	double generateHumidity(); //[0;99] [%]
};

