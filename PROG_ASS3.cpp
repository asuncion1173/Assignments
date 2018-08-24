/*
*Name   <Asuncion, Jacob Abraham D.>
*Date   <August 14, 2018>
*Module Name    < Length Converter >
*Description    < To convert one given length, to another desired value >
*/


#include <iostream>
#include <cmath>

using namespace std;

int main()

{
string choose;
float Length;

// Start of the Program
cout << "\t\t Length Converter\n\n";
string menu = "yes";
while( menu=="yes"||menu=="Yes"||menu=="y"||menu=="Y")

{



// The menu to see the what the users can start the converting from
cout << "   Menu \n\n";
cout << "   Milimeter (mm) \n   Centimeter (cm) \n   Meter (m)  \n";
cout << "   Kilometer (km) \n   Inch (in) \n   Feet (ft) \n";
cout << "\n Your Answer: ";
cin >> choose;
cout << "\n  Enter the length: ";
cin  >> Length;
cout << "\n To:  \n";

if (choose == "Milimeter" || choose == "milimeter" || choose == "mm")
{
string a;
float answer;
cout << "   Milimeter (mm) \n   Centimeter (cm) \n   Meter (m)  \n";
cout << "   Kilometer (km) \n   Inch (in) \n   Feet (ft) \n\n";
cout << " Your Answer: ";
cin >> a;

// From milimeter, to the desired convertment of the user
if (a == "Milimeter" || a == "milimeter" || a == "mm")
{
answer = (Length*1);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Centimeter" || a == "centimeter" || a == "cm")
{
answer = (Length*0.1);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Meter" || a == "meter" || a == "m")
{
answer = (Length*0.001);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Kilometer" || a == "kilometer" || a == "km")
{
answer = (Length*0.000001);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Inch"||  a == "in" || a == "inch")
{
answer = (Length*0.0394);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Foot"||  a == "ft" || a == "foot" || a == "Feet" || a == "feet" )
{
answer = (Length*0.0033);
cout << "The answer is: " << answer<<" "<<a;
}
else
{
    cout << "Invalid";
}
}

// From centimeter, to the desired convertment of the user
else if (choose == "Centimeter" || choose == "centimeter" || choose == "cm")
{
string a;
float answer;
cout << "   Milimeter (mm) \n   Centimeter (cm) \n   Meter (m)  \n";
cout << "   Kilometer (km) \n   Inch (in) \n   Feet (ft) \n\n";
cout << " Your Answer: ";
cin >> a;

if (a == "Milimeter" || a == "milimeter" || a == "mm")
{
answer = (Length*10);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Centimeter" || a == "centimeter" || a == "cm")
{
answer = (Length*1);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Meter" || a == "meter" || a == "m")
{
answer = (Length*0.01);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Kilometer" || a == "kilometer" || a == "km")
{
answer = (Length*0.00001);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Inch"||  a == "in" || a == "inch")
{
answer = (Length*0.394);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Foot"||  a == "ft" || a == "foot" || a == "Feet" || a == "feet" )
{
answer = (Length*0.033);
cout << "The answer is: " << answer<<" "<<a;
}
else
{
    cout << "Invalid";
}
}
// From meter, to the desired convertment of the user
else if (choose == "Meter" || choose == "meter" || choose == "m")
{
string a;
float answer;
cout << "   Milimeter (mm) \n   Centimeter (cm) \n   Meter (m)  \n";
cout << "   Kilometer (km) \n   Inch (in) \n   Feet (ft) \n\n";
cout << " Your Answer: ";
cin >> a;

if (a == "Milimeter" || a == "milimeter" || a == "mm")
{
answer = (Length*1000);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Centimeter" || a == "centimeter" || a == "cm")
{
answer = (Length*100);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Meter" || a == "meter" || a == "m")
{
answer = (Length*1);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Kilometer" || a == "kilometer" || a == "km")
{
answer = (Length*0.001);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Inch"||  a == "in" || a == "inch")
{
answer = (Length*39.37);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Foot"||  a == "ft" || a == "foot" || a == "Feet" || a == "feet" )
{
answer = (Length*3.28);
cout << "The answer is: " << answer<<" "<<a;
}
else
{
    cout << "Invalid";
}
}
// From kilometer, to the desired convertment of the user
if (choose == "Kilometer" || choose == "kilometer" || choose == "km")
{
string a;
float answer;
cout << "   Milimeter (mm) \n   Centimeter (cm) \n   Meter (m)  \n";
cout << "   Kilometer (km) \n   Inch (in) \n   Feet (ft) \n\n";
cout << " Your Answer: ";
cin >> a;

if (a == "Milimeter" || a == "milimeter" || a == "mm")
{
answer = (Length*1000000);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Centimeter" || a == "centimeter" || a == "cm")
{
answer = (Length*100000);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Meter" || a == "meter" || a == "m")
{
answer = (Length*1000);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Kilometer" || a == "kilometer" || a == "km")
{
answer = (Length*1);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Inch"||  a == "in" || a == "inch")
{
answer = (Length*39370.08);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Foot"||  a == "ft" || a == "foot" || a == "Feet" || a == "feet" )
{
answer = (Length*3280.84);
cout << "The answer is: " << answer<<" "<<a;
}
else
{
    cout << "Invalid";
}
}
// From inch, to the desired convertment of the user
if (choose == "Inch" || choose == "inch" || choose == "in")
{
string a;
float answer;
cout << "   Milimeter (mm) \n   Centimeter (cm) \n   Meter (m)  \n";
cout << "   Kilometer (km) \n   Inch (in) \n   Feet (ft) \n\n";
cout << " Your Answer: ";
cin >> a;

if (a == "Milimeter" || a == "milimeter" || a == "mm")
{
answer = (Length*25.4);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Centimeter" || a == "centimeter" || a == "cm")
{
answer = (Length*2.54);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Meter" || a == "meter" || a == "m")
{
answer = (Length*0.0254);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Kilometer" || a == "kilometer" || a == "km")
{
answer = (Length*0.0000254);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Inch"||  a == "in" || a == "inch")
{
answer = (Length*1);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Foot"||  a == "ft" || a == "foot" || a == "Feet" || a == "feet" )
{
answer = (Length*0.083);
cout << "The answer is: " << answer<<" "<<a;
}
else
{
    cout << "Invalid";
}
}
// From foot, to the desired convertment of the user
if (choose == "Foot" || choose == "ft" || choose == "foot" || choose == "Feet" || choose == "feet" );
{
string a;
float answer;
cout << "   Milimeter (mm) \n   Centimeter (cm) \n   Meter (m)  \n";
cout << "   Kilometer (km) \n   Inch (in) \n   Feet (ft) \n\n";
cout << " Your Answer: ";
cin >> a;

if (a == "Milimeter" || a == "milimeter" || a == "mm")
{
answer = (Length*304.8);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Centimeter" || a == "centimeter" || a == "cm")
{
answer = (Length*30.48);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Meter" || a == "meter" || a == "m")
{
answer = (Length*0.3048);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Kilometer" || a == "kilometer" || a == "km")
{
answer = (Length*0.0003048);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Inch"||  a == "in" || a == "inches")
{
answer = (Length*12);
cout << "The answer is: " << answer<<" "<<a;
}
else if (a == "Foot"||  a == "ft" || a == "foot" || a == "Feet" || a == "feet" )
{
answer = (Length*1);
cout << "The answer is: " << answer<<" "<<a;
}
else
{
    cout << "Invalid";
}
}


cout << " \n Do you want to go back to the Menu?(yes/no):";
    cin >> menu;
    
    
    cout <<" \n\n\n\n";

}





   return 0;
}


