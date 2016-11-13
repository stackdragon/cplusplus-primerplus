// ex7-10.cpp Design a function calculate() that takes two type double values and a pointer to a function
// that takes two double arguments and returns a double. The calculate() function should also be type 
// double, and it should return the value that the pointed - to function calculates, using the 
// double arguments to calculate()

#include <iostream> 

double calculate(double num1, double num2, double(*pf)(double, double));
double add(double x, double y);
double multiply(double x, double y);

int main()
{
	int num1 = 0;
	int num2 = 0;

	std::cout << "Enter pair of numbers (or a letter to quit): ";
	while (std::cin >> num1 >> num2)
	{
		std::cout << "The sum of " << num1 << " and " << num2 << " is " <<
			calculate(num1, num2, add) << std::endl;
		std::cout << "The product of " << num1 << " and " << num2 << " is " <<
			calculate(num1, num2, multiply) << std::endl << std::endl;
		std::cout << "Enter pair of numbers (or a letter to quit): ";
	}
	return 0;
}

double calculate(double num1, double num2, double(*pf)(double, double))
{
	return (*pf)(num1, num2);
}

double add(double x, double y)
{
	return x + y;
}

double multiply(double x, double y)
{
	return x * y;
}

     
