#pragma once
#include "cd.h"

// Classic derives from the Cd base class

class Classic : public Cd
{  
private:
	char title[100];
public:
	Classic(char * s1, char * s2, char * s3, int n, double x); // explicit constructor
	Classic(); // default constructor
	virtual void Report() const;  // reports all Classic data
	~Classic();
}; 
