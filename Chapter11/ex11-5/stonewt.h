// stonewt.h -- definition for the Stonewt class 
#ifndef STONEWT_H_ 
#define STONEWT_H_ 

class Stonewt 
{ 
private: 
	enum Mode { STONE, INTLBS, FPLBS };
	enum {Lbs_per_stn = 14};      // pounds per stone 
	int stone;                    // whole stones 
	float pds_left;				  // fractional pounds (use with Mode = STONE)
	int intPounds;				  // entire weight in int pounds
	float fltPounds;              // entire weight in float pounds
	Mode mode;
public: 
	Stonewt(float input);		   // constructor 
	Stonewt();                     // default constructor 
	~Stonewt(); 
	void mode_stone();			   // change member state to stone
	void mode_intPounds();		   // change member state to int pounds
	void mode_fltPounds();		   // change member state to float pounds
	Stonewt operator+(const Stonewt & bar) const; // overloaded addition operator
	// overloaded << opeator for cout
	friend std::ostream & operator<<(std::ostream & os, const Stonewt & foo); 
}; 
#endif
