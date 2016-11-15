// ex8-3.cpp Write a function that takes a reference to a string object as its parameter and that 
// converts the contents of the string to uppercase. Use the toupper() function described in Table 6.4 
// of Chapter 6. Write a program that uses a loop which allows you to test the function with different 
// input.

#include <iostream> 
#include <string>

void convert (std::string &input);

int main()
{
	std::string input;
	std::cout << "Enter a string (q to quit) ";
	std::getline(std::cin, input);
	while (input != "q")
	{
		convert(input);
		std::cout << input;
		std::cout << "\n\nEnter a string (q to quit) ";
		std::getline(std::cin, input);
	}
	return 0;
}

void convert(std::string &input)
{
	for (int i = 0; i < size(input); i++)
	{
		input[i] = toupper(input[i]);
	}
}
