#include<iostream>                        //including library
using namespace std;                      // #include<math> why are we not using this library? so you read this boring stuff too :/  
int main()                                //write the main function
{
int a = 12;                               // declaring and defining variables using different data types
float f = 12.12;
char c = 'd';
double e = 1.235656;
bool b = 1;

cout << "size of (int)=" <<  sizeof(a) << endl;  // displaying the size of data types using the sizeof( ) function 
cout << "size of (float)=" <<  sizeof(f) << endl;
cout << "size of (char)=" <<  sizeof(c) << endl;
cout << "size of (double)=" <<  sizeof(e) << endl;
cout << "size of (bool)=" <<  sizeof(b) << endl;

return 0;                                     // check whether the function was compiled successfully 
}
