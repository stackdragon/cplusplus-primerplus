// port.h

class Port 
{ 
private: 
	std::string brand;
	std::string style; // i.e., tawny, ruby, vintage 
	int bottles; 
public: 
	Port(const std::string & br = "none", const std::string & st = "none", int b = 0); 
	Port(const Port & p);                // copy constructor 
	virtual ~Port();	
	Port & operator=(const Port & p); 
	Port & operator+=(int b);			 // adds b to bottles 
	Port & operator-=(int b);            // subtracts b from bottles, if available 
	int BottleCount() const { return bottles; } 
	virtual void Show() const; 
	friend std::ostream & operator<<(std::ostream & os, const Port & p); 
};

class VintagePort : public Port // style necessarily = "vintage" 
{ 
private: 
	std::string nickname;      // i.e., "The Noble" or "Old Velvet", etc. 
	int year;                  // vintage year 
public: 
	VintagePort(); 
	VintagePort(const std::string & br, int b, const std::string & nn, int y); 
	VintagePort(const VintagePort & vp);
	~VintagePort(); 
	VintagePort & operator=(const VintagePort & vp);
	void Show() const; 
	friend std::ostream & operator<<(std::ostream & os, const VintagePort & vp);
};
