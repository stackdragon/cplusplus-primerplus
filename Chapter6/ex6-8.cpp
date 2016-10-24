//  ex6-8.cpp Write a program that opens a text file, reads it character-by-
//  character to the end of the file, and reports the number of characters in
//  the file.

#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
	const int SIZE = 60;
	char filename[SIZE];
	std::ifstream file;
	int charCount = 0;

	std::cout << "Enter name of data file: ";
	std::cin.getline(filename, SIZE);
	file.open(filename); // associate file with a text file
	if (!file.is_open()) // if failed to load ifle
	{
		std::cout << "\nFailed to open the file. Exiting.\n\n";
		std::cin.get();
		exit(EXIT_FAILURE);
	}
	
	file.get();

	while (!file.eof())
	{
		charCount++;
		file.get();
	}

	std::cout << "\n\nThe file has " << charCount << " characters.\n";

	std::cin.get();
	std::cin.get();
}
