#include<iostream> //including input output library
using namespace std;// defining the use of cout function
int main()   //declaring the main function
{
float p,t,r,i;   //declaring the main function

cout << " please enter the principal amount: " << endl;
cin >> p; //assigning values
cout << " please enter the time period in years: " << endl;
cin >> t; //assigning values
cout << " please enter the rate of interest: " << endl;
cin >> r; //assigning values

i = p*t*r/100; //operations
cout << " The interest for the given value is: " << i << endl;//output
return 0;


}
