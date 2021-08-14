#include<iostream>
using namespace std;

int main()
{
    // int number;
    // cout<<"enter the number in hex format : ";
    // cin>>hex>>number;
    // //value F will be interpreted as a 25 for the decimal

    // cout<<"\n number in hex : "<<hex<<number<<"\n number in decimal is : "<<dec<<number<<endl;

    float f1;
    cout<<"input the floating number : ";
    cin>>f1;
    // since >> interpret input as decimal-floating-point-number, if variable is floating type (flaot, double or long double), floating-point-numbers can be input as fixed and exponential form. hence 123,-22.0, or 3e10 are valid

    cout<<"you enetered : "<<fixed<<f1;


}