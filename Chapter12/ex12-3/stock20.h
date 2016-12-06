// stock20.h -- augmented version 
#ifndef STOCK20_H_ 
#define STOCK20_H_ 
#include <string>

class Stock 
{
private: 
	char *company;
	int shares; 
	double share_val; 
	double total_val; 
	void set_tot() { total_val = shares * share_val; } 
public: 
	Stock(const char *co, long n = 0, double pr = 0.0);
	Stock();        // default constructor 
	~Stock();       // do-nothing destructor 
	void buy(long num, double price); 
	void sell(long num, double price); 
	void update(double price); 
	void show()const; 
	const Stock & topval(const Stock & s) const; 
	friend void operator<<(std::ostream & os, const Stock & st);
};
#endif
