#include<iostream>					//including librarires
using namespace std;				//defining the use of cout function
void strcpy(char *p, char *q)
{
	for(int i=0;i<100;i++)			//string copy
	{
		*(q+i)=*(p+i);		
	}	
	cout<<"copied string: "<<b<<endl;
}
int strlen(char *p)					//keep incrementing x until null character is found
{
	int x=0;
	while(*(p+x)!='\0')
	{
		x++;
	}
	return x;		
}
void strcat(char a[],char b[])		//get the length of both the strings and store it in the third string 
{
	char c[200],*r,*p,*q;
	p=a;r=c;q=b;
	
	int x,y;
	x = strlen(a);
	y = strlen(b);
	for(int i=0;i<x;i++)
	{
		*(r+i) = *(p+i) ;
	}
	for(int i=0;i<y;i++)
	{
		*(r+i+x)=*(q+i);
	}
	cout<<"concatenated string: "<<c<<endl;
}

void strcmp(char *p,char *q)		//break the loop immediately when different elements are encountered
{
	int c=0;
	for(int i=0;i<100;i++)
	{
		if(*(p+i)!=*(q+i))
		{
			c=0;
			break;
		}		
	}
	 
	cout<<((c==1) ? "the two strings match completely " : "the two strings are different.")<<endl;	
}
void strchr(char *p)			//whenever the searched character is found declare it's discovery
{
	char k;
	cout<<"enter the character you want to search: ";
	cin>>k;
	for(int i=0;i<100;i++)
	{
		if(*(p+i)==k)
		{
			cout<<"the letter at "<<i+1<<" position matches your entry."<<endl;
		}
	}
}

char* strstr(char *str, char *substr)
{
	  while (*str) 
	  {
		    char *Begin = str;
		    char *pattern = substr;
		    
		    // If first character of sub string match, check for whole string
		    while (*str && *pattern && *str == *pattern) 
			{
			      str++;
			      pattern++;
		    }
		    // If complete sub string match, return starting address 
		    if (!*pattern)
		    	  return Begin;
		    	  
		    str = Begin + 1;	// Increament main string 
	  }

}
int main()
{
	char a[100], b[100];
	cout<<"Please enter :";
	cin>>a;
	strcpy(a,b);
	cout<<"the length of above string is: "<<strlen(a)<<endl;
	strchr(a);
	cout<<"please enter: ";
	cin>>b;
	strcat(a,b);
	strcmp(a,b);
	strstr(a,b);
	return 0;
}
