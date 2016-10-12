//  ex5-9.cpp Write a program that uses a string and a loop to read one word at a time
//  until the word "done" is entered. Then report the number of words entered.

#include <iostream>
#include <string>

int main()
{
	std::string words;
	std::string delimeter = "done";
	int wordCount = 0;
	
	std::cout << "Enter words (to stop, type the word done): ";
	std::cin >> words;

	while (words !="done") {
		wordCount++;
		std::cin >> words;
	}

	std::cout << "You entered a total of " << wordCount << " words." << std::endl;

	std::cin.get();
	std::cin.get();
}

