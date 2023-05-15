#include "Kitchen.h"
#include <fstream>
#include <iostream>
#include <string>
int indexk = 0;
void Kitchen::createRoom() 
{
	std::ofstream file; //declar fisierul
	file.open("kitchen.txt"); //il deschidem
	file.close();// il inchidem
}

void Kitchen::deleteRoom()
{
	int status;
	std::ofstream file("kitchen.txt");
	file << "empty";
	file.close();
	status = remove("kitchen.txt"); //verificam daca s-a sters
	if (status) //status = 0 daca s-a sters/ daca nu status = 1
		std::cout << "kitchen.txt not deleted\n\n";
}

void Kitchen::readRoom()
{
	std::ifstream file("kitchen.txt");
	while (file)//citeste fisierul pana se termina 
	{
		std::string line;
		getline(file, line);//preia fiecare linie scrisa in fisier
		std::cout << line << std::endl; //o afiseaza in consola
	}
	file.close();
}

void Kitchen::updateRoom()
{
	Humidity* h = new Humidity(); //declarare pointeri
	Temperature* t = new Temperature();
	Pressure* p = new Pressure();
	std::ofstream file("kitchen.txt");
	file << "Kitchen" << indexk << "\n" << "Humidity = " << h->readSensor() << "%" << "\n"
		<< "Temperature = " << t->readSensor() << " Celsius degrees" << "\n" << "Pressure = "
		<< p->readSensor() << " hPa" << "\n\n";
		//updatare senzori
	indexk++;//incrementare numar case
	file.close();
}