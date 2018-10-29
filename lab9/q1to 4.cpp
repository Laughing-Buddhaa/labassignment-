#include<iostream>
using namespace std;
int main()
{ 
	//q1
	/*Assume further that the address of c is 6940, the address of d is 9772, 
	and the address of e is 2224*/
	char c = 'T', d = 'S';
	char *p1 = &c;
	char *p2 = &d;
	char *p3;
	p3 = &d;
cout << "*p3 = " << *p3 << endl;   // (1)  S

p3 = p1;
cout << "*p3 = " << *p3            // (2) T
     << ", p3 = " << p3 << endl;   // (3) 6940

*p1 = *p2;
cout << "*p1 = " << *p1            // (4) S
     << ", p1 = " << p1 << endl;   // (5) 9772
		

	//q2
	int *p,i,k;
	i = 42;
	k = i;
	p = &i;
	/* which statement will change the value of i to 75?*/
	
	//q3
	//char c = 'A';
	//double *p = &c;
	//the pointer is of integer type whereas address being stored is of character type.
	
	//q4  
	char blocks[3] = {'A','B','C'};
   char *ptr = &blocks[0];
   char temp;

   temp = blocks[0];		//temp=A
   temp = *(blocks + 2);	//temp=c
   temp = *(ptr + 1);		//temp=b
   temp = *ptr;				//temp=a

   ptr = blocks + 1;
   temp = *ptr;				//temp=b
   temp = *(ptr + 1);		//temp=c

   ptr = blocks;			//temp=c
   temp = *++ptr;			//temp=b
   temp = ++*ptr;			//temp=c
   temp = *ptr++;			//temp=c
   temp = *ptr;				//temp=c
	return 0;
}
