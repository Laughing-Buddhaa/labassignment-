#include<iostream>				//including library
using namespace std;			//defining th euse of cout function
int main()
{
	char str[10],*p;			//defining the character array and pointer
	cout<<"Enter around 9 characters:";
	cin>>str;
	int n=sizeof(str)-2;
	
	p =str;
	for(int i=0;i<n;i++)		//print n characters from the end in the nth line
	{
		for(int j=n-i;j<n;j++)
		{
			if(*(p+j)!='\0')
			{
				cout<<*(p+j);
			}
		}
		cout<<endl;
	}
	return 0;
}
