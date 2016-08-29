// ex3-4.cpp -- Takes a Celsius temperature value and returns a Farenheit value

#include<iostream>

int calcFaren(int);

int main()
{
	
	int celsiusVal;

	std::cout << "Please enter a temperature in Celsius: ";
	std::cin >> celsiusVal;

	int farenValue = calcFaren(celsiusVal);

	std::cout << std::endl << celsiusVal << " degrees Celsius is equivalent to " << farenValue << " degrees Farenheit.";

	std::cin.get();
	std::cin.get();

	return 0;
}

int calcFaren(int celsiusValue) {

	return celsiusValue * 1.8 + 32;
}

