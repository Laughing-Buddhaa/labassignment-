#include<iostream>
#include<string>
#include<cmath>
using namespace std;
char f1(char c)
{
	cout<<"please enter the letter to be converted to upper case: ";
	cin>>c;
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
int main()
{
	char c;
	cout<<"The upper case of the given letter is: "<<f1(c);
	return 0;
}
