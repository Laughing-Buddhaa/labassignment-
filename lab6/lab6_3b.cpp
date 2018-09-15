#include<iostream>
#include<cmath>
using namespace std;

void g(int x,int y,int &z);
int main()
{	int x,y,z;
	cout<< "please enter the value of x and y: ";
	cin>>x>>y;
	g(x,y,z);
	cout<< "the greater number out of x and y is:  "<<z<<endl;
	return 0;	
}
void g(int x,int y,int &z)
{
	if(x == y)
	{
		cout<<"you have entered the same values"<<endl;
	}
	
	else if(x > y)
	{
		z = x;
	}
	
	else
	{
		z = y;
	}
}
