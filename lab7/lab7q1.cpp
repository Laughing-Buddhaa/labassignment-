//calculating the power of any number. 
#include<iostream>		//incuding library
#include<cstring>		
#include<cmath>
using namespace std;	//defining use of cout function
void f(long z,long p,long b)//declaring function.
{
	/*the logic behind the current programme is that we take the power and base as arguments and then we go on mutiplying
	and store the value in a termporary variable. the exit condition being the power, which upon being faced just prints 
	the value stored in the temporary variable. */ 
	if(p>=1)			//power must be greater than one
	{
		p--;			//power must be decreased by one with every repition
		z = z*b;		//temporary variable
		f(z,p,b);		//tailend recursion
	}
	else
	{	
	 cout<<"pow("<<b<<","<<p<<") = "<<z;
	}
}
 int main()				//main function
 {
 	long b,p;
 	cout<<"please enter the base: ";
 	cin>>b;
	cout<<"please enter the power: ";
 	cin>>p;
 	f(1,p,b);
 	return 0;
 }
