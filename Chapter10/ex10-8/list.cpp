// compile with list.h and ex10-8.cpp
#include <iostream>
#include "list.h"

List::List()	// create an empty list
{
	m_top = 0;
}

bool List::push(const Item & item)
{
	if (m_top < MAX)
	{
		m_items[m_top++] = item;
		return true;
	}
	else return false;
}

bool List::isEmpty() const
{
	return m_top == 0;
}

bool List::isFull() const
{
	return m_top == MAX;
}

void List::show() const
{
	for (int i = 0; i < MAX; i++)
	{
		std::cout << "\n#" << i + 1 << ": " << m_items[i];
	}
}

void List::visit(void(*pSquare)(Item & item)) // method takes a pointer to function pSquare
{
	for (int i = 0; i < MAX; i++)
	{
		(*pSquare)(m_items[i]);
	}
}



