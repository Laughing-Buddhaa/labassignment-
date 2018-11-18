#include <iostream>
#include<cmath>
//i've defined the points in clockwise sense.
using namespace std;
//  Declaration of class Point
class point
{
public:
  // default class constructor (with no arguments):
  point()  
  {
  	x=0;
  	y=0;
  } 

  // class constructor that sets the coordinates x, y to the values xval, yval:
  point(int xval, int yval)
  {
  	x=xval;
  	y=yval;
  }

  // member function for moving a point by dx, dy:
  void Move(int dx, int dy)
  {
  	x+=dx;
  	y+=dy;
  }

  // member functions for getting values of x, y:
  int Get_X() const
  {
  	return x;
  }
  int Get_Y() const
  {
  	return y;
  }

  // member functions for setting x, y to xval, yval respectively  
  void Set_X(int xval)
  {
  	x=xval;
  }
  void Set_Y(int yval)
  {
  	y=yval;
  }
  
  void print(point p)
  {
  	cout<<"("<<p.Get_X()<<","<<p.Get_Y()<<")"<<endl;
  }

// private data members x, y represent coordinates of the point:
private:
  int x;
  int y;
};  

//  Declaration of class Rectangle
class rect
{// private data members x, y represent coordinates of the rectangle:
	private:
		point a,b,c,d;
	public:
		rect(point p1,point p2)//constructor
		{
			a.Set_X(p1.Get_X());
			a.Set_Y(p1.Get_Y());
			c.Set_X(p2.Get_X());
			c.Set_Y(p2.Get_Y());
			b.Set_X(a.Get_X());
			b.Set_Y(c.Get_Y());
			d.Set_X(c.Get_X());
			d.Set_Y(a.Get_Y());	
		}
		
		rect()				//default constructor
		{
			b.Move(0,1);
			c.Move(1,1);
			d.Move(1,0);
		}
		
		void rectset()		//print function for printing all the point
		{
			a.print(a);
			b.print(b);
			c.print(c);
			d.print(d);
				
		}
		int side1()		//function to calculate side1
		{
		int m = sqrt(pow((a.Get_Y()-b.Get_Y()),2));
		return m;
		}
		
		int side2()		//function to calculate sside2
		{
		int n = sqrt(pow((b.Get_X()-c.Get_X()),2));
		return n;
		}
		
		int area()		//function to calculate area
		{
			int area = side1()*side2();
			return area;
		}
};

// Testing classes Point and Rectangle
int main()
{
	rect r1;
	r1.rectset();
	int m,n,f,g;
	
	cout<<"Please enter the co-ordinates of point a: ";
	cin>>m>>n;
	cout<<"Please enter the co-ordinates of point c ";
	cin>>f>>g;
	point p3(m,n);
	point p4(f,g);
	rect r2(p3,p4);
	r2.rectset();
	cout<<"the sides of the rectangle are as follows: "<<r2.side1()<<" "<<r2.side2()<<endl;
	cout<<"the area of the ractangle: "<<r2.area()<<endl;
  	// Declaring a point using default class constructor (x = y = 0):
  point p1;
  cout<< "The x value for p1 is " << p1.Get_X() << endl;
  cout<< "The y value for p1 is " << p1.Get_Y() << endl;

 
// Declaring a point with coordinates X = 2, Y = 3:
  point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

// Moving point p2 by (1, -1):
  p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

	return 0;
}

