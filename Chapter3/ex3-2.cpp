// ex3-2.cpp -- Takes height in feet and inches and weight in pounds. Returns BMI (body mass index).

#include <iostream>
#include <cmath>

int main()
{
	int feet;
	int inches;
	int weight;
	const int inchesPerFoot = 12;
	const float inchesPerMeter = .0254;
	const float poundsToKgs = 2.2;

	std::cout << "Enter your height in feet: ";
	std::cin >> feet;
	std::cout << std::endl << "Enter your height in inches: ";
	std::cin >> inches;
	std::cout << std::endl << "Enter your weight in pounds: ";
	std::cin >> weight;
	float heightInMeters = (feet * inchesPerFoot + inches) * inchesPerMeter;
	float BMI = (weight / poundsToKgs) / pow(heightInMeters, 2);
	std::cout << std::endl << "Your BMI is: " << BMI;

	std::cin.get();
	std::cin.get();
	return 0;
}


