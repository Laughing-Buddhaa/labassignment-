#include<iostream>            //including library
#include<cmath>
using namespace std;     //specifying the use of cout function 

int main()              //declaring the main function
{
int i,n;		//assigning the values
cout << " enter the natural number " ;
cin >> n;		//assigning the values
i=n;			// god knows why i did this kidding okk
				//as long as i is less than n it should continue to decrement
while (i <= n)
{
cout << i << endl;	
i--;
 	if (i == 0)
	{
	break;
	}
}
return 0;

}
