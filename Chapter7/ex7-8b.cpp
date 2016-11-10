// ex7-8b.cpp Redo Listing 7.15 without using the array class. Do two versions: a. Use an ordinary
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

// struct definition
struct sa
{
	double expenses[Seasons];
};

// function to modify struct
void fill(sa *pa);

// function that uses struct without modifying it 
void show(const sa *da);

int main()
{
	sa foo;

	fill(&foo);
	show(&foo);
	return 0;
}

void fill(sa *pa)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> (*pa).expenses[i];
	}
}

void show(const sa *da)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << (*da).expenses[i] << endl; total += (*da).expenses[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
