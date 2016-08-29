// ex3-1.cpp -- Takes a value in yards and returns the value in furlongs

#include<iostream>

int main()
{
	int furlongs;

	std::cout << "Enter a distance in furlongs: ";
	std::cin >> furlongs;
	std::cout << endl << furlongs << " furlongs is the equivalent of " << furlongs * 220 << " yards.";

	std::cin.get();
	std::cin.get();
	return 0;
}