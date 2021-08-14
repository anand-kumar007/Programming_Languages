/*
A string, that is, an object belonging to the string class, can be initialized when you
define it using
■ a predefined string constant
■ a certain number of characters
■ a predefined string or part of a string.
*/
/*
If a string is not initialized explicitly, an empty string with a length of 0 is created.

The length of a string, that is, the current number of characters in the string, is stored
internally and can be accessed using the length() method or its equivalent size()
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string st1;
    cout<<"length of uninitialized string is : "<<st1.length()<<"--"<<st1.size()<<endl;
    cout<<"value of uninitialized string is : "<<st1<<endl;

    string st2("Good Morning");
    string st3(4,'j');
    cout<<"st2 is :"<<st2<<endl;
    cout<<"st3 is : "<<st3<<endl;

    string st4(st2,0,4);
    cout<<"st4 is : "<<st4<<endl;

    string st5(st3);
    cout<<"st5 is : "<<st5<<endl;
}