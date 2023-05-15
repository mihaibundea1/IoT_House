#include "Living.h"
#include <fstream>
#include <iostream>
#include <string>
int indexl = 0;

void Living::createRoom()
{
	std::ofstream file;//declar fisierul
	file.open("living.txt");//il deschidem
	file.close();// il inchidem
}

void Living::deleteRoom()
{
	int status;
	std::ofstream file("living.txt");
	file << "empty";
	file.close();
	status = remove("living.txt");//verificam daca s-a sters
	if (status)//status = 0 daca s-a sters/ daca nu status = 1
		std::cout << "living.txt not deleted\n\n";
}

void Living::readRoom()
{

	std::ifstream file("living.txt");
	while (file)//citeste fisierul pana se termina
	{
		std::string line;
		getline(file, line);//preia fiecare linie scrisa in fisier
		std::cout << line << std::endl; //o afiseaza in consola
	}
	file.close();
}

void Living::updateRoom()
{
	Humidity* h = new Humidity(); //declarare pointeri
	Temperature* t = new Temperature();
	Pressure* p = new Pressure();
	double h1 = h->readSensor();
	double t1 = t->readSensor();
	double p1 = p->readSensor();
	std::ofstream file("living.txt");
	file << "Living" << indexl << "\n" << "Humidity = "  << h1 << "%" << "\n" << "Temperature = "  
		<< t1 << " Celsius degrees" << "\n" << "Pressure = "  << p1 << " hPa" << "\n"
		<< "\n";
		//updatare senzori
	indexl++;//incrementare numar case
	file.close();
}