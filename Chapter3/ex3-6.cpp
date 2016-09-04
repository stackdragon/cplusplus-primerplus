//  ex3-6.cpp -- Takes gallons of gas used and miles driven and returns mpg

#include<iostream>

int main()
{
	int milesDriven;
	int gasUsed;
	
	std::cout << "Number of miles driven: ";
	std::cin >> milesDriven;
	std::cout << "Gallons of gas used: ";
	std::cin >> gasUsed;

	float mpg = static_cast<float>(milesDriven) / static_cast<float>(gasUsed);

	std::cout << "Your car has achieved " << mpg << " miles per gallon.";

	std::cin.get();
	std::cin.get();

	return 0;
}
