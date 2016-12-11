// dma.cpp --dma class methods
#include "dma.h" 
#include <string>
#include <iostream>

// WineABC methods
// constructor
WineABC::WineABC(const std::string & l, int r)
{ 
	label = l;
	rating = r; 
}

// copy constructor
WineABC::WineABC(const WineABC & rs)
{ 
	label = rs.label;
	rating = rs.rating; 
}

// destructor
WineABC::~WineABC() 
{ 
}

void WineABC::view() const
{
	std::cout << "Label: " << label << std::endl;
	std::cout << "Rating: " << rating << std::endl;
}

//overloaded assignment operator
WineABC & WineABC::operator=(const WineABC & rs) 
{ 
	if (this == &rs) 
		return *this; 
	label = rs.label;
	rating = rs.rating; 
	return *this; 
}

// colorWine methods
// constructor
colorWine::colorWine(const std::string & c, const std::string & l, int r) : WineABC(l, r) 
{ 
	color = c;
}

// derived constructor using base class constructor
colorWine::colorWine(const std::string & c, const WineABC & rs) : WineABC(rs) 
{
	color = c;
}

void colorWine::view() const
{
	WineABC::view();
	std::cout << "Color: " << color;
}

// styleWine methods
// constructor
styleWine::styleWine(const std::string & s, const std::string & l, int r) : WineABC(l, r) 
{ 
	style = s;
}

// derived constructor using base clas constructor
styleWine::styleWine(const std::string & s, const WineABC & rs) : WineABC(rs) 
{ 
	style = s;
}

// copy constructor using base class copy contructor
styleWine::styleWine(const styleWine & hs) : WineABC(hs)  
{ 
	style = hs.style;
}

// destructor
styleWine::~styleWine() 
{ 
}

void styleWine::view() const
{
	WineABC::view();
	std::cout << "Style: " << style;
}
