// ex7-7.cpp Redo Listing 7.7, modifying the three array - handling functions to
// each use two pointer parameters to represent a range. The fill_array() function,
// instead of returning the actual number of items read, should return a pointer
// to the location after the last location filled; the other functions can use this
// pointer as the second argument to identify the end of the data.

#include <iostream>

const int Max = 5;

double *fill_array(double *ar, int limit); 
void show_array(const double *ar, double *end);
void revalue(double r, double *ar, double *end);

int main() 
{
	using namespace std;
	double properties[Max];
	double *end = fill_array(properties, Max); 
	show_array(properties, end); 
	if (end > 0) {
		cout << "Enter revaluation factor: "; 
		double factor; 
		while (!(cin >> factor))    // bad input 
		{ 
			cin.clear(); 
			while (cin.get() != '\n') 
				continue; 
			cout << "Bad input; Please enter a number: "; 
		}
	revalue(factor, properties, end); 
	show_array(properties, end); 
	} 
	cout << "Done.\n"; 
	cin.get(); 
	cin.get(); 
	return 0;
}

double *fill_array(double *ar, int limit) 
{
	using namespace std; 
	double temp; 
	int i; 
	for (i = 0; i < limit; i++) 
	{
		cout << "Enter value #" << (i + 1) << ": "; 
		cin >> temp; 
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		*(ar + i) = temp;
	} 
	return (ar + i);
}

void show_array(const double *ar, double *end) 
{ 
	using namespace std; 
	const double *temp = ar;
	for (int i = 0; temp < end; i++, temp++) 
	{ 
		cout << "Property #" << (i + 1) << ": $"; 
		cout << *temp << endl; 
	} 
}

void revalue(double r, double *ar, double *end) 
{ 
	double *temp = ar;
	for (int i = 0; temp < end; i++, temp++)
		*temp *= r;
}

