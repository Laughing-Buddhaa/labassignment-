#include<iostream>            //including library
#include<cmath>
using namespace std;     //specifying the use of cout function 

int main()              //declaring the main function
{
int a,b,i;		//declaring the variable
cout<< "please enter your two numbers: " << endl;
cin >> a >> b;		//declaring the main function
// since lcm is defined only for natural numbers i must be positive check whether given number is divisible by both as soon as and operator gives true return use break the loop
while(i>=0)

{
	i++;  // why do you think i have kept it here?
	if (i%a == 0 && i%b == 0)
	{
	cout<< "the lcm of the given two numbers" << i << endl;
	break;
	}
 	
	
	
	
}
return 0;

}
