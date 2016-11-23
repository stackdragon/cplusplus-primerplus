// compile with definitions.h and ex10-3.cpp
#include <iostream>
#include <string>
#include "definitions.h"

void Golf::setgolf(int i)
{
	std::string tempName;
	int tempHandicap = 0;
	std::cout << "Enter name for golfer " << i+1 << ": ";
	getline(std::cin, tempName);
	this->m_fullName = tempName;
	std::cout << "Enter the handicap for golfer " << i+1 << ": ";
	std::cin >> tempHandicap;
	std::cin.get();
	this->m_handicap = tempHandicap;
}

void Golf::showgolf()
{
	std::cout << "Golfer's name: " << m_fullName;
	std::cout << "\nGolfer's handicap: " << m_handicap << std::endl;
}
