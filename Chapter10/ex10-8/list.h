// compile with ex10-8.cpp and list.cpp
#pragma once
#include <string>

typedef int Item;

class List
{
private:
	static const int MAX = 5; // constant specific to class 
	Item m_items[MAX];    // holds list items
	int m_top;            // index for top list items
public:
	List(); // constructor creates an empty list
	bool push(const Item & item);
	bool isEmpty() const;
	bool isFull() const;
	void show() const;
	void visit(void(*pSquare)(Item & item));
};
