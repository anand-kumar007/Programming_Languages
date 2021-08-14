// virtual functions

// a function which is defined in base class and then redefined in the derived class
// it gives you the ability of runtime polymorphism.
// like the most derived implementation of that function would be executed even by the reference or pointer of the base class.

#include<iostream>
using namespace std;

class Instrument {
    public:
   virtual void MakeSound()
    {
        cout<<"Instrument Playing......\n";
    }
};

class Accordian : public Instrument{
    public:
    void MakeSound()
    {
        cout<<"Accordian Playing.......\n";
    }
};


int main()
{
    Instrument I1;

    I1.MakeSound();

    Accordian A1;
    A1.MakeSound();

    cout<<"\n-----\n";

    Instrument * ptr = new Accordian();
    ptr->MakeSound();

    system("pause>0");
    return 0;
}


/*
 virtual function says hey if there is any redefinition of mine in the derived class then use that.
 otherwise use mine.
*/