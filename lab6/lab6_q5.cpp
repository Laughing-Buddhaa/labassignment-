#include<iostream>
#include<cmath>
using namespace std;

int add(int ,int);
int g(int ,int);
int f(int ,int);

int main()
{
	int x,y,z;
	cout<< "please enter the value of x and y: ";
	cin>>x>>y;
	cout<< "what do you want to do with two numbers? "<<endl;
	cout<<"1. Add the two numbers  2.Find the greatest of two numbers  3.Find the smallest of two numbers"<<endl;
	cout<<"Enter your choice: ";
	cin>>z;
	if(z==1)
	{
		cout<< "the sum of x and y is:  "<<add(x,y)<<endl;	
	}
	
	else if(z==2)
	{
		cout<< "the greater number out of x and y is:  "<<g(x,y)<<endl;
	}
	
	else
	{
		cout<< "the smallest number out of x and y is:  "<<f(x,y)<<endl;
	}
}
int add(int a,int b)
{
	int add;
	add = a + b;
	return add;
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

int f(int x,int y)
{
	if(x == y)
	{
		cout<<"you have entered the same values"<<endl;
	}
	
	else if(x < y)
	{
		return x;
	}
	
	else
	{
		return y;
	}
}
