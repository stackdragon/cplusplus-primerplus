//  ex4-5.cpp -- Create a structure and associated data types

#include <iostream>

struct candyBar {
	char brandName[20];
	float weight;
	int calories;
};

int main()
{

	candyBar snack = {
		"Mocha Munch",
		2.3,
		350
	};

	std::cout << snack.brandName << std::endl;
	std::cout << snack.weight << std::endl;
	std::cout << snack.calories << std::endl;

}
