#include<iostream>			//including library
using namespace std;		//defining the use of cout function
int main()
{
	char text[] = "abcde";	//declaring character array
	int n = sizeof(text)-1;	
	
    char *pEnd = text + n - 1;//declaring pointer to last element of array
    
	for(int i=0;i<n;i++)	  
	{
		cout<<*(pEnd-i);	//printing all element in inverse
	}
	return 0;
}
