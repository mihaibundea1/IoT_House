#include "Humidity.h"
double Humidity::generateHumidity()
{
	srand((unsigned)time(NULL));//functie care permite generarea unui numar random
	int r = rand();//generare valoare random
	double value = (r % 99) + 0;//formula pentru intervalul [0,99] l presiunii
	value += (rand() % 100) / 10.0;//creare numar dupa virgula si adunarea
	if (value > 99)
		return 99;
	return value;
}

double Humidity::readSensor()
{
	return Humidity::generateHumidity();//apelarea functiei 
}