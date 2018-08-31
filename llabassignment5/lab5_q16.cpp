#include<iostream>            //including library
#include<cmath>
using namespace std;     //specifying the use of cout function 

int main()              //declaring the main function
{
float a,b,c;            //declaring the variables
 cout << "please enter the length of three sides of triangles: " << endl; 
cin >> a >> b >> c;    // assignment of variables
    			//we simply compare the sides one by one and based on their bool values we generate the output 

if (a == b)            //i hate writing this part anyway this is my condition 
{	
	if (b == c)      // nested if 
		{
		cout <<"The given triangle is equilateral" << endl;	
		}
	else          //what ifffff this if does not return true
		{
		cout <<"The given triangle is isosceles" << endl;
		}
}
else 
{
	if (b == c || a == c) //you try to understand the math
		{
		cout <<"The given triangle is isosceles" << endl;
		}
        else
		{
		cout <<"The given triangle is scalene" << endl;
		}
	

}


return 0;   
}
