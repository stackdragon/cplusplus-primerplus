// ex2-6.cpp -- Takes a distance in light years and returns a distance in astronomical units

#include<iostream>

double calcAU(int);

int main()
{
	int lightYear;
	int aU;

	std::cout << "Please enter a distance in light years: ";
	std::cin >> lightYear;

	aU = calcAU(lightYear);

	std::cout << std::endl << lightYear << " light years is equivalent to " << aU << " stronomical units.";

	std::cin.get();
	std::cin.get();

	return 0;
}

double calcAU(int lightYear) {
	return lightYear * 63240;
}

