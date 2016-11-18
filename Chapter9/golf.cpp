#include <iostream>
#include <cstring>
#include "golf.h"

extern void setgolf(golf & g, const char * name, int hc)
{
	strcpy(g.fullname, name); 
	g.handicap = hc;
}

extern int setgolf(golf & g)
{
	char temp[Len];
	std::cout << "Enter the golfer's name: ";
	std::cin.getline(temp, Len);
	if (strlen(temp) != 0)
	{
		strcpy(g.fullname, temp);
		std::cout << "Enter the golfer's handicap: ";
		std::cin >> g.handicap;
		std::cin.get();
		return 1;
	}
	else
		return 0;
}

extern void showgolf(const golf & g)
{
	std::cout << "\nName: " << g.fullname;
	std::cout << "\nHandicap: " << g.handicap;
}
