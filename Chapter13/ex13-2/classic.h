#pragma once
#include "cd.h"

// Classic derives from the Cd base class

class Classic : public Cd
{  
private:
	char * title;
public:
	Classic(char * s1, char * s2, char * s3, int n, double x); // explicit constructor
	Classic(); // default constructor
	Classic(const Classic & d); // copy constructor
	virtual void Report() const;  // reports all Classic data
	Classic & operator=(const Classic & d); // overloaded assignment operator
	~Classic();
}; 
