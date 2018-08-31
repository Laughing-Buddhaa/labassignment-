#include<iostream>            //including library
#include<cmath>
using namespace std;     //specifying the use of cout function 

int main()              //declaring the main function
{


for (int i;i <= 100;i++)	// as per the syntax of for loop //if the remainder of i/2 is 0 then print
 
{
	if (i%2 == 0)
	{
	cout << i << endl;	

	}
 	else
	{
	continue;
	}
}
return 0;

}
