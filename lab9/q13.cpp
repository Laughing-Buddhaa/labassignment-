#include<iostream>				//including library
using namespace std;			//defining the us of cout function
int main()
{
	int a[10];					//declaring and assigning the elements of the array
	for(int i=0;i<10;i++)		
	{
		a[i]=i+1;
	}
	for(int i=0;i<10;i++)		//printing by sumole reference method
	{
		cout<<a[i]<<endl;
	}
	int *b;
	b = a;						//declaring pointer to array
	for(int i=0;i<10;i++)		
	{
		cout<<*(b+i)<<endl;		//printintg  by pointer nethod
	}
	return 0;
}
