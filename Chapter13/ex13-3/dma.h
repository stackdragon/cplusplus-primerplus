// dma.h  -- inheritance and dynamic memory allocation 

#ifndef DMA_H_ 
#define DMA_H_ 

#include <iostream>

// Abstract base class
class WineABC
{
private:
	std::string label;
	int rating;
public:
	WineABC(const std::string & l = "null", int r = 0);
	WineABC(const WineABC & rs);
	WineABC & operator=(const WineABC & rs);
	virtual void view() const; 
	virtual ~WineABC() = 0; // pure virtual function, so class is ABC
};

// derived class with Color
class colorWine : public WineABC
{ 
private: 
	std::string color;
public: 
	colorWine(const std::string & c = "blank", const std::string & l = "null", int r = 0); 
	colorWine(const std::string & c, const WineABC & rs); 
	virtual void view() const;
};

// derived class with Style
class styleWine : public WineABC
{
private: 
	std::string style;
public: 
	styleWine(const std::string & s = "none", const std::string & l = "null", int r = 0); 
	styleWine(const std::string & s, const WineABC & rs); 
	styleWine(const styleWine& hs); 
	~styleWine(); 
	styleWine & operator=(const styleWine & rs); 
	virtual void view() const;
};
#endif
