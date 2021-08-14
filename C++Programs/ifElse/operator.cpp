/*
just different types of operators in c++
arithematic
logical
comparison
ternary
unaray
etcetra
*/

#include<iostream>
using namespace std;

int main()
{
    // cout<<4+2<<endl;
    // cout<<5/2<<endl;
    // cout<<5.0/2<<endl;
    // cout<<5%2<<endl;

    //++,--
    // int counter =5;
    // cout<<counter++<<endl;
    // cout<<++counter<<endl;
    // cout<<counter--<<endl;
    // cout<<--counter<<endl;

    //<,>,<=,>=,==,!=
    int i =3, j = 5;
    // cout<<(i>j)<<endl; //0
    // cout<<(i<j)<<endl; //1
    // cout<<(i==j)<<endl; //0
    // cout<<(i!=j)<<endl; //1
    // cout<<(i>=j)<<endl; //0
    // cout<<(i<=j)<<endl;   //1 


    // &&, ||, !
    // cout<<(i==3 || j==4)<<endl; //1
    // cout<<(i==3 && j==4)<<endl; //0
    // cout<<(i!=1)<<endl; //1


    // =,+=,-=,%=,/=
    int x =5 , y =3;
    x += y;
    cout<<x<<endl; //8
    x -= y;
    cout<<x<<endl; //5
    x %= y ;
    cout<<x<<endl; //2
    return 0;
}