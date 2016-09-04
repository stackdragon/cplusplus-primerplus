//  ex3-7.cpp -- Takes liters per kilometer and returns miles per gallon

#include<iostream>

int main()
{
	float litersPerHunKm;
	float const gallonsPerLiter = 3.875;
	float const milesPerHunKm = 0.6214;

	std::cout << "Enter the liters per one hundred kilometers: ";
	std::cin >> litersPerHunKm;

	float hunKmPerLiter = 1 / litersPerHunKm;
	float milesPerLiter = hunKmPerLiter * milesPerHunKm;
	float milesPerGallon = milesPerLiter * gallonsPerLiter;
	
	std::cout << "That is the equivalent of " << static_cast<int>(milesPerGallon*100) << " miles per gallon.";

	std::cin.get();
	std::cin.get();

	return 0;
}
