//printing the nth fibonacci nnumber
#include<iostream>			//including the library
using namespace std;		//defining theuse of cout function
/*typing pseudocode is very boring. take the previous two entries add them to get the third number,repeat*/
void f(int a,int b,int n,int z, int i)
{
	if(i<=n)
	{
		i++;
		z=a+b;
		a=b;
		b=z;
		f(a,b,n,z,i);		//tailend recursion
	}
	else 
	{
		cout<<"the value of nth fibonacci sequence number is: "<<z;	
	}
}
int main()
{
	int n;
	cout<<"Please enter the value of n(n>0): ";
	cin>>n;
	f(-1,1,n,0,1); //-1 and 1 do not appear in the fibonacci sequence before 0 but passing them 
	//as initial  arguments smoothens the programmme since now you can get all the fibonacci numbers  
	return 0;
}
