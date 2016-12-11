// ex13-3.cpp -- Revise the baseDMA-lacksDMA-hasDMA class hierarchy so that all three 
// classes are derived from an ABC. Test the result with a program similar to the one 
// in Listing 13.10. That is, it should feature an array of pointers to the ABC and allow 
// the user to make runtime decisions as to what types of objects are created. Add virtual 
// View() methods to the class definitions to handle displaying the data.

#include <iostream> 
#include <string> 
#include "dma.h" 

const int numWines = 4;

int main()
{
	WineABC *pwines[numWines]; // create array of pointers to ABC
	std::string tempName;
	std::string tempStyle;
	std::string tempColor;
	int tempRating;
	int selection;

	for (int i = 0; i < numWines; i++)
	{
		std::cout << "Enter name for wine " << i+1 << ": ";
		getline(std::cin, tempName);
		std::cout << "Enter the rating for wine " << i+1 << ": ";
		std::cin >> tempRating;
		std::cout << "Enter 1 for Style or 2 for Color: ";
		while (std::cin >> selection && (selection != 1 && selection != 2))
		{
			std::cout << "Please enter a valid option." << std::endl;
			std::cout << "Enter 1 for Style or 2 for Color: ";
		}
		std::cin.get(); // to capture the newline char
		if (selection == 1)
		{
			std::cout << "Enter the style of the wine: ";
			getline(std::cin, tempStyle);
			pwines[i] = new styleWine(tempStyle, tempName, tempRating);
		}
		else
		{
			std::cout << "Enter the color of the wine: ";
			getline(std::cin, tempColor);
			pwines[i] = new colorWine(tempColor, tempName, tempRating);
		}
	}

	std::cout << "\n *** Displaying wine list *** \n\n";
	for (int i = 0; i < numWines; i++)
	{
		std::cout << "Wine #" << i+1 << "\n";
		pwines[i]->view();
		std::cout << std::endl;
	}
	for (int i = 0; i < numWines; i++)
		delete pwines[i];
	return 0;
}
