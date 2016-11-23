// ex10-3.cpp  Do Programming Exercise 1 from Chapter 9 but replace the code shown there 
// with an appropriate golf class declaration. Replace setgolf(golf &, const char*,
// int) with a constructor with the appropriate argument for providing initial values. 
// Retain the interactive version of setgolf() but implement it by using the constructor.
// (For example, for the code for setgolf(), obtain the data, pass the data to the 
// constructor to create a temporary object, and assign the temporary object to the 
// invoking object, which is *this.) 

#include <iostream>
#include <string>
#include "definitions.h"

int main()
{ 
	int const num = 3;
	std::cout << "Enter the information for 3 golfers.\n";
	Golf golfers[num];
	for (int i = 0; i < num; i++)
	{
		golfers[i].setgolf(i);
	}
	std::cout << std::endl << "** Displaying Golfers **\n";
	for (int i = 0; i < num; i++)
	{
		golfers[i].showgolf();
	}
}
