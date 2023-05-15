#include "House.h"
#include <iostream>

int i = 0;
void House::addRoom(IRoom& r)
{
	r.createRoom();//creare camera cu ajutorul referintei r
	IRoom* ptr = &r;
	rooms.push_back(ptr);//adaugare in vector
	i++;//incrementare elemente vector
}

void House::removeRoom(int a)
{
	rooms[a]->deleteRoom();//stergere fisiere
}

void House::collectRoomData()
{
	for (int index = 0; index < i; index++)
	{
		rooms[index]->updateRoom();//colecteaza datele de la fiecare camera: Humidity, Temperature, Pressure
	}
}

void House::viewRoomData()
{
	for (int index = 0; index < i; index++)
	{
		//std::cout << index << '\n';
		rooms[index]->readRoom(); //parcurgere elemente vector si citirea datelor fiecarui senzor
	}
	i = 0;
}