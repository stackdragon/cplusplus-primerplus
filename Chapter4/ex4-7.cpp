//  ex4-7.cpp -- Create a structure and store user input

#include <iostream>
#include <string>
#include <cstring>

struct pizza {
	std::string companyName;
	int diameter;
	int weight;
};

int main()
{

	pizza pepperoni;
	std::cout << "Enter the company name: ";
	std::getline(std::cin, pepperoni.companyName);
	std::cout << "Enter the diameter: ";
	std::cin >> pepperoni.diameter;
	std::cout << "Enter the weight: ";
	std::cin >> pepperoni.weight;

	std::cout << std::endl << "Company name: " << pepperoni.companyName << std::endl;
	std::cout << "Diameter: " << pepperoni.diameter << std::endl;
	std::cout << "Weight: " << pepperoni.weight << std::endl;

	std::cin.get();
	std::cin.get();
}
