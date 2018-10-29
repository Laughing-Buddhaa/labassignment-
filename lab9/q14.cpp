#include<iostream>				//including the  library
using namespace std;			//defining the use of cout function
int main()
{
	char b[10]="prathmesh";		//saem as previous question
	int i=0;
	char *c=b;
	for(int i=0;i<10;i++)
	{
		cout<<*(c+i)<<endl;
	}
	while(b[i]!='\0')
	{
		cout<<b[i]<<endl;
		i++;
	}
	return 0;
}
