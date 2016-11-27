// ex10-6.cpp Create member function definitions and a program that exercises the 
// provided class. Compile with "move.h" and "Move.cpp".

#include <iostream>
#include "move.h"

int main()
{
	double a, b;
	int input;

	std::cout << "Enter two value: ";
	std::cin >> a;
	std::cin.get();
	std::cin >> b;

	Move myMove(a, b); // primary object
	myMove.showmove();
	std::cout << "Enter 1 to add more values, 2 to reset, or Q to quit: ";
	while (std::cin >> input)
	{
		if (input == 1)
		{
			std::cout << "*Adding more values*\nEnter two value: ";
			std::cin >> a;
			std::cin.get();
			std::cin >> b;
			Move tempMove(a, b); // create temporary object to pass member values to Move.add method
			myMove = myMove.add(tempMove); // pass temporary object, assign return object to myMove
			myMove.showmove();
		}
		else if (input == 2)
		{
			std::cout << "*Resetting values*\nEnter two value: ";
			std::cin >> a;
			std::cin.get();
			std::cin >> b;
			myMove.reset(a, b);
			myMove.showmove();
		}
		else
			std::cout << "Invalid command. Try again!\n";
		std::cout << "Enter 1 to add more values, 2 to reset, or Q to quit: ";
	}
	return 0;
}
