//  ex4-8.cpp -- Create a dynamically allocated struct and store user input

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

	pizza *pepperoni = new pizza;
	std::cout << "Enter the diameter: ";
	std::cin >> pepperoni->diameter;
	std::cin.get();
	std::cout << "Enter the company name: ";
	std::getline(std::cin, pepperoni->companyName);
	std::cout << "Enter the weight: ";
	std::cin >> pepperoni->weight;

	std::cout << std::endl << "Company name: " << pepperoni->companyName << std::endl;
	std::cout << "Diameter: " << pepperoni->diameter << std::endl;
	std::cout << "Weight: " << pepperoni->weight << std::endl;

	std::cin.get();
	std::cin.get();
}
