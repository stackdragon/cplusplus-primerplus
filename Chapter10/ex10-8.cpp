// ex10-8.cpp Design a List class to represent a provided abstract type. You should 
// provide a list.h header file with the class declaration and a list.cpp file with the 
// class method implementations. You should also create a short program that utilizes 
// your design. 

#include <iostream>
#include "list.h"

void square(Item & num);

int main()
{
	void(*pSquare)(Item & num); // declare a function pointer
	pSquare = &square; // initialize a pointer to function square
	std::cout << std::boolalpha; // set flag to print boolean results as "true" and "false"
								 // instead of 1's and 0's
	Item input;
	List foo; // create object
	std::cout << "Is initial list empty? " << foo.isEmpty();
	std::cout << "\nIs initial list full? " << foo.isFull();
	std::cout << "\nList contents: ";
	foo.show();
	std::cout << std::endl;
	std::cout << "Enter 5 values: ";
	for (int i = 0; i < 5; i++)
	{
		std::cin >> input;
		foo.push(input);
	}
	std::cout << "Is initial list empty? " << bool(foo.isEmpty());
	std::cout << "\nIs initial list full? " << bool(foo.isFull());
	std::cout << "\nList contents: ";
	foo.show();
	std::cout << std::endl;
	std::cout << "Values of all list items if squared: ";
	foo.visit(*pSquare);
	foo.show();
	return 0;
}

void square(Item & num)
{
	num = num * num;
}


