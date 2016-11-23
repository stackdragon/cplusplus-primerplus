// compile with definitions.h and ex10-1.cpp

#include <iostream>
#include <string>
#include "definitions.h"

Person::Person(const std::string & ln, const char * fn)
{
	m_lname = ln;
	strcpy(m_fname, fn);
}

void Person::Show() const
{
	std::cout << std::endl << m_fname << " " << m_lname << std::endl;
}

void Person::FormalShow() const
{
	std::cout << std::endl << m_lname << ", " << m_fname << std::endl;
}
