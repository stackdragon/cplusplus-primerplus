//  ex6-3.cpp Write a precursor to a menu-driven program. The program should
//  dispaly a menu offering four choices, each labelled with a letter. If the user
//  responds with a letter other than one of the four valid choices, the program
//  should prompt the user to enter a valid response until the user complies. Then
//  the program should use a switch to select a simple action based on the user's
//  selection.

#include <iostream>

void showMenu();

int main()
{
	char choice;
	bool loop = true;
	while (loop == true)
	{
		showMenu();
		std::cin >> choice;
		switch (choice)
		{
			case 'c':
			case 'C': std::cout << "\nA lion is a carnivore.\n";
				loop = false;
				break;
			case 'p':
			case 'P': std::cout << "\nGlenn Gould is a pianist.\n";
				loop = false;
				break;
			case 't':
			case 'T': std::cout << "\nA maple is a tree.\n";
				loop = false;
				break;
			case 'g':
			case 'G': std::cout << "\nA game is backgammon.\n";
				loop = false;
				break;
			default: std::cout << "\nThat's not a choice!\n";
		}
		std::cin.clear();
		std::cin.ignore(1000, '\n');
	}
}

void showMenu()
{
	std::cout << "Please enter one of the following choices: ";
	std::cout << std::endl << "c) carnivore          p) pianist";
	std::cout << std::endl << "t) tree               g) game";
	std::cout << std::endl << "Your choice: ";
}
