// stonewt.cpp -- Stonewt methods 
#include <iostream> 
#include "stonewt.h"
using std::cout;

Stonewt::Stonewt(int input)	// constructor
{
	// value in stones
	stone = int(input) / Lbs_per_stn;    
	pds_left = int(input) % Lbs_per_stn + input - int(input);
	// value in pounds represented as int
	intPounds = int(input);
	// value in pounds represented as float
	fltPounds = input;
}

Stonewt::Stonewt()          // default constructor, all members set to 0
{ 
	stone = intPounds = fltPounds = pds_left = 0; 
}

Stonewt::~Stonewt()         // destructor 
{ 
}

// member state functions
void Stonewt::mode_stone()
{
	mode = STONE;
}

void Stonewt::mode_intPounds()
{
	mode = INTLBS;
}

void Stonewt::mode_fltPounds()
{
	mode = FPLBS;
}

int Stonewt::returnPounds()
{
	return intPounds;
}

// overloaded addition operator
Stonewt Stonewt::operator+(const Stonewt & bar) const	
{
	Stonewt sum;
	sum.stone = stone + bar.stone; 
	sum.pds_left = pds_left + bar.pds_left;
	sum.intPounds = intPounds + bar.intPounds;	
	sum.fltPounds = fltPounds + bar.fltPounds; 
	return sum;
}

bool Stonewt::operator<(const Stonewt & st)
{
	return (intPounds < st.intPounds);
}

bool Stonewt::operator>(const Stonewt & st)
{
	return (intPounds > st.intPounds);
}

bool Stonewt::operator>=(const Stonewt & st)
{
	return (intPounds >= st.intPounds);
}

// overloaded << operator for use with cout
std::ostream & operator<<(std::ostream & os, const Stonewt & foo)
{
	if (foo.mode == foo.STONE)
		os << foo.stone << " stone, " << foo.pds_left << " pounds.";
	if (foo.mode == foo.INTLBS)
		os << foo.intPounds << " integer pounds.";
	if (foo.mode == foo.FPLBS)
		os << foo.fltPounds << " floating point pounds.";
	return os;
}
