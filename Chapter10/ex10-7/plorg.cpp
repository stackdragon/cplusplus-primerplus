// compile with plorg.h and ex10-7.cpp
#include <iostream>
#include <string>
#include "plorg.h"

Plorg::Plorg(char name[20], int CI)	// constructor
{
	strcpy(m_name, name);
	m_CI = CI;
}

void Plorg::changeCI(const int & newCI)
{
	m_CI = newCI;
}

void Plorg::showPlorg()
{
	std::cout << "\nName: " << m_name << "\nCI: " << m_CI << std::endl;
}
