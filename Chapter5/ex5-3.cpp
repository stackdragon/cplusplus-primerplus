//  ex5-3.cpp Report the cumulative sum of a series of user-entered numbers. 
//  Terminate when the user enters "0".

#include <iostream>


int main()
{
	int userInput = 1;
	int numberCount = 1;
	int sum = 0;

	while (userInput != 0) {

		std::cout << "Enter number " << numberCount << ": ";
		std::cin >> userInput;
		sum += userInput;
		std::cout << "Cumulative total = " << sum << std::endl;
		numberCount++;
	}

	std::cout << std::endl << "Goodbye!";

	std::cin.get();
	std::cin.get();
}
