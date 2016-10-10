//  ex5-1.cpp Takes two integers, reports the sum of the two and all integers in between.

#include <iostream>

int main()
{
	int firstNumber;
	int secondNumber;
	int sum;

	std::cout << "Enter the first number: ";
	std::cin >> firstNumber;
	std::cout << "Enter the second number: ";
	std::cin >> secondNumber;

	sum = firstNumber;

	for (int i = firstNumber + 1; i <= secondNumber; i++) {
		sum += i;
	}

	std::cout << "The sum of all integers between " << firstNumber;
	std::cout << " and " << secondNumber << " is " << sum << ".";

	std::cin.get();
	std::cin.get();
}
