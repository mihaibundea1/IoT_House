#include "Temperature.h"

double Temperature::generateTemperature()
{
	srand((unsigned)time(NULL)); //functie care permite generarea unui numar random
	int r = rand();//generare valoare random
	double value = -40 + (r % 120);//formula pentru intervalul [-40,80] al temperaturii
	double r2;
	r2 = (rand() % 100) / 10.0;//creare numar dupa virgula
	value += r2;//adunarea celor doua
	return value;

}
double Temperature::readSensor()
{
	return Temperature::generateTemperature(); //apelarea functiei 
}