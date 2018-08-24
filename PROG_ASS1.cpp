/*
*Name   <Asuncion, Jacob Abraham D.>
*Date   < July 23, 2018 >
*Module Name    < Bank Account Creator>
*Description    < To make an account for the user by inputting information >
*/






#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string FN;
string LN;
char MI;
bool is4digits (string pin)
{
    bool status = true;
    if  (pin.length() != 4) {
        status = false;
    }
    return status;
}

int main()
{
cout << ("   CREATE YOUR BANK ACCOUNT\n");
cout << ("Enter first name: ");
cin >> FN;
cout << ("Enter last name: ");
cin >> LN;
cout << ("Enter middle initial: ");
cin >> MI;

    string Pin;
    cout << "Enter your 4 pin password: ";
    cin >> Pin;

    if (is4digits(Pin) == 1)
        cout << "You have created your account!\n";
    else
        cout << "PIN Incorrect.\n";

    if (is4digits(Pin) == 1)
        cout << "Your account now holds: $0.\n";
    else
        cout << "System off.";

    if (is4digits(Pin) == 1)
        cout << "Here is your 16 digit card number.\n";
    else
        cout << "Null\n";

    srand(time(0));

    for(int x = 1; x<17;x++){
        cout << 1+(rand()%6) << endl;

    }

    if (is4digits(Pin) == 1)
        cout << "Thank you for entrusting your money on us.\n";
    else
        cout << "Null\n";

    if (is4digits(Pin) == 1)
        cout << "Your money will be ensured!";
    else
        cout << "Null\n";

    return 0;
}
