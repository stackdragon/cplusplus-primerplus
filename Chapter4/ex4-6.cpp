//  ex4-6.cpp -- Create an array of structures and related data types

#include <iostream>

struct candyBar {
	char brandName[20];
	float weight;
	int calories;
};

int main()
{

	candyBar snack[3] = 
	{
		{"Mocha Munch", 2.3, 350},
		{"Chocolate Dream", 2.5, 200},
		{"Coconut Bark", 2.0, 110}
	};

	std::cout << snack[0].brandName << std::endl;
	std::cout << snack[0].weight << std::endl;
	std::cout << snack[0].calories << std::endl << std::endl;

	std::cout << snack[1].brandName << std::endl;
	std::cout << snack[1].weight << std::endl;
	std::cout << snack[1].calories << std::endl << std::endl;

	std::cout << snack[2].brandName << std::endl;
	std::cout << snack[2].weight << std::endl;
	std::cout << snack[2].calories << std::endl;

}
