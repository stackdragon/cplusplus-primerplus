//  ex5-7.cpp Design a struct called car that holds make and year. Ask user how many
//  cars to catalog. Create a dynamic array of that many structs. Allow user to input
//  values into the requested number of structures. Finally, display content of each
//  structure.

#include <iostream>
#include <string>

struct car
{
	std::string name;
	int year;
};

int main()
{
	int numOfRecords = 0;

	
	std::cout << "How many cars do you wish to catalog? ";
	std::cin >> numOfRecords;
	std::cin.get();

	car * records = new car[numOfRecords];

	for (int i = 0; i < numOfRecords; i++)
	{
		std::cout << "Car #" << i+1 << ":" << std::endl;
		std::cout << "Please enter the make: ";
		std::getline(std::cin, records[i].name);
		std::cout << "Please enter the year made: ";
		std::cin >> records[i].year;
		std::cin.get();
	}

	std::cout << std::endl << "Here is your collection:" << std::endl;
	for (int i = 0; i < numOfRecords; i++)
	{
		std::cout << records[i].year << " " << records[i].name << std::endl;
	}

	delete[] records;

	std::cin.get();
	std::cin.get();
}
