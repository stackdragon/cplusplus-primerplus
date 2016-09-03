// ex3-3.cpp -- Takes a latitude in degrees, minutes, and seconds and returns it in decimal format

#include<iostream>

float calcLat(float latMin, float latSec);

int main()
{
	float latDeg;
	float latMin;
	float latSec;
	float latDec;

	std::cout << "Enter a latitude in degrees, minutes, and seconds.";
	std::cout << std::endl << "First, enter the degrees: ";
	std::cin >> latDeg;
	std::cout << "Second, enter the minutes of arc: ";
	std::cin >> latMin;
	std::cout << "Third, enter the seconds of arc:  ";
	std::cin >> latSec;
	latDec = latDeg + calcLat(latMin, latSec);
	std::cout << std::endl << latDeg << " degrees, " << latMin << " minutes, " << latSec << " seconds. ";
	std::cout << " Is equivalent to " << latDec << " degrees.";

	std::cin.get();
	std::cin.get();

	return 0;
}

float calcLat(float latMin, float latSec) {
	const int secPerMin = 60;
	const int minPerDeg = 60;

	return ((latSec / secPerMin) + latMin) / minPerDeg;
}