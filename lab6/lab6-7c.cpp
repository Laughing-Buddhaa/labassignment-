#include<iostream>
#include<string>
#include<cmath>
using namespace std;
char f1(char c)
{
	if(c>96 && c<123)
	{
		c = c - 32;
	}
	else
	{
		cout<<"The entered letter is in lower case.";
	}
	return c;
}

char f2(char c)
{
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
	cout<<"please enter the letter to be converted : ";
	cin>>c;
	if(c>96 && c<123)
	{
		cout<<"The upper case of the given letter is: "<<f1(c);
	}
	else
	{
		cout<<"The lower case of the given letter is: "<<f2(c);
	}
	return 0;
}
