// ex3-4.cpp -- Takes a number of seconds and returns it in days, hours, mins, and secs

#include<iostream>

int main()
{
	const int secPerMin = 60;
	const int secPerHour = 60 * 60;
	const int secPerDay = 60 * 60 * 24;
	long long inpSeconds;

	std::cout << "Enter a number of seconds: ";
	std::cin >> inpSeconds;

	int days = inpSeconds / secPerDay;
	int hours = (inpSeconds % secPerDay) / secPerHour;
	int mins = (inpSeconds % secPerHour) / secPerMin;
	int secs = (inpSeconds % secPerMin);


	std::cout << inpSeconds << " seconds is equal to " << days << " days, " << hours << " hours, ";
	std::cout << mins << " minutes, and " << secs<< " seconds.";

	std::cin.get();
	std::cin.get();

	return 0;
}
