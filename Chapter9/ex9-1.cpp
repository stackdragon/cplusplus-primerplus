// ex9-1.cpp Put together a multifile program based on this header. One file, named golf.cpp, 
// should provide suitable function definitions to match the prototypes in the header file.
// A second file should contain main() and demonstrate all the features of the prototyped 
// functions. For example, a loop should solicit input for an array of golf structures 
// and terminate when the array is full or the user enters an empty string for the 
// golfer’s name. The main() function should use only the prototyped functions to access 
// the golf structures. 

#include <iostream>
#include <vector>
#include "golf.h"

int main()
{
	int count; // store the number of golfers intended to be entered by user
	int actCount; // store the actual number of golfers entered
	std::cout << "Enter the number of golfers: ";
	std::cin >> count;
	std::cin.get();
	std::cout << "Fist golfer is Ann Birdfree.\n";

	std::vector<golf> golfers; // create a vector of golfers
	golf foo; // blank struct used to fill the vector

	for (int i = 0; i < count; i++) // fill the vector with a series of blank structs
		golfers.push_back(foo);		// based on number of golfers

	setgolf(golfers[0], "Ann Birdfree", 24); // set first element in vector
	
	for (actCount = 1; actCount < count; actCount++)
	{
		std::cout << "Golfer #" << actCount + 1 << std::endl;
		if (setgolf(golfers[actCount]) == 0) // tests if function is blank.
			break;							 // stops filling vector if it is.
	}
 
	std::cout << "\nDisplaying golfers:\n";
	for (int i = 0; i < actCount; i++) // display all elements in vector up to actCount
		showgolf(golfers[i]);

	std::cout << std::endl;
	return 0; 
}

