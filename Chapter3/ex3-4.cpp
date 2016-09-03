// ex3-4.cpp -- Takes a number of seconds and returns it in days, hours, mins, and secs

#include<iostream>

int main()
{
	const int minPerHour = 60;
	const int hourPerDay = 24;
	const int secPerDay = 86400;
	const int secPerHour = 3600;
	const int secPerMin = 60;
	long long inpSeconds;

	std::cout << "Enter a number of seconds: ";
	std::cin >> inpSeconds;

	int days = (((inpSeconds / secPerMin / minPerHour) / hourPerDay));
	int hours = ((inpSeconds - (days * secPerDay)) / secPerMin / minPerHour);
	int mins = ((inpSeconds - (days * secPerDay) - (hours * secPerHour)) / secPerMin);
	int seconds = ((inpSeconds - (days * secPerDay) - (hours * secPerHour) - (mins * secPerMin)));

	std::cout << inpSeconds << " seconds is equal to " << days << " days, " << hours << " hours, ";
	std::cout << mins << " minutes, and " << seconds << " seconds.";

	std::cin.get();
	std::cin.get();

	return 0;
}
