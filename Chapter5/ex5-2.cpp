//  ex5-2.cpp Use the array object and type long double to find the first 100 factorials

#include <iostream>
#include <array>

const int arSize = 101;

int main()
{
	std::array <long double, arSize> factorial;

	factorial[0] = factorial[1] = 1;

	for (int i = 2; i < arSize; i++) 			// set array of factorials
		factorial[i] = i * factorial[i - 1];

	for (int i = 0; i < arSize; i++) 			// print array of factorials
		std::cout << i << ": " << factorial[i] << std::endl;

	std::cin.get();
	std::cin.get();
}

