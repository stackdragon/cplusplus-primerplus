// ex10-1.cpp Provide method definitions for the class described in Chapter Review 
// Question 5 and write a short program that illustrates all the features. 

#include <iostream>
#include <string>
#include "definitions.h"

int main()
{ 
	BankAccount myAccount { "Acme Co", "12345", 10000.00 };

	int option = 0;
	std::cout << "1. Deposit funds\n2. Withdraw funds\n3. Display balance\n\n";
	std::cout << "Select an option (q to quit): ";
	std::cin >> option;
	while (std::cin)
	{
		double amount = 0;
		if (option == 1)
		{
			std::cout << "Enter amount to deposit: ";
			std::cin >> amount;
			myAccount.deposit(amount);
		}
		else if (option == 2)
		{
			std::cout << "Enter amount to withdraw: ";
			std::cin >> amount;
			myAccount.withdraw(amount);
		}
		else if (option == 3)
			myAccount.display();
		else
			std::cout << "Invalid input, try again. \n";
		std::cout << "Select an option (q to quit): ";
		std::cin >> option;
	}
	return 0;
}
