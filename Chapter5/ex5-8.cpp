//  ex5-8.cpp Write a program that uses an array of char and a loop to read one word
//  at a time until the word "done" is entered. Then report the number of words entered.

#include <iostream>
#include <cstring>

int main()
{
	const int arSize = 100;
	char words[arSize];
	char delimeter[] = "done";
	int wordCount = 0;
	
	std::cout << "Enter words (to stop, type the word done): ";
	std::cin >> words;

	while (std::strcmp(words, "done") != 0) {
		wordCount++;
		std::cin >> words;
	}

	std::cout << "You entered a total of " << wordCount << " words." << std::endl;

	std::cin.get();
	std::cin.get();
}

