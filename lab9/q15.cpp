#include<iostream>					//including library
using namespace std;				//definig the use of cout function
int main()
{
	char str[10],*p;				//declaring an character array snd an pointer to it
	cout<<"Enter around 9 characters:";
	cin>>str;
	int n=sizeof(str)-1;
	
	p =str;
	/* every time the chracter from the nth word in the nth line*/
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
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
