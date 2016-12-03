// cow.h  definition for the cow class
#ifndef COW_H_
#define COW_H_

class Cow {
	char name[20]; 
	char * hobby; 
	double weight; 
	static int num_cows;
public: 
	Cow(); 
	Cow(const char * nm, const char * ho, double wt); 
	Cow(const Cow &c);
	~Cow(); 
	Cow & operator=(const Cow & c); 
	void ShowCow() const;  // display all cow data
};

#endif
