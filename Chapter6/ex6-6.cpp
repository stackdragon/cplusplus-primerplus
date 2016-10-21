//  ex6-6.cpp Write a program that asks the user to enter the number of
//  contributors and then solicit the name and contribution of each
//  contributor. The information should be stored in a dynamically
//  allocated array of structures. Program should then list donors with
//  those contributing more than $10,000 listed as Grand Patrons.

#include <iostream>
#include <string>
#include <vector>

int main()
{
	int records = 0;
	int noPatrons = 0;
	int noGrandPatrons = 0;

	struct patrons
	{
		std::string name;
		double contribution;
	};
	
	std::cout << "Enter the number of contributors: ";
	std::cin >> records;
	std::cout << std::endl;

	std::vector<patrons> list(records);

	// for loop to get names and contributions of all contributors

	for (int i = 0; i < records; i++)
	{
		std::cout << "Enter the name of contributor " << i + 1 << ": ";
		std::cin.get();
		std::getline(std::cin, list[i].name);
		std::cout << "Enter the contribution of contributor " << i + 1 << ": ";
		std::cin >> list[i].contribution;
		std::cout << std::endl;
	}

	std::cout << "\nGRAND PATRONS\n\n";

	// for loop to list all grand patrons 

	for (int i = 0; i < records; i++)
	{
		if (list[i].contribution >= 10000)
		{
			std::cout << list[i].name << std::endl;
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
			std::cout << list[i].name << std::endl;
			noPatrons++;
		}
	}

	if (noPatrons == 0)
		std::cout << "None.\n\n";
}
