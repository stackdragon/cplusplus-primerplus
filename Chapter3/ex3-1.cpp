// ex3-1.cpp -- Takes height in inches and returns height in feet and inches

#include<iostream>

int main()
{
	int inputInches;
	const int inchesPerFoot = 12;

	std::cout << "Please enter your height in inches: ";
	std::cin >> inputInches;
	int feet = inputInches / inchesPerFoot;
	int inches = inputInches % inchesPerFoot;
	std::cout << std::endl << "You are " << feet << " feet, " << inches << " inches tall.";

	std::cin.get();
	std::cin.get();

	return 0;
}