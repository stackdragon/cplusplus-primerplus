//  ex5-4.cpp Calculate values of $100 invested for both simple interest (10% per year) and
//  compound interest (5% per year). Determine how many years it takes for the 5% compound
//  interest investment to exceed the 10% simple interst investment. Display the value of
//  both investments at that time.

#include <iostream>

int main()
{
	const int simpInit = 100;
	const int compInit = 100;
	float simpVal = simpInit;
	float compVal = compInit;
	const float simpRate = .10;
	const float compRate = .05;
	int year = 0;

	while (simpVal >= compVal) {
		simpVal += (simpInit * simpRate);
		compVal *= (1 + compRate);
		year++;
	}
  
	std::cout << "In year " << year << " the value of Cleo's investment ($" << compVal << ")";
	std::cout << " will exceed the value of Daphne's investment ($" << simpVal << ").";

	std::cin.get();
	std::cin.get();
}

