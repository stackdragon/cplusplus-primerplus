// ex11-2.cpp Modify the Vector class header and implementation files (Listings 11.13 
// and 11.14) so that the magnitude and angle are no longer stored as data components.
// Instead, they should be calculated on demand when the magval() and angval() methods 
// are called. You should leave the public interface unchanged (the same public methods 
// with the same arguments) but alter the private section, including some of the private 
// method and the method implementations. Test the modified version with Listing 11.15,
// which should be left unchanged because the public interface of the Vector class is 
// unchanged. 

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
