#include <cstring>
#include "classic.h"
#include <iostream>

Classic::Classic(char * s1, char * s2, char * s3, int n, double x) : Cd(s2, s3, n, x)
{
	std::strcpy(title, s1);
}

Classic::Classic() : Cd()
{
	std::strcpy(title, "Default title");
}

void Classic::Report() const
{
	Cd::Report();
	std::cout << "\nTitle: " << title;
	std::cout << "\n\n";
}

Classic::~Classic() // destructor does nothing
{
}
