// ex11-6.cpp Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it overloads 
// all six relational operators. The operators should compare the pounds members and return 
// a type bool value. Write a program that declares an array of six Stonewt objects and 
// initializes the first three objects in the array declaration. Then it should use a loop 
// to read in values used to set the remaining three array elements. Then it should report 
// the smallest element, the largest element, and how many elements are greater or equal 
// to 11 stone. (The simplest approach is to create a Stonewt object initialized to 11 stone 
// and to compare the other objects with that object.) 

// programming note: I only overloaded the 3 relational operators needed to complete the 
// exercise and used the modified version of the Stonewt class that I created for ex11-5.


#include <iostream> 
#include "stonewt.h"

int main() 
{
	const int arSize = 6;
	int smallestElement;	// store the smallest element
	int largestElement;		// store the largest element
	int count = 0;			// count the # of elements >= 11
	Stonewt foo[arSize];	// create array of 6 objects
	foo[0] = Stonewt(6);	// manually initialize first three elements in array
	foo[1] = Stonewt(9);
	foo[2] = Stonewt(12);
	Stonewt test(11);		// create object with pounds value of 11 for comparison

	for (int i = 3; i < arSize; i++)	// get input to init remaining three elements in array
	{
		int input;
		std::cout << "Enter value for object " << i + 1 << ": ";
		std::cin >> input;
		foo[i] = Stonewt(input);
	}

	smallestElement = foo[0].returnPounds();		// set default values;
	largestElement = foo[0].returnPounds();

	for (int i = 1; i < arSize; i++)	// perform tests using relational operators
	{
		if (foo[i].returnPounds() < smallestElement)
			smallestElement = foo[i].returnPounds();
		if (foo[i].returnPounds() > largestElement)
			largestElement = foo[i].returnPounds();
		if (foo[i].returnPounds() >= test.returnPounds())
			count++;
	}
	std::cout << std::endl << "Smallest element: " << smallestElement;
	std::cout << std::endl << "Largest element: " << largestElement;
	std::cout << std::endl << "# of elements > 11: " << count << std::endl;
}
