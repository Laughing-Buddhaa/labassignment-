#include<iostream>    //icluding library
#include<cmath>		
using namespace std;	// defgining the use of cout function 	
int main()		// declaring the main function
{
//this can be simplified as spaces and stars. the code goes as first we write for loop for the spaces and then print the star string again uisng for loop 
for(int i=0; i<5; i++)
{
	int j = 0 ;
	while(j<5-i)
	{
	cout << " ";
	j++;	
	}

	for(int l = 0; l<5; l++)
	{
	cout<< "*";
	}
cout << endl;
}

return 0;
}
