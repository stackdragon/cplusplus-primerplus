// ex3-5.cpp -- Takes the U.S. population and world population and presents U.S. pop as a percentage of world pop.

#include<iostream>

int main()
{
	float worldPop;
	float usPop;

	std::cout << "Enter the world population: ";
	std::cin >> worldPop;
	std::cout << "Enter the U.S. population: ";
	std::cin >> usPop;

	float perPop = (usPop / worldPop) * 100;

	std::cout << "The U.S. has " << perPop << "% of the world's population.";

	std::cin.get();
	std::cin.get();

	return 0;
}
