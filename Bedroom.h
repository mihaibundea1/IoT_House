#pragma once
#include <vector>
#include "ISensor.h"
#include "Temperature.h"
#include "Humidity.h"
#include "Pressure.h"
#include "IRoom.h"

class Bedroom : public IRoom
{
	//functii derivate din IRoom
public:
	void createRoom();
	void readRoom();
	void updateRoom();
	void deleteRoom();
private:
	std::vector<ISensor*> sensors;//vector de tip Isensor
};

