/ cd.cpp  cd implementations

#include <cstring>
#include <iostream>
#include "cd.h"

Cd::Cd(char * s1, char * s2, int n, double x)
{
	performers = new char[std::strlen(s1) + 1];
	std::strcpy(performers, s1);
	label = new char[std::strlen(s2) + 1];
	std::strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	performers = new char[std::strlen(d.performers) + 1];
	std::strcpy(performers, d.performers);
	label = new char[std::strlen(d.label) + 1];
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers = new char[std::strlen("Default performer") + 1];
	std::strcpy(performers, "Default performer");
	label = new char[std::strlen("Default label") + 1];
	std::strcpy(label, "Default label");
	selections = 0;
	playtime = 0;
}

Cd::~Cd()
{
	delete[] performers;
	delete[] label;
	std::cout << "\n**Cd destructor called";
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
	delete[] performers;
	delete[] label;
	performers = new char[std::strlen(d.performers) + 1];
	std::strcpy(performers, d.performers);
	label = new char[std::strlen(d.label) + 1];
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
