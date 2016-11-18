// ex9-2.cpp  Redo Listing 9.9, replacing the character array with a string object.
// The program should no longer have to check whether the input string fits, and it can 
// compare the input string to "" to check for an empty line. 

#include <iostream>
#include <string>

// function prototype 
void strcount(const std::string str);

int main() 
{
	using namespace std; 
	std::string input;
	cout << "Enter a line:\n"; 
	std::getline(std::cin, input); 
	while (input !="") 
	{
		strcount(input); 
		cout << "Enter next line (empty line to quit):\n"; 
		std::getline(std::cin, input);
	} 
	cout << "Bye\n"; 
	return 0;
}

void strcount(const std::string str)
{
	using namespace std; 
	static int total = 0;        // static local variable 
	int count = 0;               // automatic local variable
	cout << "\"" << str << "\" contains ";
	while (count < str.length())               // go to end of string 
		count++; 
	total += count; 
	cout << count << " characters\n"; 
	cout << total << " characters total\n";
}
