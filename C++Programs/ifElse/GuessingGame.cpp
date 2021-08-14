/*
simple guessing game where host enter the number
clear that number from console then guest would guess
what host might have entered

using ternary operator

*/

#include<iostream>
using namespace std;

int main()
{
    int hostUserNum, guestUserNum;
    cout<<"Host : ";
    cin>>hostUserNum;
    system("cls");
    cout<<"Guest : ";
    cin>>guestUserNum;

   /* if(hostUserNum== guestUserNum)
    cout<<"correct";
    else
    cout<<"failed"; */

    (hostUserNum == guestUserNum)?cout<<"correct!":cout<<"failed!";

        system("pause>0");
    return 0;
}