// ex8-2.cpp The CandyBar structure contains three members. The first member holds the brand name of 
// a candy bar. The second member holds the weight(which may have a fractional part) of the candy bar,
// and the third member holds the number of calories(an integer value) in the candy bar. Write a program 
// uses a function that takes as arguments a reference to CandyBar, a pointer - to - char, a double,
// and an int and uses the last three values to set the corresponding members of the structure. The last
// three arguments should have default values of “Millennium Munch, ”2.85, and 350. Also the program
// should use a function that takes a reference to a CandyBar as an argument and displays the
// contents of the structure. Use const where appropriate.

#include <iostream> 
#include <cstring>

// global variables
const int SLEN = 30;

// struct declaration

struct candyBar
{
	char brandName[SLEN];
	double weight;
	int calories;
};

//function prototypes

void setValues(candyBar &foo, char *brandName = "Millenium Munch", double weight = 2.85, int calories = 350);
void display(const candyBar &foo);

int main()
{
	candyBar foo;
	setValues(foo);
	display(foo);
	std::cin.get();
	return 0;
}

void setValues(candyBar &foo, char *brandName, double weight, int calories)
{
	strcpy(foo.brandName, brandName);
	foo.weight = weight;
	foo.calories = calories;
}

void display(const candyBar &foo)
{
	std::cout << "brandName: " << foo.brandName << std::endl;
	std::cout << "weight: " << foo.weight << std::endl;
	std::cout << "calories: " << foo.calories << std::endl;
}
