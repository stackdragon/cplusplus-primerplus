// ex8-6.cpp Write a template function maxn() that takes as its arguments an array of 
// items of type T and an integer representing the number of elements in the array and 
// that returns the largest item in the array. Test it in a program that uses the function 
// template with an array of six int value and an array of four double values. The 
// program should also include a specialization that takes an array of pointers-to-char 
// as an argument and the number of pointers as a second argument and that returns the 
// address of the longest string. If multiple strings are tied for having the longest 
// length,the function should return the address of the first one tied for longest. Test 
// the specialization with an array of five string pointers. 

#include <iostream> 

template <typename T> T maxn(T foo[], int elements);
template <> char *maxn(char *strArray[], int elements);

int main() 
{ 
	char string1[] = "Yesterday";
	char string2[] = "love was";
	char string3[] = "such an easy";
	char string4[] = "game to play";
	char string5[] = "now I need";

	char * strArray[5] =
	{
		string1, string2, string3, string4, string5
	};

	int foo[6] = { 1,2,35,4,70,7};
	double bar[4] = { 0.45, 25.6, 1000.5, 14.0 };
	std::cout << "Largest int: " << maxn(foo, 6) << std::endl;
	std::cout << "Largest double: " << maxn(bar, 4) << std::endl;
	std::cout << "Largest string: " << maxn(strArray, 5) << std::endl;
}

template <typename T> T maxn(T foo[], int elements)
{
	T largest = foo[0];
	for (int i = 1; i < elements; i++)
	{
		if (foo[i] > largest)
			largest = foo[i];
	}
	return largest;
}

template <> char * maxn(char *strArray[], int elements)
{
	char *temp = strArray[0];
	for (int i = 1; i < elements; i++)
		if (strlen(strArray[i]) > strlen(temp))
		{
			temp = strArray[i];
		}
	return temp;
}
