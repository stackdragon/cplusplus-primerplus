// stack.cpp -- Stack member functions 
#include "stack.h"
#include <iostream>

Stack::Stack(int n)
{
	pitems = new Item[n + 1];
	top = 0;
	size = n;
	std::cout << "\nStack constructor called with array size of " << n << ".";
}

Stack::Stack(const Stack & st)
{
	top = st.top;
	size = st.size;
	pitems = new Item[size + 1];
	for (int i = 0; i < size; i++)	// copy array values from passed object
	{
		pitems[i] = st.pitems[i];
	}
	std::cout << "\nStack copy contructor called.";
}

Stack::~Stack()
{
	delete[]pitems;
	std::cout << "\nStack destructor called, memory deallocated.";
}

bool Stack::isempty() const
{ 
	return top == 0; 
}

bool Stack::isfull() const 
{ 
	return top == MAX; 
}

bool Stack::push(const Item & item) 
{
	if (top < MAX) 
	{ 
		pitems[top++] = item; 
		return true; 
	}
	else return false;
}

bool Stack::pop(Item & item) 
{ 
	if (top > 0) 
	{ 
		item = pitems[--top]; 
		return true; 
	} 
	else return false; 
}

Stack & Stack::operator=(const Stack & st)
{
	if (this == &st)           // check for self-assignment 
		return *this;          // if so, just return pointer to object
	delete [] pitems;          // free old array
	size = st.size;
	top = st.top;
	pitems = new Item[size + 1];
	for (int i = 0; i < size; i++)	// copy array values from passed object
	{
		pitems[i] = st.pitems[i];
	}
	std::cout << "\nOverloaded assignment operator called.";
}
