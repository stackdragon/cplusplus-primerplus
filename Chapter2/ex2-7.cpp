// ex2-7.cpp -- Takes two numbers and returns them in a time format (HH:MM)

#include<iostream>

void displayTime(int, int);

int main()
{
	int hours;
	int minutes;

	std::cout << "Please enter the number of hours: ";
	std::cin >> hours;
	std::cout << std::endl << "Please enter the number of minutes: ";
	std::cin >> minutes;

	displayTime(hours, minutes);

	std::cin.get();
	std::cin.get();

	return 0;
}

void displayTime(int hours, int minutes) {
	std::cout << std::endl << hours << ":" << minutes;
}

