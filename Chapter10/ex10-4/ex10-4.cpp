// ex10-4.cpp  Do Programming Exercise 4 from Chapter 9 but convert the Sales structure 
// and its associated functions to a class and its methods. Replace the 
// setSales(Sales &, double [], int) function with a constructor. Implement the 
// interactive setSales(Sales &) method by using the constructor. Keep the class within 
// the namespace SALES. 

#include <iostream>
#include <vector>
#include "namespace.h"

int main()
{
	using namespace SALES;

	Sales quarterlySales;
	
	std::cout << std::endl;

	std::cout << "Displaying contents of class: \n";
	quarterlySales.showSales();
	
	return 0;
}
