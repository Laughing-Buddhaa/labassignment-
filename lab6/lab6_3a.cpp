#include<iostream>
#include<cmath>
using namespace std;

int g(int ,int);
int main()
{	int x,y;
	cout<< "please enter the value of x and y: ";
	cin>>x>>y;
	g(x,y);
	cout<< "the greater number out of x and y is:  "<<g(x,y)<<endl;
	return 0;	
}
int g(int x,int y)
{
	if(x == y)
	{
		cout<<"you have entered the same values"<<endl;
	}
	
	else if(x > y)
	{
		return x;
	}
	
	else
	{
		return y;
	}
}
