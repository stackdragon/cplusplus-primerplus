//  ex4-2.cpp -- Accept strings with multiple words; Increment char type

#include <iostream>
#include <string>

int main()
{
	std::string firstName;
	std::string lastName;
	char grade;
	int age;

	std::cout << "What is your first name? ";
	std::getline(std::cin, firstName);
	std::cout << "What is your last name? ";
	std::getline(std::cin, lastName);
	std::cout << "What is your age? ";
	std::cin >> age;
	std::cout << "What letter grade do you deserve? ";
	std::cin >> grade;
	std::cout << "Name: " << lastName << ", " << firstName << std::endl;
	std::cout << "Grade: " << static_cast<char>(grade + 1) << std::endl;
	std::cout << "Age: " << age << std::endl;

}
