#include<iostream>    //icluding library
#include<cmath>		
using namespace std;	// defgining the use of cout function 	
int main()		// declaring the main function
{
//creae two different loops and using if else statement decide which one to choose
for(int i=0; i<5; i++)
{
	if(i==0 || i==4)
	{
		for(int j=0; j<5;j++)
		{
		cout << "*";
		}
	cout << endl;	
	}
	else
	{
		cout<< "*" ;
		for(int k=0; k<3;k++)
		{
		cout << " " ;
		}
		cout<< "*" << endl;
	}	
}
}
