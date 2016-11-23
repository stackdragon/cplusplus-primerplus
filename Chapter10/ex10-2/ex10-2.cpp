// ex10-2.cpp Write a program that completes the supplied implementation by providing 
// code for the undefined methods.

#include <iostream>
#include <string>
#include "definitions.h"

int main()
{ 
	Person one;		// use default constructor 
	Person two("Smythecraft");	   // use #2 with one default argument 
	Person three("Dimwiddy", "Sam");  // use #2, no defaults
	one.Show(); 
	one.FormalShow(); // etc. for two and three
	two.Show();
	two.FormalShow();
	three.Show();
	three.FormalShow();
	return 0;
}
