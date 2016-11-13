// ex7-9.cpp Complete the program skeleton by providing the described functions

#include <iostream> 
using namespace std;

const int SLEN = 30; 
struct student 
{ 
	char fullname[SLEN]; 
	char hobby[SLEN]; 
	int ooplevel; 
}; 

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main() 
{
	cout << "Enter class size : "; 
	int class_size; 
	cin >> class_size; 
	while (cin.get() != '\n') 
		continue;
		
	student * ptr_stu = new student[class_size];

	int entered = getinfo(ptr_stu, class_size); 

	for (int i = 0; i < entered; i++) 
	{ 
		display1(ptr_stu[i]); 
		display2(&ptr_stu[i]); 
	} 
	display3(ptr_stu, entered); 
	delete[] ptr_stu; 
	cout << "Done\n"; 
	
	return 0;
}

// getinfo() has two arguments: a pointer to the first element of 
// an array of student structures and an int representing the 
// number of elements of the array. The function solicits and 
// stores data about students. It terminates input upon filling 
// the array or upon encountering a blank line for the student 
// name. The function returns the actual number of array elements 
// filled. 

int getinfo(student pa[], int n)
{
	char temp[SLEN];
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "Enter full name for student " << i + 1 << ": ";
		cin.getline(pa[i].fullname, SLEN);
		if (strlen(pa[i].fullname) == 0)
			break;
		cout << "Enter hobby for student " << i + 1 << ": ";
		cin.get(pa[i].hobby, SLEN);
		cout << "Enter ooplevel for student " << i + 1 << ": ";
		cin >> pa[i].ooplevel;
		cin.get();
	}
	return i;
}

// display1() takes a student structure as an argument 
// and displays its contents 

void display1(student st)
{
	cout << "\n display1() output: \n";
	cout << st.fullname << endl;
	cout << st.hobby << endl;
	cout << st.ooplevel << endl;
}

// display2() takes the address of student structure as an 
// argument and displays the structure’s contents 

void display2(const student * ps)
{
	cout << "\ndisplay2() output: \n";
	cout << ps->fullname << endl;
	cout << ps->hobby << endl;
	cout << ps->ooplevel << endl;
}

// display3() takes the address of the first element of an array 
// of student structures and the number of array elements as 
// arguments and displays the contents of the structures 

void display3(const student pa[], int n)
{
	cout << "\ndisplay3() output: \n";
	for (int i = 0; i < n; i++)
	{
		cout << pa[i].fullname << endl;
		cout << pa[i].hobby << endl;
		cout << pa[i].ooplevel << endl;
	}
}
