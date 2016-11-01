// ex7-3.cpp a) Write a function that passes a "box" structure by value and that
// displays the value of each member. b) Write a function that passes the address
// of a box structure and that sets the volume member to the product of the other
// two dimensions. c) Write a simple program that uses these two functions.

#include <iostream>
#include <string>

struct box
{
	std::string maker;
	float height;
	float width;
	float length;
	float volume;
};

void displayBox(box cardboard);
void displayBoxAddress(box *cardboard);

int main()
{
	int selection = 0;
	box cardboard{"Box Co.", 10, 10, 10, 10 };

	std::cout << "Cube-o-matic: \n1. Display dimensions \n2. Calculate volume";
	std::cout << "\n\nSelect an option: ";

	while (std::cin >> selection) {
		if (selection == 1)
			displayBox(cardboard);
		else if (selection == 2)
		{
			displayBoxAddress(&cardboard);
			std::cout << "Done! \n";
		}
		else
			break;
		std::cout << "Select an option: ";
	}
}

void displayBox(box cardboard)
{
	std::cout << "\nHeight: " << cardboard.height << "\nWidth: " << cardboard.width;
	std::cout << "\nLength: " << cardboard.length << "\nVolume: " << cardboard.volume;
	std::cout << "\nMaker: " << cardboard.maker << std::endl << std::endl;
}

void displayBoxAddress(box *cardboard)
{
	cardboard->volume = (cardboard->height * cardboard->width * cardboard->length);
}
