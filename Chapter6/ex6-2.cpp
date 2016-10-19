//  ex6-2.cpp Write a program that reads up to 10 donation values into an array
//  of double. The program should terminate input on non-numeric input. It should
//  report the average of the numbers and also report how many numbers in the 
//  array are larger than the average

#include <iostream>
#include <array>

int main()
{
	const int arSize = 10;
	std::array <double, arSize> donationVal;
	int i = 0;
	int sum = 0;
	int average = 0;
	int count = 0;

	std::cout << "Enter value 1: ";

	while (i < arSize && std::cin >> donationVal[i])
	{	
		sum += donationVal[i];
		i++;
		if (i < arSize) 
			std::cout << "Enter value " << i+1 << ": ";
	}

	average = sum / i;
	std::cout << "\nThe average of the " << i << " values is " << average << ".";

	for (int j = 0; j < i; j++) {
		if (donationVal[j] > average)
			count++;
	}

	std::cout << "\nThe number of values above the average is " << count << ".\n\n";
	
	std::cin.get();
}
