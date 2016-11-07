// ex7-6.cpp Write a program that uses the following functions : Fill_array()
// which takes as arguments the name of an array of double values and an array 
// size. It prompts the user to enter double values to be entered in the array.
// It ceases taking input when the array is full or when the user enters non -
// numeric input, and it returns the actual number of entries. Show_array() takes
// as arguments the name of an array of double values and an array size and
// displays the contents of the array. Reverse_array() takes as arguments the
// name of an array of double values and an array size and reverses the order
// of the values stored in the array. The program should use these functions to
// fill an array, show the array, reverse the array, show the array, reverse all but 
// the first and last elements of the array, and then show the array.

#include <iostream>

const int maxSize = 10;

int fill_array(double values[], int maxSize);
void show_array(double values[], int size);
void reverse_array(double values[], int size);

int main()
{
	double values[maxSize];
	std::cout << "**Fill Array**";
	int size = fill_array(values, maxSize);
	std::cout << std::endl << "**Show Array**";
	show_array(values, size);
	std::cout << std::endl << std::endl << "** Reverse Array**";
	reverse_array(values, size);
	show_array(values, size);
	std::cout << std::endl << std::endl << "**Reverse Array Except First and Last Element**";
	reverse_array(values + 1, size - 2);
	show_array(values, size);
	std::cout << std::endl;
	std::cin.get();
}

int fill_array(double values[], int maxSize)
{
	std::cout << "\nEnter a series of numbers. Non-numeric characters stops input.\n";
	int i = 0;
	for (i = 0; i < maxSize; i++)
	{
		std::cout << "Enter number #" << i + 1 << ": ";
		std::cin >> values[i];
		if (!std::cin)	// if input is bad
		{
			std::cin.clear();	// clear error flag for future erros
			std::cout << "Ending input.\n";
			break;
		}
	}
	return i;		// return the size of the array
}

void show_array(double values[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "\nNumber " << i+1 << ":" << values[i];
	}
}

void reverse_array(double values[], int size)
{
	double newValues[maxSize]; // temporary storage for reversed array

	for (int i = 0; i < size; i++)
		newValues[size - (i+1)] = values[i];

	for (int i = 0; i < size; i++)	// copy newArray to values[]
		values[i] = newValues[i];
}
