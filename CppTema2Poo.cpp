#include <iostream>
#include "ISensor.h"
#include "Temperature.h"
#include "Humidity.h"
#include "Pressure.h"
#include "Living.h"
#include "Kitchen.h"
#include "Bathroom.h"
#include "Bedroom.h"
#include "House.h"
#include "IRoom.h"

int main()
{
	//declarare obiecte
	House h;
	Bathroom ba;
	Kitchen ki;
	Bedroom be;
	Living li;

	//creaza fisierele
	h.addRoom(ba);
	h.addRoom(ki);
	h.addRoom(be);
	h.addRoom(li);

	h.collectRoomData();

	h.viewRoomData();

	//stergere fisiere
	h.removeRoom(0);
	h.removeRoom(1);
	h.removeRoom(2);
	h.removeRoom(3);

}
