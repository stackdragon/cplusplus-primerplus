//for use with ex9-4.cpp

#include <iostream>
#include "namespace.h"

namespace SALES {

	// copies the lesser of 4 or n items from the array ar 
	// to the sales member of s and computes and stores the
	// average, maximum, and minimum values of the entered items;
	// remaining elements of sales, if any, set to 0 

	void setSales(Sales & s, const double ar[], int n)
	{
		double total = 0;
		double max = ar[0];
		double min = ar[0];

		if (n > 4)
			n = 4;

		for (int i = 0; i < n; i++)
		{
			s.sales[i] = ar[i];
			total += s.sales[i];

			if (s.sales[i] > max)
				max = s.sales[i];
			if (s.sales[i] < min)
				min = s.sales[i];
		}
		s.average = total / n;
		s.max = max;
		s.min = min;
	}

	// gathers sales for 4 quarters interactively, stores them 
	// in the sales member of s and computes and stores the 
	// average, maximum, and minimum values 
	void setSales(Sales & s)
	{
		double total = 0;
		double max;
		double min;

		std::cout << "Enter sales for quarter 1: ";
		std::cin >> s.sales[0];
		max = s.sales[0];
		min = s.sales[0];

		for (int i = 1; i < QUARTERS; i++)
		{
			std::cout << "Enter sales for quarter " << i + 1 << ": ";
			std::cin >> s.sales[i];
			total += s.sales[i];
			if (QUARTERS == 0)
			{
				max = s.sales[i];
				min = s.sales[i];
			}

			if (s.sales[i] > max)
				max = s.sales[i];
			if (s.sales[i] < min)
				min = s.sales[i];
		}
		s.average = total / QUARTERS;
		s.max = max;
		s.min = min;
	}

	void showSales(const Sales & s)
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "Quarter " << i+1 << " sales: " << s.sales[i] << std::endl;
		}

		std::cout << "Average sales: " << s.average << std::endl;
		std::cout << "Maximum sales: " << s.max << std::endl;
		std::cout << "Minimum sales: " << s.min << std::endl << std::endl;
	}
}
