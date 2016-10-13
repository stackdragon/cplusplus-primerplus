//  ex5-10.cpp Takes the number of rows desired and displays that many rows of
//  asterisks, with one asterisk in the first, two in the second, etc. For each
//  row, the asterisks are precedeed by the number of periods needed to make all
//  the rows display a total number of characters equal to the numbers of the rows.

#include <iostream>

int main()
{
	int noOfRows = 0;
	std::cout << "Enter number of rows: ";
	std::cin >> noOfRows;

	for (int row = 1; row <= noOfRows; row++) {
		for (int column = 1; column <= noOfRows - row; column++) {
			std::cout << ".";
		}
		for (int ast = 1; ast <= row; ast++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	std::cin.get();
}
