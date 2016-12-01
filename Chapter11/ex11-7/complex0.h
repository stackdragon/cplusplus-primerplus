// complex0.h definition for the complex class
#ifndef COMPLEX0_H_
#define COMPLEX0_H_

class Complex
{ 
private: 
	float real;
	float imag;

public: 
	// constructors and destructors
	Complex(float x1 = 0, float x2 = 0);		   						   
	~Complex();		
	
	// overloaded operators
	Complex operator~() const;
	Complex operator+(const Complex & foo) const;
	Complex operator-(const Complex & foo) const;
	Complex operator*(const Complex & foo) const;

	// friend operators
	friend Complex operator*(int m, const Complex & foo);
	friend std::ostream & operator<<(std::ostream & os, const Complex & foo); 
	friend std::istream & operator>>(std::istream & os, Complex & foo);
	
}; 
#endif
