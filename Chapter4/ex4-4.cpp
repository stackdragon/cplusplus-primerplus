//  ex4-4.cpp -- Append multiple string objects into a single variable

#include <iostream>
#include <string>
#include <cstring>

int main()
{
	std::string firstName;
	std::string lastName;
	std::string singleString;

	std::cout << "Enter your first name: ";
	std::getline(std::cin, firstName);
	std::cout << "Enter your last name: ";
	std::getline(std::cin, lastName); 

	singleString = lastName + ", " + firstName;
	
	std::cout << std::endl << "Here's the information in a single string: " << singleString;
}
