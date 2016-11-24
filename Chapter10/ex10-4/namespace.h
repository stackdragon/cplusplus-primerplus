// compile with ex10-4.cpp and sales.cpp
#pragma once

namespace SALES
{
	const int QUARTERS = 4;

	class Sales {
	private:
		double m_sales[QUARTERS];
		double m_average;
		double m_max;
		double m_min;
		double m_total;
	public:
		// gathers sales for 4 quarters interactively, stores them 
		// in the sales member of the object and computes and stores the 
		// average, maximum, and minimum values 
		Sales();

		// display all information in the object
		void showSales();
	};
}	
