#include "Bathroom.h"
#include <fstream>
#include <iostream>
#include <string>
int indexb = 0;

void Bathroom::createRoom()
{
	std::ofstream file;//declar fisierul
	file.open("bathroom.txt");//il deschidem
	file.close();// il inchidem
}

void Bathroom::deleteRoom()
{
	int status;
	std::ofstream file("bathroom.txt");
	file.close();
	status = remove("bathroom.txt");//verificam daca s-a sters
	if (status)//status = 0 daca s-a sters/ daca nu status = 1
		std::cout << "\nbathroom.txt not deleted\n";
}

void Bathroom::readRoom()
{
	std::ifstream file("bathroom.txt");
	while (file)//citeste fisierul pana se termina
	{
		std::string line;
		getline(file, line);//preia fiecare linie scrisa in fisier
		std::cout << line << std::endl; //o afiseaza in consola
	}
	file.close();
}

void Bathroom::updateRoom()
{
	Humidity* hb = new Humidity(); //declarare pointeri
	Temperature* tb = new Temperature();
	Pressure* pb = new Pressure();
	std::ofstream file("bathroom.txt");
	file << "Bathroom" << indexb << "\n" << "Humidity = " << hb->readSensor() 
		 << "%" << "\n" << "Temperature = " << tb->readSensor() << " Celsius degrees" 
		 << "\n" << "Pressure = " << pb->readSensor() << " hPa" << "\n";
		//updatare senzori
	indexb++;//incrementare numar case
	file.close();
}