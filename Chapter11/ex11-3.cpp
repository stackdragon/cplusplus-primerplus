// ex11-3.cpp Modify Listing 11.15 so that instead of reporting the results of a single 
// trial for a particular target/step combination, it reports the highest, lowest, and 
// average number of steps for N trials, where N is an integer entered by the user. 

#include <iostream> 
#include <cstdlib>      // rand(), srand() prototypes 
#include <ctime>        // time() prototype 
#include "vect.h" 

int main()
{
	using namespace std;
	using VECTOR::Vector; 
	srand(time(0));     // seed random-number generator 
	double direction; 
	Vector step; 
	Vector result(0.0, 0.0); 
	unsigned long steps = 0; 
	double target; 
	double dstep; 
	int trials;
	cout << "Enter the number of trials: ";
	cin >> trials;
	cin.get();
	cout << "Enter target distance (q to quit): "; 
	cin >> target;
	cin.get();
	cout << "Enter step length: ";
	cin >> dstep;
	cin.get();
	for (int i = 0; i < trials; i++)
	{
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		cout << "*****\n";
		cout << "Trial " << i + 1 << ": After " << steps << " steps, the subject has the following location:\n";
		cout << result << endl;
		result.polar_mode();
		cout << " or\n" << result << endl;
		cout << "Average outward distance per step = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << endl;
	}
	return 0;
}
