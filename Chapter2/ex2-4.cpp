// ex2-4.cpp -- Takes the user's age in years and returns their age in months

#include<iostream>

int calcAgeMos(int);

int main()
{
	
	int ageYears;
	int ageMos;

	std::cout << "Please enter your age in years: ";
	std::cin >> ageYears;

	ageMos = calcAgeMos(ageYears);
	
	std::cout << std::endl << "You are " << ageMos << " months old.";

	std::cin.get();
	std::cin.get();

	return 0;
}

int calcAgeMos(int ageYears) {

	return ageYears * 12;
}

