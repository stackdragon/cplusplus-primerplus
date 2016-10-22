//  ex6-7.cpp Write a program that reads input a word at a time until a lone
//  q is entered. The program should then report the number of words that begin
//  with vowels, the number that began with consonants, and the number that fit
//  neither of those categories

#include <iostream>
#include <string>
#include <cctype>

int main()
{
	int vowels = 0;
	int cons = 0;
	int neither = 0;

	std::string words;
	std::string lowerWords;

	std::cout << "Enter words (q to quit): ";
	std::cin >> words;

	while (words != "q")
	{
		lowerWords[0] = std::tolower(words[0]); // convert to lowercase

		if (std::isalpha(lowerWords[0]))
		{
			if (lowerWords[0] == 'a' || lowerWords[0] == 'e' || lowerWords[0] == 'i' || lowerWords[0] == 'o' || lowerWords[0] == 'u')
				vowels++;
			else
				cons++;
		}
		else
			neither++;

		std::cin >> words;
	}

	std::cout << std::endl << vowels << " words begin with vowels.\n";
	std::cout << cons << " words begin with consonants.\n";
	std::cout << neither << " others.\n";

	std::cin.get();
}
