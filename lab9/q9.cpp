#include<iostream>		//including library
using namespace std;	//defining the use of cout function
void f(char *x, char b[])
{
	for(int i=0;i<100;i++)
	{
		if(b[0]==*(x+i))//if the required element exists cout the given statement
		{
		cout<<"yes, it exist at "<<i+1<<"position."<<endl;
		}
	}
}
int main()
{
	char a[100],b[1];
	cout<<"please enter both the strings: ";
	cin>>a>>b;
	f(a,b);
	return 0;
}
