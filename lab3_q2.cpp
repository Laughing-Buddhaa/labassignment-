#include<iostream>     // including library
using namespace std;
int main()             // writing the main  function
{
int a,b ;              // declaring variables
int sum,diff,divi,mul,rem;
cout << "enter the value of a: " << endl ;// defining variables
cin >> a;
cout<<"Enter the value of b: "<<endl;
cin>>b;                    // performing operations
sum=a+b;
diff=a-b;
mul=a*b;
divi=a/b;
rem=a%b;

cout<< "the sum of a and b: "<<sum<<endl;          //printing output 
cout<<"the difference of a and b: "<<diff<<endl;
cout<<"the multiplication of a and b: "<<mul<<endl;
cout<<"the remainder of a and b: "<<rem<<endl;
 
cout<<"the division of a and b: "<<divi<<endl;
 return 0;                       // check whether programme was compiled successfullys



}
