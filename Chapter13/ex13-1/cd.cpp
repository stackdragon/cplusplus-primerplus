// cd.cpp  cd implementations

#include <cstring>
#include <iostream>
#include "cd.h"

Cd::Cd(char * s1, char * s2, int n, double x)
{
	std::strcpy(performers, s1);
	std::strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	std::strcpy(performers, d.performers);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	std::strcpy(performers, "Default performer");
	std::strcpy(label, "Default label");
	selections = 0;
	playtime = 0;
}

Cd::~Cd()
{
}

void Cd::Report() const
{
	std::cout << "Performers: " << performers;
	std::cout << "\nLabel: " << label;
	std::cout << "\nNo. of selections: " << selections;
	std::cout << "\nPlaytime: " << playtime;
	std::cout << "\n";
}

Cd & Cd::operator=(const Cd & d)
{
	if (this == &d)
		return *this;	// if assigned to itself just return reference to object
	std::strcpy(performers, d.performers);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
