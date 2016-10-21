//  ex6-5.cpp Write a program that uses a loop to solicit incomes and to
//  report taxes owed based on provided rates. The loop should terminate when
//  the user enters a negative number or non-numeric input.

#include <iostream>
#include <string>
#include <cctype>

int main()
{
	const int bracket1 = 5000;
	const int bracket2 = 10000;
	const int bracket3 = 20000;
	const int bracket4 = 35000;
	const float rate1 = .10;
	const float rate2 = .15;
	const float rate3 = .20;
	int income;
	int tax = 0;

	std::cout << "Enter your income: ";
	std::cin >> income;

	while (income >= 0 && !(std::cin.fail())) 
	{
		if (income > bracket4)
		{
			tax += (income - bracket4) * rate3;
			tax += (bracket3 * rate2) + (bracket2 * rate1);
		}
		else if (income > bracket2)
		{
			tax += (income - bracket2) * rate2;
			tax += (bracket2 - bracket1) * rate1;
		}
		else if (income > bracket1)
			tax += (income - bracket1) * rate1;

		if (income >=0 )
			std::cout << "\nYour tax is: " << tax << ".\n\n";
		tax = 0;

		std::cout << "Enter your income: ";
		std::cin >> income;
	}
}
