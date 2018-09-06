#include<iostream>    //icluding library
#include<cmath>		
using namespace std;	// defgining the use of cout function 	
int main()		// declaring the main function
{int a;
cout<<"please enter the size of pattern: ";
cin >> a;
//creae two different loops and using if else statement decide which one to choose
for(int i=0; i<=a; i++)
{
	if(i==0 || i==a)
	{
		for(int j=0; j<a;j++)
		{
		cout << "*";
		}
	cout << endl;	
	}
	else
	{
		cout<< "*" ;
		for(int k=0; k<(a - 2);k++)
		{
		cout << " " ;
		}
		cout<< "*" << endl;
	}	
}
}
