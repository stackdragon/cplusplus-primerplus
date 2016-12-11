// ex13-4.cpp -- Create Port and VintagePort method definitions.
// programmer's note: changed char types to std::string 

#include <iostream> 
#include <string> 
#include "port.h" 

const int numPort = 2;

int main()
{
	
	
	Port Port2;
	Port Port1("Regular Port", "Fine Style", 9);
	std::cout << "\nCreated " << Port1;
	std::cout << "\nSubtracting 10\n";
	Port1 -= 10;
	std::cout << "\nSubtracting 5\n";
	Port1 -= 5;
	std::cout << "\nShow() function for Port1: \n";
	Port1.Show();

	VintagePort VintagePort1("Fancy Port", 9, "Old Velvet", 1985);
	std::cout << "\nCreated " << VintagePort1;
	std::cout << "\nSubtracting 10\n";
	VintagePort1 -= 10;
	std::cout << "\nSubtracting 5\n";
	VintagePort1 -= 5;
	std::cout << "\nShow() function for VintagePort1: \n";
	VintagePort1.Show();

	Port2 = Port1;
	std::cout << "\nAssigning Port1 to Port2";
	std::cout << "\nShow() function for Port2: \n";
	Port2.Show();

	VintagePort VintagePort2 = VintagePort1;
	std::cout << "\nAssigning VintagePort1 to VintagePort2";
	std::cout << "\nShow() function for VintagePort2: \n";
	VintagePort2.Show();
	
	return 0;
}
