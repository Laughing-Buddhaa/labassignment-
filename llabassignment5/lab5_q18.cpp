#include<iostream>            //including library
#include<cmath>
using namespace std;     //specifying the use of cout function 

int main()              //declaring the main function
{
float c,s,p,l;		//declaring the variable
cout<< "please enter your cost and selling price respectively: ";
cin >> c >> s;		//assigning the values
		// if s gerater than c then we have profit else eloss
if (s > c)
	{
	p = s-c; cout << "your profit is: "<< p << endl;
	}
else
	{
	l = c-s; cout << "your loss is: "<< l << endl;
	}
return 0;
}
