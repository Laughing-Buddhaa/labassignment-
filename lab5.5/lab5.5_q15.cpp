#include<iostream>    //icluding library
#include<cmath>		
using namespace std;	// defgining the use of cout function 	
int main()		// declaring the main function
{
//this can be simplified as spaces and stars. the code goes as first we write for loop for the spaces and then print the star string again uisng for loop this one is a little different the relation between l and i has changed 
for(int i=0; i<5; i++)
{
	int l = 0,j = 0 ;
	while(j<5-i)
	{
	cout << " ";
	j++;	
	}

	while(l< (2*i + 1))
	{
	cout<< "*";
	l++;
	}
cout << endl;
}

return 0;
}
