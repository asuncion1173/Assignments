/*
*Name   <Asuncion, Jacob Abraham D.>
*Date   <August 21, 2018>
*Module Name    <Percentage Error Finder>
*Description 	<A short story of where the characters in it finds the percentage error of the users input>
*/


#include <iostream>
#include <cmath>

using namespace std;




int main()

{
	float expval, accval;
	double PE;
	string object;
	
	// Start of the Program
	cout << "\t\t The estimated and the weighed \n\n";
	string menu = "yes";
	while (menu=="yes"||menu=="Yes"||menu=="y")
	
{
	cout << " John dared Donny that if he (Donny) could estimate the weight of any kind and make the percentage error of his estimation and right value below 10%, John will give him $100,000.\n\n";
	cout << " Donny agreed to this dare and picked up a/an ______________. \n";
	cout << "  What did Donny picked up to estimate? ";
	// Users input will be used in the next lines
	cin >> object;
	cout << "\n Donny now picked up the " << object << ". " << "He estimated that the weight of the " << object << " is ____________ kg.\n";
	cout << "  How heavy did Donny estimate the " << object << "? (Dont need to indicate unit) ";
	// Users input will be used in the next lines
	cin >> expval;
	cout << "\n Now they went to the weigh scale and asked the clerk to check the weight. The clerk checked it and got ___________kg.\n";
	cout << "  What weight did the clerk got from the " << object << "? ";
	// Users input will be used in the next lines
	cin >> accval;
	cout << "\n\n";
	
	// Programmer used the formula in finding the Perectage Error of two values
	PE=abs((expval-accval)/(accval))*100;
	
	cout << "Estimated: " << expval << " kg" << "\nWeighted: " << accval << " kg" << "\n\n";
	cout << "As they got their data, they now used the formula: ";
	cout << "((Estimated Value - Weighing Scale Value) / Weighing Scale Value ) X 100 =  Percentage Error \n\n";
	cout << "The Percentage Error is: " << "((" << expval << "-" << accval << ") / "<< accval << ") X 100 = " << PE << "%\n\n";
	
	if (PE < 10)
	cout << "Donny has won the dare!\n\n";
	else
	cout << "Donny lost!\n\n";
	
	
	
	cout << "  Would you like to input again? (yes/no): ";
	cin >> menu;
	if (menu=="no"||menu=="No"||menu=="n")
		cout << "\n\n Thank you for using this program";
	else
	cout << "\n\n\n";
	
	
}
	
	return 0;
}
