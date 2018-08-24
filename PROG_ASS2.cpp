/*
*Name   <Asuncion, Jacob Abraham D.>
*Date   <July 27, 2018>
*Module Name    < Fruit Stand >
*Description    < Allows the user to input desired quantity and the price to be subtracted in the given amount of money. >
*/


#include <iostream>
#include <cmath>
using namespace std;

double Mangoes;
double Kiwi;
double Oranges;
double Apples;
double wallet = 500;
float user_choice;


int main()
{

    while (wallet >= 0)
    {
        cout << "\n\n Fruit Stand \n\n";
        cout << "This is what we have for you.\n\n";
        cout << "1   Mangoes   $15.50\n";
        cout << "2   Kiwi      $13.25\n";
        cout << "3   Oranges   $11.02\n";
        cout << "4   Apples    $9.75\n\n";
        cout << "  You have:\n\n" << Mangoes  << " Mangoes\n" << Kiwi  << " Kiwi\n" << Oranges  << " Oranges\n" << Apples  << " Apples\n\n";
        cout << "You have a balance of $" << wallet << ".\n\n";
        cout << "Type the number if the fruit that you want or type 5 to check out.\n\n";
        cin >> user_choice;

        if (user_choice == 1)
        {
            Mangoes++;
            wallet = wallet - 15.50;
        }

        if (user_choice == 2)
        {
            Kiwi++;
            wallet = wallet - 13.25;
        }

        if (user_choice == 3)
        {
            Oranges++;
            wallet = wallet - 11.02;
        }

        if (user_choice == 4)
        {
            Apples++;
            wallet = wallet - 9.75;
        }

        if (user_choice == 5)
        {
            cout << "\n\n Thank you!\n\n";
            cin.get();
            return 0;
        }
    }

    cin.get();
    return 0;
}
