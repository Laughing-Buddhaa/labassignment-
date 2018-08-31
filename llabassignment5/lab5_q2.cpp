#include<iostream>            //including library
#include<cmath>
using namespace std;     //specifying the use of cout function 

int main()              //declaring the main function
{
float a,b,c;            //declaring the variables
 cout << "please enter the three distinct numbers: " << endl; 
cin >> a >> b >> c;    // assignment of variables
			// if ANY OF THE TWO NUMBERS ARE NOT EQUAL then by simple we compare the numbers one by one and based on their bool values we generate the output 
if (a == b || b == c || a == c)
{
cout << "hey genius despite telling you've entered the same number" << endl;

}
else
{

if (a > b)            //i hate writing this part anyway this is my condition 
{	
	if (a > c)      // nested if 
		{
		cout <<"The greatest number is "<<  a << endl;	
		}
	else           //what ifffff this if does not return true
		{
		cout <<"The greatest number is"<< c << endl;
		}
}
else 
{
	if (b > c) //you try to understand the math
		{
		cout <<"The greatest number is " << b <<endl;
		}
        else
		{
		cout <<"The greatest number is " << c << endl;
		}
	

}

}
return 0;   
}
