#pragma once

// base class 
class Cd
{  
	// represents a CD disk 
private: 
	char * performers;
	char * label; 
	int selections;   // number of selections 
	double playtime;  // playing time in minutes 
public: 
	Cd(char * s1, char * s2, int n, double x); // explicit constructor
	Cd(const Cd & d); // copy constructor
	Cd(); // default constructor
	virtual ~Cd(); // destructor
	virtual void Report() const;  // reports all CD data 
	Cd & operator=(const Cd & d); // overloaded assignment operator
};
