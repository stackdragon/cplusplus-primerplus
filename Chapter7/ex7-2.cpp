// ex7-2.cpp Write a program that asks the user to enter up to 10 golf scores,
// which are to be stored in an array. You should provide a means for the user
// to terminate input prior to entering 10 scores. The program should
// display all the scores on one line and report the average score. Handle input, 
// display, and the average calculation with three separate array - processing
// functions.

#include <iostream>

const int maxSize = 10;
int fillArray(int scores[], int maxSize);
void showArray(const int scores[], int size);
float showAverage(const int scores[], int size);

int main()
{
	int scores[maxSize];
	int size = fillArray(scores, maxSize);		
	showArray(scores, size);
	std::cin.get();
}

// get input from user
int fillArray(int scores[], int maxSize)		
{
	std::cout << "Enter your golf scores. Enter a letter to stop input.\n";
	int i = 0;
	for (i = 0; i < maxSize; i++)
	{
		std::cout << "Enter score #" << i + 1 << ": ";
		std::cin >> scores[i];
		if (!std::cin)	// if input is bad
		{
			std::cin.clear();	// clear error flag for future erros
			std::cout << "Ending input.\n";
			break;
		}
	}
	return i;		// return the number of scores input
}

// display
void showArray(const int scores[], int size)
{
	std::cout << "\nScores: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << scores[i];
		if (i < size-1)
			std::cout << ", ";
		else
			std::cout << ".\n";		// end with period if last score in array
	}
	std::cout << "Average score: " << showAverage(scores, size) << std::endl;
}

// calculate and return average score
float showAverage(const int scores[], int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
		total += scores[i];
	return total / size;	// returns the average score
}
