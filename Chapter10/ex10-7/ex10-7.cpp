// ex10-7.cpp Write a Plorg class declaration (including data members and member function
// prototypes) that represents a plorg. Write the function definitions for the member 
// functions. Write a short program that demonstrates all the features of the Plorg class.
// Compile with plorg.h and plorg.cpp

#include <iostream>
#include "plorg.h"

int main()
{
	int input;
	int newCI = 0;
	Plorg newPlorg; // create object
	std::cout << "**Default values for Plorg**";
	newPlorg.showPlorg();
	std::cout << "Enter 1 to reset CI or Q to quit: ";
	while (std::cin >> input)
	{
		if (input == 1)
		{
			std::cout << "Enter new CI value: ";
			std::cin >> newCI;
			newPlorg.changeCI(newCI);
			std::cout << "**New CI value for Plorg**";
			newPlorg.showPlorg();
			
		}
		else
			std::cout << "Invalid command. Try again!\n";
		std::cout << "Enter 1 to reset CI or Q to quit: ";
	}
	return 0;
}
