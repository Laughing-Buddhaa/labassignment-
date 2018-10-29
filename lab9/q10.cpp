#include<iostream> 						//including libraries
#include<cstring>	
using namespace std;					//defining the use of cout function
void revString(char text[])
{
	int nChars = sizeof(text)-2;		
	char *pStart = text;
    char *pEnd = text + nChars - 2;
	
        
    while(pStart < pEnd)				//just reverse the pointers to get the reverse string
        {
            char tmp = *pStart;
            *pStart = *pEnd;
            *pEnd = tmp;

            pStart++;
            pEnd--;
        }
    cout << text << endl;
	
}
int main()
{
	char text[] = "abcde";
	revString(text);
	return 0;
}
