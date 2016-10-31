//  ex7-1.cpp Write a program that repeatedly asks the user to enter pairs of numbers
//  until at least one of the pair is 0. For each pair, the program should use a
//  function to calculate the harmonic mean of the numbers. The function should 
//  return the answer to main(), which should report the result. The harmonic
//  mean of the numbers is the inverse of the average of the inverses and can be
//  calculated as follows : harmonic mean = 2.0 × x × y / (x + y)

#include <iostream>

float showHarmMean(int x, int y);

int main()
{
	int num1 = 1;
	int num2 = 1;

	std::cout << "Enter a pair of numbers: ";

	while (std::cin >> num1 >> num2 && num1 != 0 && num2 !=0 )
	{
		std::cout << "The harmonic mean is " << showHarmMean(num1, num2) << std::endl;
		std::cout << "Enter a pair of numbers: ";
	}
	std::cin.get();
}

float showHarmMean(int x, int y)
{
	return (2.0 * x * y) / (x + y);
}
