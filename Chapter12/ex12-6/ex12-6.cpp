// ex12-6.cpp -- Modify the simulation in this chapter so that it has two queues.
// Assume that a customer will join the first queue if it has fewer people in it than 
// the second queue and that the customer will join the second queue otherwise.
// Again,find a value for number of customers per hour that leads to an average wait 
// time of one minute.

#include <iostream> 
#include <cstdlib> // for rand() and srand() 
#include <ctime>   // for time() 
#include "queue.h" 

const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main() 
{
	using std::cin; 
	using std::cout; 
	using std::endl; 
	using std::ios_base; // setting things up 
	std::srand(std::time(0));    //  random initializing of rand()

	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter the number of simulation hours: ";
	int hours;              //  hours of simulation 
	cin >> hours;
	double perhour = 120;	//  forcing 120 customers per hour ensures wait of > 1 min
							//  for 2 queues
	double min_per_cust;
	Item temp;              //  new customer data 
	long turnaways1;     //  turned away by full queue 
	long customers1;     //  joined the queue 
	long served1;        //  served during the simulation 
	long sum_line1;      //  cumulative line length 
	int wait_time1;		//  time until autoteller is free 
	long line_wait1;     //  cumulative time in line

	long turnaways2;     //  turned away by full queue 
	long customers2;     //  joined the queue 
	long served2;        //  served during the simulation 
	long sum_line2;      //  cumulative line length 
	int wait_time2;		//  time until autoteller is free 
	long line_wait2;     //  cumulative time in line

	do
	{
		Queue line1(hours * perhour/2);   // set queue size to # of cust (none turned away)
		Queue line2(hours * perhour/2);   // as a starting point. perhour must be at least 
									      // this much
		perhour = perhour--;
		min_per_cust = MIN_PER_HR / perhour;
		turnaways1 = turnaways2 = 0;     //  set all values to zero
		customers1 = customers2 = 0;
		served1 = served2 = 0;
		sum_line1 = sum_line2 = 0;
		wait_time1 = wait_time2 = 0;
		line_wait1 = line_wait2 = 0;

		// running the simulation 
		for (int cycle = 0; cycle < perhour; cycle++)
		{
			if (newcustomer(min_per_cust))  // have newcomer 
			{
				if (line1.queuecount() <= line2.queuecount())
				{
					if (line1.isfull())
						turnaways1++;
					else
					{
						customers1++;
						temp.set(cycle);    // cycle = time of arrival 
						line1.enqueue(temp); // add newcomer to line 
					}
				}
				else
				{
					if (line2.isfull())
						turnaways1++;
					else
					{
						customers2++;
						temp.set(cycle);    // cycle = time of arrival 
						line2.enqueue(temp); // add newcomer to line 
					}
				}
			}
			if (wait_time1 <= 0 && !line1.isempty())
			{
				line1.dequeue(temp);      // attend next customer 
				wait_time1 = temp.ptime(); // for wait_time minutes 
				line_wait1 += cycle - temp.when();
				served1++;
			}
			if (wait_time2 <= 0 && !line2.isempty())
			{
				line2.dequeue(temp);      // attend next customer 
				wait_time2 = temp.ptime(); // for wait_time minutes 
				line_wait2 += cycle - temp.when();
				served2++;
			}
			if (wait_time1 > 0)
				wait_time1--;
			if (wait_time2 > 0)
				wait_time2--;
			sum_line1 += line1.queuecount();
			sum_line2 += line2.queuecount();
		}
	}
	while (double(line_wait1 + line_wait2) / (served1 + served2) > 1.0); 
									  // keep decrementing perhour until falls
									  // below average wait time of 1 min
// reporting results 
	if ((customers1 + customers2) > 0) 
	{ 
		cout << "customers accepted: " << customers1 + customers2 << endl; 
		cout << "  customers served: " << served1 + served2 << endl; 
		cout << "         turnaways: " << turnaways1 + turnaways2 << endl; 
		cout << "average queue size: "; 
		cout.precision(2); 
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)(sum_line1+sum_line2) / perhour << endl; 
		cout << " average wait time: " 
			<< (double)(line_wait1+line_wait2) / (served1+served2) << " minutes\n";
	}
	else 
		cout << "No customers!\n";
	cout << "\nThe average weight time is " 
		<< (double)(line_wait1 + line_wait2) / (served1 + served2) << " minutes\n";
	cout << "when there are " << perhour << " customers per hour." << std::endl;
	return 0;
}

//  x = average time, in minutes, between customers 
//  return value is true if customer shows up this minute 
bool newcustomer(double x) 
{ 
	return (std::rand() * x / RAND_MAX < 1); 
}
