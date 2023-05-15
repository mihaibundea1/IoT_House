#include "Pressure.h"

double Pressure::generatePressure()
{
	srand((unsigned)time(NULL));//functie care permite generarea unui numar random
	int r = rand();//generare valoare random
	double value = 300 + (r % 800);//formula pentru intervalul [300,1100] al presiunii
	double r2;
	r2 = (rand() % 100) / 10.0;//creare numar dupa virgula
	value += r2;//adunarea celor doua
	return value;
}

double Pressure::readSensor() 
{
	return Pressure::generatePressure();//apelarea functiei 
}