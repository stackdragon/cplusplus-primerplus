// ex7-5.cpp Define a recursive function that takes an integer argument and returns
// the factorial of that argument

#include <iostream>

unsigned long factorial(unsigned int input);

int main()
{
	unsigned int input;
	std::cout << "Enter a number (q to quit): ";

	while (std::cin >> input)
	{
		std::cout << "The factorial of " << input;
		std::cout << " is " << factorial(input) << ".\n";
		std::cout << "Enter another number (q to quit): ";
	}
	std::cout << "Bye!\n";
	std::cin.get();
	return 0;
}

unsigned long int factorial(unsigned int input)
{
	if (input == 0)
		return 1;
	else
		return input * factorial(input - 1);
}
