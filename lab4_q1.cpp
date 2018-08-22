#include<iostream>  //including input output library
using namespace std; // defining the use of cout function
int main()           //declaring the main function
{
float x,y,z;          //declaring variables
cout << "please enter the length in cm:" << endl;
cin >> x ;    //assigning values
y = x/100;    //operations
z = y/1000;
cout << "The given length in m:" << y << endl; //output
cout << "The given length in km:" << z << endl; //output
return 0;
 

}
