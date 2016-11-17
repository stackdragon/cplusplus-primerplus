// ex8-4.cpp Complete this skeleton by providing the described functions and prototypes. Note that
// there should be two show() functions, each using default arguments. Use const arguments when 
// appropriate. Note that set() should use new to allocate sufficient space to hold the designated
// string. The techniques used here are similar to those used in designing and implementing classes.
// (You might have to alter the header filenames and delete the using directive, depending on your 
// compiler.)

#include <iostream> 
#include <cstring>      // for strlen(), strcpy() 

using namespace std;

struct stringy 
{ 
	char *str;        // points to a string 
	int ct;            // length of string (not counting '\0') 
};

// prototypes for set(), show(), and show() go here 
void set(stringy &beany, char testing[]);
void show(stringy &beany, int count = 1);
void show(const char bar[], int count = 1);

int main() 
{ 
	stringy beany; 
	char testing[] = "Reality isn't what it used to be.";
	
	set(beany, testing);    

	show(beany);      // prints member string once 
	show(beany, 2);   // prints member string twice 
	testing[0] = 'D'; 
	testing[1] = 'u'; 
	show(testing);    // prints testing string once 
	show(testing, 3); // prints testing string thrice 
	show("Done!");
	return 0;
}

// allocates space to hold copy of testing, sets str member of beany to point to the 
// new block, copies testing to new block, and sets ct member of beany

void set(stringy &beany, char testing[])
{
	int length = strlen(testing);
	char *foo = new char[length + 1];
	strcpy(foo, testing);
	beany.str = foo;
	beany.ct = length;
}

void show(stringy &beany, int count)
{
	for (int i = 0; i < count; i++)
	{
		std::cout << beany.str;
	}
}

void show(const char bar[], int count)
{
	for (int i = 0; i < count; i++)
	{
		std::cout << bar;
	}
}
