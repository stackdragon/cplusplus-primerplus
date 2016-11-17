// ex8-5.cpp Write a template function max5() that takes as its argument an array of 
// five items of type T and returns the largest item in the array. (Because the size is 
// fixed, it can be hard-coded into the loop instead of being passed as an argument.)
// Test it in a program that uses the function with an array of five int value and an 
// array of five double values. 

#include <iostream> 

template <typename T> T max5(T foo[]);

int main() 
{ 
	int foo[5] = { 1,2,35,4,5};
	std::cout << max5(foo) << std::endl;
}

template <typename T> T max5(T foo[])
{
	T largest = foo[0];
	for (int i = 1; i < 5; i++)
	{
		if (foo[i] > largest)
			largest = foo[i];
	}
	return largest;
}
