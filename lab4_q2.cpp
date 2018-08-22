#include<iostream>  //including input output library
using namespace std;// defining the use of cout function
int main()           //declaring the main function
{
float f,c;         //declaring the main function
cout << "please enter the temperature in celsius:" << endl;
cin >> c;  //assigning values
f = 1.8*c + 32; //operations
cout << "The corresponding temperature in fahrenheit:" << f << endl; //output
return 0;

}
