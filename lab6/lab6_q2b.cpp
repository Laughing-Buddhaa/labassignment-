#include<iostream>	  	//including library
#include<cmath>	
using namespace std;	//defining use of cout function

void add(int a,int b,int &sum);		
int main()					//declaring main function
{
	int x,y,sum;
	add(x,y,sum);
	cout<< "the sum of x and y is:  "<<sum<<endl;
	return 0;
		
}
void add(int a,int b,int &sum)
{
	cout<< "please enter the value of x: ";
	cin>>a;
	cout<< "please enter the value of y: ";
	cin>>b;
	sum = a+b;
}

