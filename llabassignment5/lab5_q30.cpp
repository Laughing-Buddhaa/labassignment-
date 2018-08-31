#include<iostream>            //including library
#include<cmath>
using namespace std;     //specifying the use of cout function 

int main()              //declaring the main function
{
int n;			 //declaring the variable
cout << " enter the natural number " ;
cin >> n;		 //declaring the main function
			// fix the number and then go on mutiplying i as long as it is less than 10
for(int i;i <= 10;i++)
{
	if (i == 0)	// beacuse mutipling with zero is idiotic
	{
	continue;
	}
	cout << i*n << endl;	
}
return 0;

}
