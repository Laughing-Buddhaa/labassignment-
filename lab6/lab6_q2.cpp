#include<iostream>	  	//including library
#include<cmath>	
using namespace std;	//defining use of cout function

int add(int ,int);
int main()
{
	int x,y;
	cout<< "please enter the value of x and y: ";
	cin>>x>>y;
	cout<< "the sum of x and y is:  "<<add(x,y)<<endl;
	return 0;
		
}
int add(int a,int b)
{
	int add;
	add = a + b;
	return add;
}




