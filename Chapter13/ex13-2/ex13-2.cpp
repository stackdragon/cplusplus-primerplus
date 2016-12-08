// ex13-2.cpp -- Do Programming Exercise 1 but use dynamic memory allocation instead of 
// fixedsize arrays for the various strings tracked by the two classes.

#include <iostream> 
using namespace std; 
#include "classic.h"     // which will contain #include cd.h

void Bravo(const Cd & disk); 

int main() 
{
	Cd c1("Beatles", "Capitol", 14, 35.5); 
	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C", 
		"Alfred Brendel", "Philips", 2, 57.17); 
	Cd *pcd = &c1;

	cout << "\nUsing object directly:\n"; 
	c1.Report();    // use Cd method 
	std::cout << std::endl;
	c2.Report();    // use Classic method
	std::cout << std::endl;
	cout << "\nUsing type cd * pointer to objects:\n"; 
	pcd->Report();  // use Cd method for cd object 
	std::cout << std::endl;
	pcd = &c2; pcd->Report();  // use Classic method for classic object
	std::cout << std::endl;
	cout << "\nCalling a function with a Cd reference argument:\n";
	Bravo(c1); 
	std::cout << std::endl;
	Bravo(c2);
	std::cout << std::endl;
	cout << "\nTesting assignment: "; 
	Classic copy; 
	copy = c2; 
	copy.Report();
	return 0;
}

void Bravo(const Cd & disk) 
{ 
	disk.Report(); 
}
