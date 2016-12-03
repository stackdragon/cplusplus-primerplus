// ex12-1.cpp  Provide the implementation for a provided class and write a short program 
// that uses all the member functions. 

#include <iostream> 
#include <cstring>
#include "cow.h"

int main() 
{ 
	Cow cow1;							// create first object via default constructor
	Cow cow2("Abe", "Eating", 200);		// create second object via constructor
	Cow cow3 = cow2;					// create third object using copy constructor
	Cow cow4("Bob", "Sleeping", 300);	// create fourth object via constructor
	cow3 = cow4;						// Reassign third object via overloaded assignment operator
	return 0;
}
