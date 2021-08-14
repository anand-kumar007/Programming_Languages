#include<iostream>
using namespace std;

int main()
{
    cout << showpos << 123<<" ";
    cout<<829<<" ";
    cout<<299<<" ";
    cout<<"\n.........\n";
    cout << noshowpos << 10 << " ";
    cout << 11 << " ";
    //

    /* now a days showpos and noshowpos functions are directly supported by the compilers
     but with old compilers we have to set the flag explicitly */
     cout<<"\n---------\n";
     cout<<showpos<<300<<endl;
     cout  << 123 << endl;
     cout << noshowpos << -123 << endl;

     //  however with old compilers
     // advantage here is once we set the flag all other cout will also follow the flag until it is unsetted.
     // same like using the showpos and noshowpos functions' property.

     cout.setf(ios::showpos);
     cout << 829 << endl;
     cout << 799 << endl;

     cout.unsetf(ios::showpos);
     cout << 90 << endl;
     cout << 99 << endl;
     cout << -100 << endl;
}

// The operators >> and << format the input and/or output according to how the flags in the base class
// ios are set

// The manipulator showpos is a function that calls the method cout.setf(ios::showpos);,
// ios::showpos being the flag showpos belonging to the ios class