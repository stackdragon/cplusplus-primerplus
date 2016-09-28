//  ex4-1.cpp -- Accept char arrays with multiple words; Increment char type

#include <iostream>
#include <string>

int main()
{
	const int strLength = 20;
	char firstName[strLength];
	char lastName[strLength];
	char grade;
	int age;

	std::cout << "What is your first name? ";
	std::cin.getline(firstName, strLength);
	std::cout << "What is your last name? ";
	std::cin.getline(lastName, strLength);
	std::cout << "What is your age? ";
	std::cin >> age;
	std::cout << "What letter grade do you deserve? ";
	std::cin >> grade;
	std::cout << "Name: " << lastName << ", " << firstName << std::endl;
	std::cout << "Grade: " << static_cast<char>(grade + 1) << std::endl;
	std::cout << "Age: " << age << std::endl;

}
