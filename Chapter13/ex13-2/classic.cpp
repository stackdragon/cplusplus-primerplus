#include <cstring>
#include "classic.h"
#include <iostream>

Classic::Classic(char * s1, char * s2, char * s3, int n, double x) : Cd(s2, s3, n, x)
{
	title = new char[std::strlen(s1) + 1];
	std::strcpy(title, s1);
}

Classic::Classic() : Cd()
{
	title = new char[std::strlen("Default title") + 1];
	std::strcpy(title, "Default title");
}

Classic::Classic(const Classic & d) : Cd(d) // copy constructor
{
	title = new char[std::strlen(d.title) + 1];
	std::strcpy(title, d.title);
}

void Classic::Report() const
{
	Cd::Report();
	std::cout << "\nTitle: " << title;
	std::cout << "\n\n";
}

Classic & Classic::operator=(const Classic & d) 
{
	if (this == &d)
		return *this;
	Cd::operator=(d); //copy base portion
	delete[] title;
	title = new char[std::strlen(d.title) + 1];
	std::strcpy(title, d.title);
	return *this;
}

Classic::~Classic() // destructor does nothing
{
	delete[] title;
	std::cout << "\n*Classic destructor called*";
}
