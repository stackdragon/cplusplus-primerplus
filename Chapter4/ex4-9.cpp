//  ex4-9.cpp -- Create a dynamically allocated array of structs

#include <iostream>
#include <string>

struct candyBar {
	char brandName[20];
	float weight;
	int calories;
};

int main()
{

	candyBar *snack = new candyBar[3];

	strcpy(snack[0].brandName, "Mocha Munch");
	snack[0].weight = 2.3;
	snack[0].calories = 350;

	strcpy(snack[1].brandName, "Chocolate Dream");
	snack[1].weight = 2.5;
	snack[1].calories = 200;

	strcpy(snack[2].brandName, "Coconut Bark");
	snack[2].weight = 2.1;
	snack[2].calories = 110;

	std::cout << "First snack name: " << snack[0].brandName << std::endl;
	std::cout << "First snack weight: " << snack[0].weight << std::endl;
	std::cout << "First snack calories: " << snack[0].calories << std::endl << std::endl;

	std::cout << "Second snack name: " << snack[1].brandName << std::endl;
	std::cout << "Second snack weight: " << snack[1].weight << std::endl;
	std::cout << "Second snack calories: " << snack[1].calories << std::endl << std::endl;

	std::cout << "Third snack name: " << snack[2].brandName << std::endl;
	std::cout << "Third snack weight: " << snack[2].weight << std::endl;
	std::cout << "Third snack calories: " << snack[2].weight << std::endl;
	
	std::cin.get();
	std::cin.get();

	delete[] snack;
}
