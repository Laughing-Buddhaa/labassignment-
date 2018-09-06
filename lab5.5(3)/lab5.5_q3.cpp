#include<iostream>    //icluding library
#include<cmath>		
using namespace std;	// defgining the use of cout function 	
int main()		// declaring the main function
{int a;
cout<<"please enter the size of pattern: ";
cin >> a;

//this can be simplified as spaces and stars. the code goes as first we write for loop for the spaces and then print the star string again uisng for loop 
for(int i=0; i<a; i++)
{
	int j = 0 ;
	while(j<a-i)
	{
	cout << " ";
	j++;	
	}

	for(int l = 0; l<a; l++)
	{
	cout<< "*";
	}
cout << endl;
}

return 0;
}
