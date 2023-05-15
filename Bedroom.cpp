#include "Bedroom.h"
#include <fstream>
#include <iostream>
#include <string>
int index = 0;

void Bedroom::createRoom()
{
	std::ofstream file;//declar fisierul
	file.open("bedroom.txt");//il deschidem
	file.close();// il inchidem
}

void Bedroom::deleteRoom()
{
	int status;
	std::ofstream file("bedroom.txt");
	file << "empty";
	file.close();
	status = remove("bedroom.txt");//verificam daca s-a sters
	if (status)//status = 0 daca s-a sters/ daca nu status = 1
		std::cout << "bedroom.txt not deleted\n\n";
}

void Bedroom::readRoom()
{
	std::ifstream file("bedroom.txt");
	while (file)//citeste fisierul pana se termina
	{
		std::string line;
		getline(file, line);//preia fiecare linie scrisa in fisier
		std::cout << line << std::endl; //o afiseaza in consola
	}
	file.close();
}

void Bedroom::updateRoom()
{
	Humidity* h = new Humidity(); //declarare pointeri
	Temperature* t = new Temperature();
	Pressure* p = new Pressure();
	std::ofstream file("bedroom.txt");
	file << "Bedroom" << index << "\n" << "Humidity = " << h->readSensor() << "%" << "\n" 
		 << "Temperature = " << t->readSensor() << " Celsius degrees" << "\n" << "Pressure = " << p->readSensor()
		 << " hPa" << "\n";
		//updatare senzori
	index++;//incrementare numar case
	file.close();
}