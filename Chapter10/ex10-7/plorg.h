// compile with ex10-7.cpp and plorg.cpp
#pragma once
#include <string>

class Plorg
{
private:
	char m_name[20];
	int m_CI;
public:
	Plorg(char name[20] = "Plorga", int CI = 50);
	void changeCI(const int & newCI);
	void showPlorg();
};
