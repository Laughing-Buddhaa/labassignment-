#include<iostream>   //including library
#include<cmath>        
using namespace std; //specifying the use of cout function
int main()     		//declaring the main function
{

float a,b;          //declaring the variables
cout << "please enter the numbers: " << endl;
cin >> a >> b;      // assignment of variables
                   //if two numbers are not equal then either one of them must be greater then the other 
if (a == b)
	{
	cout << "the entered numbers are equal" << endl;
	}
else 
	{
		if ( a>b)  
		{
		cout  << a<< ">" << b<< endl;
		} 
		cout << a << "<" << b << endl;
	}
return 0;
}

