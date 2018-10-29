#include<iostream>		//including library
using namespace std;	//defining the use of cout function
int f(int *b,int n)	//declaring function
{					//if the variable is divisible by two then increment the value of j and at the end print j
	int i=0,j=0;
	
	while(i<n)
	{
		if(*(b+i)%2==0)
			{
				j++;
			}
		i++;
	}
	return j;
}
int main()
{
	int n;
	cout<<"please enter the value of n: ";
	cin>>n;						//declaring and assigning array size
	int a[n];					//declaring integer array
	for(int i=0;i<n;i++)		//assigning values to array elements
	{
		a[i]=i+1;
	}
	cout<<f(a,n);				//function call
	return 0;
}
