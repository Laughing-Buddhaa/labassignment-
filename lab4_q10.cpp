#include<iostream> //including input output library
#include<cmath> //including math library for mathematical functions
using namespace std;   // defining the use of cout function
int main()   //declaring the main function
{
float p,t,r,i;
cout << " please enter the principal amount: " << endl;
cin >> p; //assigning values
cout << " please enter the time period in years: " << endl;
cin >> t; //assigning values
cout << " please enter the rate of interest: " << endl;
cin >> r; //assigning values


i = p*pow((1 + r/100),t) - p; //operations
cout << " The interest for the given value is: " << i << endl; //output
return 0;

}
