//  ex5-6.cpp Use an array to store three year's worth of book sales in a 2d array then report 
//  sales for each year and in total

#include <iostream>
#include <array>
#include <string>

int main()
{
	const int maxYears = 3;
	const int months = 12;
	std::array <std::string, months> monthNames = { "January", "February", "March", "April", "May",
		"June", "July", "August", "September", "October", "November", "December" };
	int monthSales[maxYears][months];
	int annualSales[maxYears] = { 0, 0, 0 };
	int totalSales = 0;

// take input

	for (int i = 0; i < maxYears; i++)		
	{
		std::cout << std::endl << "Year " << i+1 << std::endl;
		for (int j = 0; j < 12; j++)
		{
			std::cout << "Enter " << monthNames[j] << "'s sales (in units): ";
			std::cin >> monthSales[i][j];
		}
	}

// sum sales (per year and in total)

	for (int i = 0; i < 3; i++)	
	{
		for (int j = 0; j < 12; j++)
		{
			totalSales += monthSales[i][j];
			annualSales[i] += monthSales[i][j];
		}
	}

// report totals to user

	for (int i = 0; i < 3; i++) 
		std::cout << std::endl << "\nTotal sales for year " << i + 1 << " is " << annualSales[i] << " units.";
	
	std::cout << "\nTotal sales for the three year period is " << totalSales << " units.";

	std::cin.get();
	std::cin.get();
}

