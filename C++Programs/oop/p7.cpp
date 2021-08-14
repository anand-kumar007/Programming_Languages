// pure virtual function and abstract classes.

// abstract class is one that has atleast one pure virtual function.
#include <iostream>
using namespace std;

class Instrument
{
public:
    virtual void MakeSound()= 0; 
    // this is pure virtual functionn now which means it says all my derived classes should use their own implementation of mine.
};

class Accordian : public Instrument
{
public:
    void MakeSound()
    {
        cout << "Accordian Playing.......\n";
    }
};

class Piano : public Instrument{
    // have to override the MakeSound() in order to create objects of Piano class.

    void MakeSound(){
        cout<<"Piano Playing......\n";
    }

};

int main()
{
    Instrument *I1 = new Accordian();
    // I1->MakeSound();

    Instrument *I2 = new Piano();
    // I2->MakeSound();

    Instrument * instruments[2] = {I1,I2};

    for(int i=1; i<=2;i++)
    instruments[i]->MakeSound();

    system("pause>0");
    return 0;
}