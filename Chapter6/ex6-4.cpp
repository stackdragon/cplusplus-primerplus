//  ex6-4.cpp Write a program that can list members by real name, by job title,
//  by secret name, or by a member's preference. Have the program run a loop
//  that lets the user select from different sorting alternatives

#include <iostream>
#include <array>
#include <string>

void showMenu();

int main()
{
	char response;
	const int arSize = 5;

	struct bop {
		std::string fullname;
		std::string title;
		std::string bopname;
		int preference;
	};

	bop names[arSize] =
	{
		{"Wimp Macho","Associate","BONE",1},
		{"Raki Rhodes","Senior","CATMAN",2},
		{"Celia Laiter","Manager","DOGGIRL",3},
		{"Hoppy Hipman","Director","EATER",1},
		{"Pat Hand","Partner","FERD",2}
	};

	showMenu();

	std::cin >> response;

	while (response != 'q') {
		int filter;
		if (response == 'a') 
			for (int i = 0; i < arSize; i++)
				std::cout << std::endl << names[i].fullname;
		else if (response == 'b')
			for (int i = 0; i < arSize; i++)
				std::cout << std::endl << names[i].title;
		else if (response == 'c')
			for (int i = 0; i < arSize; i++)
				std::cout << std::endl << names[i].bopname;
		else if (response == 'd')
			for (int i = 0; i < arSize; i++)
				if (names[i].preference == 1)
					std::cout << std::endl << names[i].fullname;
				else if (names[i].preference == 2)
					std::cout << std::endl << names[i].title;
				else
					std::cout << std::endl << names[i].bopname;
		else
			std::cout << "\nNot a valid choice.";
		std::cout << std::endl << std::endl;
		showMenu();
		std::cin >> response;
	}
}

void showMenu()
{
	std::cout << "Benevolent Order of Programmers Report\n";
	std::cout << "a. display by name		b. display by title\n";
	std::cout << "c. display by bopname		d. display by preference\n";
	std::cout << "q. quit\n\n";
	std::cout << "Enter your choice: ";
}
