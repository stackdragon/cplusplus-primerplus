// ex12-4.cpp  Modify the class methods in 10.10 to use dynamic allocation of strings

#include <iostream>
#include <cctype>  // or ctype.h 
#include "stack.h"

int main() 
{ 
	using namespace std; 
	Stack st; // create an empty stack 
	char ch; 
	unsigned long po; 
	cout << "\nPlease enter A to add a purchase order, "
		<< "P to process a PO, or Q to quit.\n"; 
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n') 
			continue; 
		if (!isalpha(ch)) 
		{ 
			cout << '\a'; 
			continue; 
		} 
		switch (ch)
		{ 
			case 'A': 
			case 'a': cout << "Enter a PO number to add: "; 
				cin >> po; 
				if (st.isfull()) 
					cout << "stack already full\n"; 
				else 
					st.push(po); 
				break; 
			case 'P': 
			case 'p': 
				if (st.isempty()) 
					cout << "stack already empty\n";
				else 
				{ 
					st.pop(po); 
					cout << "PO #" << po << " popped\n"; 
				} 
				break; 
		} 
		cout << "Please enter A to add a purchase order,\n" 
			<< "P to process a PO, or Q to quit.\n";
	} 
	std::cout << std::endl;
	Stack st1 = st;			// call copy constructor
	st = st1;				// call overloaded assignment operator

	cout << "\nBye\n"; 
	std::cin.get();
	return 0;

}
