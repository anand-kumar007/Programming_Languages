/*
swap two numbers without using the third temp variable

*/

#include<iostream>
using namespace std;

int main()
{
    int a = 5, b = 6;
    a = a+b;
    b = a - b; //now b is holding a value so easy for further step.
    a = a - b ;

    cout<<a<<endl<<b<<endl;

    return 0;

}