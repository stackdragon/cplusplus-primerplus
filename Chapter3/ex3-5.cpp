// ex3-4.cpp -- Takes a number of seconds and returns it in days, hours, mins, and secs

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
