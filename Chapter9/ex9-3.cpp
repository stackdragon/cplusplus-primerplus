// ex9-3.cpp   Write a program that uses placement new to place an array of two 
// structures in a buffer. Then assign values to the structure members (remembering 
// to use strcpy() for the char array) and use a loop to display the contents. Option 1
// is to use a static array, like that in Listing 9.10, for the buffer. Option 2 is to
// use regular new to allocate the buffer.

#include <iostream>
#include <string>
#include <new>

struct chaff 
{ 
	char dross[20]; 
	int slag; };
  
chaff buffer[sizeof(chaff) * 2]; // set buffer which is the size of two structs of chaff

int main()
{
	chaff * input = new (buffer) chaff[2];

	for (int i = 0; i < 2; i++)
	{
		std::cout << "Enter dross (char) for chaff " << i + 1 << ": ";
		std::cin >> input[i].dross;
		std::cin.get();
		std::cout << "Enter slag (int) for chaff " << i + 1 << ": ";
		std::cin >> input[i].slag;
		std::cin.get();
	}

	std::cout << std::endl;

	for (int i = 0; i < 2; i++)
	{
		std::cout << "Dross for chaff " << i + 1 << " is: " << input[i].dross << std::endl;
		std::cout << "Slag for chaff " << i + 1 << " is: " << input[i].slag << std::endl;
	}
}
