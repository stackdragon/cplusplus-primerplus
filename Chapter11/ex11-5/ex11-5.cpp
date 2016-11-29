// ex11-5.cpp Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it has a state 
// member that governs whether the object is interpreted in stone form, integer pounds form, 
// or floating-point pounds form. Overload the << operator to replace the show_stn() 
// and show_lbs() methods. Overload the addition, subtraction, and multiplication operators 
// so that one can add, subtract, and multiply Stonewt values. Test your class with a 
// short program that uses all the class methods and friends. 

#include <iostream> 
#include "stonewt.h"

int main() 
{
	float input;

	// get input from user
	std::cout << "Enter the number of pounds (in floating point format) for \"foo\": ";
	std::cin >> input;
	std::cin.get();

	// create foo object and display values for each state member
	Stonewt foo(input);
	foo.mode_stone();
	std::cout << foo << std::endl;
	foo.mode_intPounds();
	std::cout << foo << std::endl;
	foo.mode_fltPounds();
	std::cout << foo << std::endl << std::endl;

	// create additional object bar with the same member values as foo
	std::cout << "Making another copy of the object (\"bar\").";
	Stonewt bar = foo;

	// add two objects using overloaded addition operator and display values for each
	// state member
	Stonewt sum = foo + bar;
	sum.mode_stone();
	std::cout << "\nfoo + bar = " << sum << std::endl;
	sum.mode_intPounds();
	std::cout << "foo + bar = " << sum << std::endl;
	sum.mode_fltPounds();
	std::cout << "foo + bar = " << sum << std::endl;

	return 0;
}
