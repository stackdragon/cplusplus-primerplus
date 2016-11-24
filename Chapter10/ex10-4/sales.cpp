//compile with ex10-4.cpp and namespace.h

#include <iostream>
#include "namespace.h"

namespace SALES {

	// gathers sales for 4 quarters interactively, stores them 
	// in the sales member of s and computes and stores the 
	// average, maximum, and minimum values 
	Sales::Sales()
	{
		m_total = 0;

		std::cout << "Enter sales for quarter 1: ";
		std::cin >> m_sales[0];
		m_max = m_sales[0];
		m_min = m_sales[0];
		m_total += m_sales[0];

		for (int i = 1; i < QUARTERS; i++)
		{
			std::cout << "Enter sales for quarter " << i + 1 << ": ";
			std::cin >> m_sales[i];
			m_total += m_sales[i];
			if (QUARTERS == 0)
			{
				m_max = m_sales[i];
				m_min = m_sales[i];
			}

			if (m_sales[i] > m_max)
				m_max = m_sales[i];
			if (m_sales[i] < m_min)
				m_min = m_sales[i];
		}
		m_average = m_total / QUARTERS;
		m_max =m_max;
		m_min = m_min;
	}

	void Sales::showSales()
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "Quarter " << i+1 << " sales: " << m_sales[i] << std::endl;
		}

		std::cout << "Average sales: " << m_average << std::endl;
		std::cout << "Maximum sales: " << m_max << std::endl;
		std::cout << "Minimum sales: " << m_min << std::endl << std::endl;
	}
}
