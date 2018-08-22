#include<iostream> //including input output library
using namespace std;// defining the use of cout function
int main()  //declaring the main function
{
float f,c;   //declaring the main function
cout << "please enter the temperature in fahrenheit:" << endl;
cin >> f;//assigning values
c = (5*f - 160)/9; //operations
cout << "The corresponding temperature in celsius:" << c << endl;//output
return 0;

}
