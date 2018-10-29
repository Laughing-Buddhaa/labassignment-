#include<iostream>			//including library
using namespace std;		//defining the use of cout function
int f(int *b,int n)			//declaring cout function
{	
	for(int i=0;i<n;i++)
	{
		if(*b<*(b+i))
		{
			*b= *(b +i);	//b will always point to the largest variable it finds
		}
	}
	return *b;
}
int main()
{ 
	int n;					//declaring array size and integer array
	cout<<"please enter the value of n: ";
	cin>>n;
	int a[n];
	for(int i=0;i<n ;i++)
	{
		cout<<"please enter the value of array: ";
		cin>>a[i];
	}
	cout<<"The largest emlement of the array: "<<f(a,n);//function call
	return 0;
}
