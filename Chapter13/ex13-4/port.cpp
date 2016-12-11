// port.cpp

#include <iostream>
#include <string>
#include "port.h"

Port::Port(const std::string & br, const std::string & st, int b)
{
	brand = br;
	style = st;
	bottles = b;
}

Port::Port(const Port & p)
{
	brand = p.brand;
	style = p.style;
	bottles = p.bottles;
}

Port::~Port()
{
}

Port & Port::operator=(const Port & p)
{
	if (this == &p) 
		return *this; 
	brand = p.brand;
	style = p.style;
	bottles = p.bottles;
	return *this;
}

Port & Port::operator+=(int b)
{
	bottles += b;
	return *this;
}

Port & Port::operator-=(int b)
{
	if (bottles < b)
		std::cout << "Cannot subtract more than quantity available.";
	else
		bottles -= b;
	return *this;
}

void Port::Show() const
{
	std::cout << "Brand: " << brand << std::endl;
	std::cout << "Kind: " << style << std::endl;
	std::cout << "Bottles: " << bottles << std::endl;
}

std::ostream & operator<<(std::ostream & os, const Port & p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}

std::ostream & operator<<(std::ostream & os, const VintagePort & vp)
{
	os << (const Port&)vp;
	os << ", " << vp.nickname << ", " << vp.year;
	return os;
} 

VintagePort::VintagePort() : Port("Null Port", "Vintage")
{
	nickname = "Null Nickname";
	year = 9999;
}

VintagePort::VintagePort(const std::string & br, int b, const std::string & nn, int y) : Port(br, "Vintage", b)
{
	nickname = nn;
	year = y;
}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp)
{
	nickname = vp.nickname;
	year = vp.year;
}

VintagePort::~VintagePort()
{
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if (this == &vp)
		return *this;
	nickname = vp.nickname;
	year = vp.year;
	return *this;
}

void VintagePort::Show() const
{
	Port::Show();
	std::cout << "Nickname: " << nickname;
	std::cout << std::endl << "Year: " << year;
}
