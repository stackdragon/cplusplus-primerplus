// compile with ex10-3.cpp and implements.cpp
#pragma once
#include <string>

class Golf
{
private:
	std::string m_fullName;
	int m_handicap;
public:
	Golf() { m_fullName = "NA"; m_handicap = 0; }; // default constructor
	void setgolf(int i);
	void showgolf();
};
