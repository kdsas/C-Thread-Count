//============================================================================
// Name        : Count.cpp
// Author      : Karima Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>
#include <thread>
using namespace std;

void foo()
{     int i;
    for (i = 0; i <= 20; i++) {
    	cout << "Number 0 " << i << endl;
    }
}



void CountUp()
{
	int i;
	while(i <= 20 )
{
cout << "Number " << i << endl;
i++;
}
}
void CountDown()
{
	int countDown = 20;

	    while (countDown  >= 0)
	    {
	    	cout << "Number1 " << countDown  << endl;
	    	countDown --;

	    }

}
int main()
{



    thread th1(foo);
    thread th2(CountUp);
    thread th3(CountDown);





    // Wait for the threads to finish
    // Wait for thread t1 to finish
     th1.join();

    // Wait for thread t2 to finish

    th2.join();
    th3.join();


    return 0;
}
