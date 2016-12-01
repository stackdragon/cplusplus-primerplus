// complex0.cpp -- Complex methods 
#include <iostream> 
#include "complex0.h"

// constructors and destructors
Complex::Complex(float x1, float x2)	
{
	real = x1;
	imag = x2;
}

Complex::~Complex()
{
}

Complex Complex::operator~() const
{
	Complex conjugate;
	conjugate.real = real;
	conjugate.imag = -imag;
	return conjugate;
}

Complex Complex::operator+(const Complex & foo) const
{
	Complex sum;
	sum.real = real + foo.real;
	sum.imag = imag + foo.imag;
	return sum;
}

Complex Complex::operator-(const Complex & foo) const
{
	Complex difference;
	difference.real = real - foo.real;
	difference.imag = imag - foo.imag;
	return difference;
}

Complex Complex::operator*(const Complex & foo) const
{
	Complex product;
	product.real = (real * foo.real) - (imag * foo.imag);
	product.imag = (real * foo.imag) + (imag * foo.real);
	return product;
}

Complex operator*(int m, const Complex & foo)
{
	Complex product;
	product.real = m * foo.real;
	product.imag = m * foo.imag;
	return product;
}

// overloaded operators
std::ostream & operator<<(std::ostream & os, const Complex & foo)
{
	os << "(" << foo.real << "," << foo.imag << "i)";
	return os;
}

std::istream & operator>>(std::istream & is, Complex & foo)
{
	std::cout << "real: ";
	is >> foo.real;
	if (is)
	{
		std::cout << "imaginary: ";
		is >> foo.imag;
	}
	return is;
}
