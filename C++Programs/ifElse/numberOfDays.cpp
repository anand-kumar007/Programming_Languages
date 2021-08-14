/*
user has to enter year and month name then we'll tell how many days that particular month of that year contains.
*/

#include<iostream>
using namespace std;

int main()
{
    int year,month;
    cout<<"year,month : ";
    cin>>year>>month;

    switch (month)
    {
    case 2:
        (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 
        cout << "29 days" : cout << "28 days"; break;
    case 1: 
    case 3:
    case 5:
    case 8:
    case 10:
    case 12: 
        cout << "31 days"; break;

    case 4:
    case 6:
    case 7:
    case 9:
    case 11:
        cout << "30 days"; break;

    default:
        break;
    }

    system("pause>0");

    return 0;
}
