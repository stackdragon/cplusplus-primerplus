// cow.cpp -- Cow methods
#include <iostream> 
#include <cstring>
#include "cow.h"
	
int Cow::num_cows = 0;

// default constructor
Cow::Cow()	
{
	std::strcpy(name, "Empty");
	hobby = new char[6];
	std::strcpy(hobby, "Empty");
	weight = 0;
	num_cows++;
	std::cout << "\n\nObject # " << num_cows << " constructed via default constructor.\n";
	ShowCow();
}

// constructor
Cow::Cow(const char * nm, const char * ho, double wt)	
{
	std::strcpy(name, nm);
	int len = std::strlen(ho); // get size of string
	hobby = new char[len + 1];	// allocate memory storage
	std::strcpy(hobby, ho); // copy string to new memory location
	weight = wt;
	num_cows++; // increment number of objects
	std::cout << "\n\nObject # " << num_cows << " constructed. \n";
	ShowCow();
}

// copy constructor
Cow::Cow(const Cow &c)	
{
	std::strcpy(name, c.name);
	int len = std::strlen(c.hobby); // get size of string member in object being copied
	hobby = new char[len + 1]; // allocate memory storage
	std::strcpy(hobby, c.hobby); // copy string to new memory location
	weight = c.weight;
	num_cows++;
	std::cout << "\n\nObject # " << num_cows << " copy constructed. \n";
	ShowCow();
}

// destructor
Cow::~Cow()		
{
	delete[] hobby;
	std::cout << "\nObject # " << num_cows << " destructed.";
	num_cows--;
}

// overloaded assignment operator
Cow & Cow::operator=(const Cow & c)
{
	if (this == &c)			// check to see if self assignment and return pointer to object
		return *this;		// this avoids deleting contents of memory before assigned
	std::strcpy(name, c.name); 
	delete[] hobby;			// free any memory contained in old string
	int len = std::strlen(c.hobby); // get size of string member in object being copied
	hobby = new char[len + 1]; // allocate memory storage
	std::strcpy(hobby, c.hobby); // copy string to new memory location
	weight = c.weight;
	std::cout << "\n\nObject # " << num_cows-1 << " re-assigned.\n"; // plug for num_cows
	ShowCow();
}

void Cow::ShowCow() const
{
	std::cout << "Name: " << name << ", Hobby: " << hobby << ", Weight: " << weight;
}
