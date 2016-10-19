//  ex6-1.cpp Write a program that reads keyboard input to the @ symbol and echoes
//  the input except for digits, converting each uppercase character to lowercase,
//  and vice-versa

#include <iostream>
#include <cctype>

int main()
{
	char ch;
	
	std::cout << "Enter a phrase: ";
	std::cin.get(ch);

	while (ch != '@') {
		if (isupper(ch))
			std::cout << char(tolower(ch));
		else if (islower(ch))
			std::cout << char(toupper(ch));
		else if (!isalnum(ch))
			std::cout << ch;
		std::cin.get(ch);
	}

	std::cin.get();
	std::cin.get();
}

