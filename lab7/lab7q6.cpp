//printing the reverse of any number.
#include<iostream>			//including library
using namespace std;		//defining the use of cout function
void f(int n,int r)			//defining the function
{
	/*as long as n is not 0, divide n by 10 and the remainder shall be passed on to 
	to r.also make sure that after dividing by 10 decimal part is discarded since 
	it's no longer needed  */
	if(n!=0)				//exit condition
	{
	r = (r*10)+ (n%10);
	n = n/10;
	f(n,r);					//tailend recursion
	}
	else
	{
		cout<<"the reversed number is: "<<r;
	}
}
int main()
{
	int n;
	cout<<"please enter the number: ";
	cin>>n;
	f(n,0);
	return 0;
}
