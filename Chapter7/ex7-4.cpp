// ex7-4.cpp Modify Listing 7.4 to incorporate a single number (called a mega
// number) from a second rate. Return the probabilities of winning the lotto.

#include <iostream>

long double probability(unsigned stdChoices, unsigned picks, unsigned megaChoices);

int main()
{
	double stdChoices, picks, megaChoices;
	std::cout << "Enter the total number of choices from the initial set, the number \n";
	std::cout << "of picks required, and the number of mega number choices.\n";

	while ((std::cin >> stdChoices >> picks >> megaChoices) && stdChoices <= stdChoices)
	{
		std::cout << "You have one chance in ";
		std::cout << probability(stdChoices, picks, megaChoices);
		std::cout << " of winning.\nNext two numbers (q to quit): ";
	}
	std::cout << "bye\n";
	std::cin.get();
	return 0;
}

long double probability(unsigned stdChoices, unsigned picks, unsigned megaChoices)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = stdChoices, p = picks; p > 0; n--, p--)
		result = result * n / p;
	
	result = result * megaChoices;    // assume mega ball requires a single pick

	return result;
}

