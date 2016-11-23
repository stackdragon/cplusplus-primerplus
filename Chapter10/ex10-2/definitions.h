// compile with ex10-2.cpp and implements.cpp
#pragma once
#include <string>

class Person 
{
private: 
	static const int LIMIT = 25; 
	std::string m_lname;       // Person’s last name 
	char m_fname[LIMIT];  // Person’s first name 
public: 
	Person() { m_lname = ""; m_fname[0] = '\0'; } // #1 
	Person(const std::string & ln, const char * fn = "Heyyou");   // #2 

// the following methods display lname and fname 
	void Show() const;        // firstname lastname format 
	void FormalShow() const;  // lastname, firstname format 
};
