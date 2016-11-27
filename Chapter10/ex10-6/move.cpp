// compile with move.h and ex10-6.cpp
#include <iostream>
#include "move.h"

Move::Move(double a, double b)	// constructor
{
	m_x = a;
	m_y = b;
}

void Move::showmove() const
{
	std::cout << "Value of x is: " << m_x << "\nValue of y is: " << m_y << std::endl;
}

Move Move::add(const Move & m) const
{
	double newx, newy;
	newx = this->m_x + m.m_x;
	newy = this->m_y + m.m_y;
	Move newMove = { newx, newy};
	return newMove;
}

void Move::reset(double a, double b)
{
	m_x = a;
	m_y = b;
}
