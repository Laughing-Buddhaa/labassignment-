#include<iostream>
#include<cmath>
using namespace std;
int f1(int x, int y,int z)
{
	cout<<"enter the value of num1:  ";
	cin>>x;
	cout<<endl<<"enter the value of num2:  ";
	cin>>y;
	int i=x+1;
	while(i<=y)
	{
		if(i%2 == 0)
		{
			z = z + pow(i,2);
		}
		i++;
	}
	return z;
}


int main()
{
	int x,y,z;
	cout<<"The sum of all even integers between the given numbers is: "<<f1(x,y,z)<<endl;
	return 0;
}
