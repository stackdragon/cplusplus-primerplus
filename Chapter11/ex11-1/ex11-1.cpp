// ex11-1.cpp Modify Listing 11.15 so that it writes the successive locations of the 
// random walker into a file. Label each position with the step number. Also have the
// program write the initial conditions (target distance and step size) and the summarized
// results to the file. Compile with vect.cpp and vect.h.

#include <iostream> 
#include <cstdlib>      // rand(), srand() prototypes 
#include <ctime>        // time() prototype 
#include "vect.h" 
#include <fstream> 

int main()
{
	std::ofstream fout;  // declare ostream object for file output
	fout.open("thewalk.txt"); // associate file output with text file
	using namespace std;
	using VECTOR::Vector; 
	srand(time(0));     // seed random-number generator 
	double direction; 
	Vector step; 
	Vector result(0.0, 0.0); 
	unsigned long steps = 0; 
	double target; 
	double dstep; 
	cout << "Enter target distance (q to quit): "; 
	while (cin >> target) 
	{ 
		fout << "Target distance: " << target << std::endl;
		cout << "Enter step length: "; 
		if (!(cin >> dstep)) 
			break;
		fout << "Step length: " << dstep << std::endl;
		while (result.magval() < target) 
		{ 
			direction = rand() % 360; 
			step.reset(dstep, direction, Vector::POL); 
			result = result + step; 
			steps++; 
			fout << "After step " << steps << ", location " << result << std::endl;
		} 
		cout << "After " << steps << " steps, the subject has the following location:\n";
		cout << result << endl; 
		result.polar_mode(); 
		cout << " or\n" << result << endl; 
		cout << "Average outward distance per step = " 
			<< result.magval() / steps << endl; 
		steps = 0; 
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	} 
	cout << "Bye!\n"; cin.clear(); 
	while (cin.get() != '\n') 
		continue; 
	return 0;
}
