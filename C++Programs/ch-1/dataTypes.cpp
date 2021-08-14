#include<iostream>
using namespace std;

int main()
{
    int yearOfBirth = 2000; //for whole numbers
    char gender = 'f';
    bool isOdlerThan18 = true;
    float averageGrade = 4.5; //for decimal or real numbers
    double balance = 47474729292; //double of float and for storing much larger values.

    cout<<"Size of int is "<<sizeof(int)<<" bytes\n";
    cout << "Size of char is " << sizeof(char) << " bytes\n";
    cout << "Size of float is " << sizeof(float) << " bytes\n";
    cout << "Size of double is " << sizeof(double) << " bytes\n";
    
    cout<<"--------------------------------------\n";
    cout<<"Int min value is "<<INT32_MIN<<endl;
    //-1,-2,-3,.........,-2147483648
    cout<<"Int max value is "<<INT32_MAX<<endl;
    //0,+1,+2,+3,...........,+214783647




    unsigned int num = 3883838; //for positive whole numbers only and uses all 4 bytes(32bit)
                                    //storing postitive numbers only.
    cout<<"size of unsigned int is "<<sizeof(unsigned int)<<endl;  
    cout<<"unsigned int max value is "<<UINT32_MAX<<endl;
    // 0,1,2,3,4,.................,4294967295
     
    return 0;
}



/*

use camelcase notation
give meaningful name to variables
make use of proper datatype
follow the guidelines for variable declaration

*/