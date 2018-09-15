#include<iostream>
#include<cmath>
using namespace std;
int f1(int x, int y,int z)
{
	cout<<"enter the value of num1:  "<<endl;
	cin>>x;
	cout<<"enter the value of num2:  "<<endl;
	cin>>y;

	for(int i=x+1;i<=y;i++)
	{
		if(i%2 == 0)
		{
			z = z + i;
		}
	}
	return z;
}


int main()
{
	int x,y,z;
	cout<<"The sum of all even integers between the given numbers is: "<<f1(x,y,z)<<endl;
	return 0;
}
