#include<iostream>				//including libraries
using namespace std;			//defining the use of cout function
/*function definition...*/
int stringLength(char* txt)		//declaring function
{
	int i=0,count=0;
	
	while(txt[i++]!='\0')
	{
		count+=1;
	}
	
	return count;
}

int main()
{
	char str[100]={0};
	int length;

	cout<<"Enter any string: ";
	cin>>str;
	/*call the function*/
	length=stringLength(str);
	
	cout<<"String length is : "<<length;

	return 0;
}


