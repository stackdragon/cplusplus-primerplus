// ex10-5.cpp Write a program that adds and removes customer structures from a stack,
// represented by a Stack class declaration. Each time a customer is removed, his or her
// payment should be added to a running total, and the running total should be reported.
// Note: You should be able to use the Stack class unaltered; just change the typedef 
// declaration so that Item is type customer instead of unsigned long. 

#include <iostream>
#include <vector>
#include <string>
#include "definitions.h"

int main()
{
	Stack st; // create an empty stack 
	customer newCust; // create an empty struct
	char ch; 
	double runningTotal = 0;

	std::cout << "Please enter A to add a customer, P to process a payment or Q to quit.\n"; 
	while (std::cin >> ch && toupper(ch) != 'Q') 
	{
		while (std::cin.get() != '\n') 
			continue; 
		
		if (!isalpha(ch)) 
		{ 
			std::cout << '\a'; 
			continue; 
		} 

		switch (ch) 
		{ 
			case 'A':
			case 'a': std::cout << "Enter a customer name to add: "; 
				getline(std::cin, newCust.fullname);
				
				std::cout << "Enter the transaction amount: ";
				std::cin >> newCust.payment;
				if (st.isfull()) 
					std::cout << "stack already full\n"; 
				else st.push(newCust); 
				break; 

			case 'P': 
			case 'p': 
				if (st.isempty())
					std::cout << "stack already empty\n";
				else 
				{ 
					st.pop(newCust); 
					std::cout << "Customer " << newCust.fullname << " popped\n"; 
					runningTotal += newCust.payment;
					std::cout << "Running total is: " << runningTotal << std::endl;
				} 
				break; 
		} 
		
		std::cout << "Please enter A to add a customer, P to process a payment or Q to quit.\n"; 
	} 
	std::cout << "Bye\n"; 
	return 0;
}
