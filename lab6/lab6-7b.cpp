#include<iostream>
#include<string>
#include<cmath>
using namespace std;
char f1(char c)
{
	cout<<"please enter the letter to be converted to lower case: ";
	cin>>c;
	if(c>64 && c<91)
	{
		c = c + 32;
	}
	else
	{
		cout<<"The entered letter is in upper case.";
	}
	return c;
}
int main()
{
	char c;
	cout<<"The lower case of the given letter is: "<<f1(c);
	return 0;
}
