#pragma once
#include "Kitchen.h"
#include "Bathroom.h"
#include "Bedroom.h"
#include "Living.h"
#include <vector>
#include "IRoom.h"

class House 
{
public:
	virtual void addRoom(IRoom&);
	virtual void removeRoom(int);
	virtual void collectRoomData();
	virtual void viewRoomData();
protected:
	std::vector<IRoom*> rooms;//declarare vector de tip IRoom
};

