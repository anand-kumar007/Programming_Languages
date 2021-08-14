/*
ASCII is American std code for infromation exchange

assign an integer value for each character

used in order to represent characters in your computer

so a computer exchange each character with a number so that

it can understand it and communicate with other computers.

ascii uses 7 bits means 2^7 ie 128 character it can represent 

then there are other standards too like extended ascii utf-8 and utf-16 etcetra.

*/

#include<iostream>
using namespace std;

int main()
{
    cout<< (int)'a'<<endl;
    cout<<int('a') <<endl;

    // can get corresponding character for an integer

    cout<<"74 corresponds to char : "<<char(74)<<endl;
    return 0;
}