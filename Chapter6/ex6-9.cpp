//  ex6-9.cpp Do program exercise 6-6 but modify it to get information from a file.
//  The first item in the file should be the number of contributors and the rest of
//  the file should consist of pairs of lines, with the first line of each pair
//  being a contributor's name and the second line being the contribution.

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main()
{
	const int SIZE = 60;
	char filename[SIZE];
	std::ifstream file;
	int records = 0;
	int noPatrons = 0;
	int noGrandPatrons = 0;

	struct patrons
	{
		std::string name;
		double contribution;
	};

	std::cout << "Enter name of data file: ";
	std::cin.getline(filename, SIZE);
	file.open(filename); // associate file with a text file
	if (!file.is_open()) // if failed to load ifle
	{
		std::cout << "\nFailed to open the file. Exiting.\n\n";
		std::cin.get();
		exit(EXIT_FAILURE);
	}

	file >> records; // 
	
	
	
	line of file is number of records
	file.get();

	std::vector<patrons> list(records);

		for (int i = 0; i < records; i++)
		{
			std::getline(file, list[i].name, '\n');
			file >> list[i].contribution;
			file.get();
		}

	std::cout << "\nGRAND PATRONS\n\n";

	// for loop to list all grand patrons 

	for (int i = 0; i < records; i++)
	{
		if (list[i].contribution >= 10000)
		{
			std::cout << list[i].name << " donated " << list[i].contribution << ".\n";
			noGrandPatrons++;
		}
	}

	if (noGrandPatrons == 0)
		std::cout << "None.\n";

	std::cout << "\nPATRONS\n\n";

	// for loop to list all patrons

	for (int i = 0; i < records; i++)
	{
		if (list[i].contribution < 10000)
		{
			std::cout << list[i].name << " donated " << list[i].contribution << ".\n";
			noPatrons++;
		}
	}

	if (noPatrons == 0)
		std::cout << "None.\n\n";

	std::cin.get();
}
