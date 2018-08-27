/*
*Name   <Asuncion, Jacob Abraham D.>
*Date   <August 4, 2018>
*/



#include <iostream>
#include <cmath>
using namespace std;


int main()
{


double force1;
double m1,m2;
double d2,d3;


cout << "Input Mass 1: ";
cin >> m1;
cout << "Input Mass 2: ";
cin >> m2;
cout << "Input distance: ";
cin >> d2;

d3=d2*d2;
force1=0.0000000667*(m1*m2/d3);

cout << "The force is " << force1 << "N ";










	return 0;
}
