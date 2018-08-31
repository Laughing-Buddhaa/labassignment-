#include<iostream>            //including library
#include<cmath>
using namespace std;     //specifying the use of cout function 

int main()              //declaring the main function
{
float a,b,c,d,e,f;            //declaring the variable
 cout << "please enter the variables for the general quadratic equation ax^2+bx+c " << endl;
 cin >> a >> b>> c;		//assigning the values

			//we find the discriminant because the solutions are only possible if discriminant is greater than 0 then we we find the real solutions 

d = pow(b,2) - 4 * a * c;       
e = -(b + sqrt (d))/(2 * a);
f = (sqrt (d)-b)/(2 * a);

if ( d < 0)
	{
	cout << "this equation does not have any real roots" << endl;
	}
else
	{
	cout << "The real roots of this equation are" << e << "and" << f << endl;
	}
return 0;
}

