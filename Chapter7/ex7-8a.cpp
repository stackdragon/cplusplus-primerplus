// ex7-8.cpp Redo Listing 7.15 without using the array class. Do two versions: a. Use an ordinary
// array of const char * for the strings representing the season names, and use an ordinary array
// of double for the expenses. b. Use an ordinary array of const char * for the strings represented
// by the season names, and use a structure whose sole member is an ordinary array of double for the
// expenses. (This design is simliar to the basic design of the array class). 

#include <iostream> 
#include <array> 
#include <string> 

// constant data

const int Seasons = 4;
const char *Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" };

// function to modify array object 
void fill(double pa[Seasons]);

// function that uses array object without modifying it 
void show(const double da[Seasons]);

int main()
{
	double expenses[Seasons];
	fill(expenses);
	show(expenses);
	return 0;
}

void fill(double pa[Seasons])
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> pa[i];
	}
}

void show(const double da[Seasons])
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << da[i] << endl; total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
