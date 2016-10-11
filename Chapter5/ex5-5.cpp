//  ex5-5.cpp Use an array to store a year's worth of book sales then report total
//  sales for the year

#include <iostream>
#include <array>
#include <string>

int main()
{
	std::array <std::string, 12> monthNames = { "January", "February", "March", "April", "May",
		"June", "July", "August", "September", "October", "November", "December" };
    
	std::array <int, 12> monthSales;
	int totalSales = 0;

	for (int i = 0; i < 12; i++) {
		std::cout << "Enter " << monthNames[i] << "'s sales (in units): ";
		std::cin >> monthSales[i];
	}

	for (int i = 0; i < 12; i++) {
		totalSales += monthSales[i];
	}

	std::cout << std::endl << "Total sales for the year is " << totalSales << " units.";

	std::cin.get();
	std::cin.get();
}

