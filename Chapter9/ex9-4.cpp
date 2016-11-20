// ex9-4.cpp   Write a program based on a supplied namespace. The first file should be the
// header file that contains the namespace. The second file should be a source code file 
// that extends the namespace to provide definitions for the three prototyped functions. 
// The third file should declare two Sales objects. It should use the interactive version 
// of setSales() to provide values for one structure and the non-interactive version of 
// setSales() to provide values for the second structure. It should display the contents 
// of both structures by using showSales().

#include <iostream>
#include <vector>
#include "namespace.h"

int main()
{
	using namespace SALES;

	int count = 2; // desired size of vector
	double ar[4] = { 10000, 20000, 30000, 40000 };
	
	std::vector<Sales> quarterlySales; // create a vector of sales structs
	Sales foo; // blank struct used to fill the vector

	for (int i = 0; i < count; i++)			// fill the vector with a series of blank structs
		quarterlySales.push_back(foo);		// based on number of sales structs

	setSales(quarterlySales[0], ar, (sizeof(ar) / sizeof(double)));
	setSales(quarterlySales[1]);
	std::cout << std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout << "Displaying contents of struct " << i + 1 << std::endl;
		showSales(quarterlySales[i]);
	}
	return 0;
}
