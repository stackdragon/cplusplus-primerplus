// ex2-3.cpp -- Uses three user-defined functions to print a nursery rhyme

#include<iostream>

void threeblind(void);
void seehow(void);

int main()
{
	threeblind();
	threeblind();
	seehow();
	seehow();

	std::cin.get();
	std::cin.get();

	return 0;
}

void threeblind(void) {
	std::cout << "Three blind mice." << std::endl;
}

void seehow(void) {
	std::cout << "See how they run." << std::endl;
}
