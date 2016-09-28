//  ex4-3.cpp -- Append multiple char arrays into a single variable

#include <iostream>
#include <string>
#include <cstring>

int main()
{
	const int strLength = 20;
	char firstName[strLength];
	char lastName[strLength];
	char singleString[strLength] = "";

	std::cout << "Enter your first name: ";
	std::cin.getline(firstName, strLength);
	std::cout << "Enter your last name: ";
	std::cin.getline(lastName, strLength);

	strcat(singleString, lastName);
	strcat(singleString, ", ");
	strcat(singleString, firstName);
	
	std::cout << std::endl << "Here's the information in a single string:" << singleString;
}
