#include<iostream>
#include<cmath>
using namespace std;
float f1(float &unitCst,float &units,float &taxRt);
float f2(float &unitCst,float &units,float &taxRt,float &salestax,float &deduction);
float f3(float &unitCst,float &units,float &taxRt,float &salestax,float &deduction);
int main()
{
	float unitCst,units,taxRt,salestax,deduction;
	f1(unitCst,units,taxRt);
	f2(unitCst,units,taxRt,salestax,deduction);
	f3(unitCst,units,taxRt,salestax,deduction);
	return 0;
}

float f1(float &unitCst,float &units,float &taxRt)
{
	cout<<"Enter the cost of unit, no of unit & taxrate: ";
	cin>>unitCst>>units>>taxRt;
	return unitCst;
	return units;
	return taxRt;
}


float f2(float &unitCst,float &units,float &taxRt,float &salestax,float &deduction)
{
	salestax = (unitCst * units * taxRt) / 100;
	deduction = salestax + (unitCst* units);
	return salestax;
	return deduction;
}

float f3(float &unitCst,float &units,float &taxRt,float &salestax,float &deduction)
{
	cout<<"The cost of unit is: "<<unitCst<<endl;
	cout<<"The no of unit is: "<<units<<endl;
	cout<<"The taxrate is: "<<taxRt<<endl;
	cout<<"Tax to be payed is: "<<salestax<<endl<<"Total amount to be paid is: "<<deduction;
	
}
