//  ex4-10.cpp -- Read three times into an array object then display the times and the average

#include <iostream>
#include <array>
#include <string>

int main()
{

	std::array<float, 3> times;

	std::cout << "Enter the first time in seconds: ";
	std::cin >> times[0];
	std::cout << "Enter the second time in seconds: ";
	std::cin >> times[1];
	std::cout << "Enter the third time in seconds: ";
	std::cin >> times[2];

	float average = (times[0] + times[1] + times[2]) / 3;
	std::cout << std::endl << "The first time is: " << times[0] << " seconds." << std::endl;
	std::cout << "The second time is: " << times[1] << " seconds." << std::endl;
	std::cout << "The third time is: " << times[2] << " seconds." << std::endl;
	std::cout << std::endl << "The average time is " << average << " seconds." << std::endl;

	std::cin.get();
	std::cin.get();

}
