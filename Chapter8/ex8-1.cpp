// ex8-1.cpp Write a function that normally takes one argument, the address of a string, and prints
// that string once. However, if a second, type int, argument is provided and is nonzero, the function
// should print the string a number of times equal to the number of times that function has been called 
// at that point. (Note that the number of times the string is printed is not equal to the value of
// the second argument; it is equal to the number of times the function has been called.) Use the 
// function in a simple program that demonstrates how the function works.

#include <iostream> 

void display(const char *text, int foo = 0);

int main()
{
	int foo = 1;

	const char text[10] = "Hello!";
	std::cout << "display(text):\n";
	display(text);
	std::cout << std::endl << "\ndisplay(text, foo):\n";
	display(text, foo);
	std::cout << std::endl << "\ndisplay(text, foo):\n";
	display(text, foo);
	std::cout << std::endl << "\ndisplay(text):\n";
	display(text);
	std::cout << std::endl;
	return 0;
}

void display (const char *text, int foo)
{
	static int calls = 1; // to record the number of function calls

	if (foo == 0)
	{
		std::cout << text;
	}

	else
	{
		for (int i = 0; i < calls; i++)
			std::cout << text;
	}
	calls++;
}
