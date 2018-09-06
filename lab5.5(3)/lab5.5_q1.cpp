#include<iostream>    //icluding library
#include<cmath>		
using namespace std;	// defgining the use of cout function 	
int main()		// declaring the main function
{// print the stars. repeat the loop until the specified condition is satisfied 
int a;
cout << "enter the  size of pattern: " ;	
cin>> a;
	for(int i = 0; i<a ; i++) 
	{
		for(int i=0; i<a; i++)
		{
		cout << "*";
		}
	cout<< endl;
	}
return 0;
}
