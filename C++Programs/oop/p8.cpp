//abstraction in c++ with real life example.
// abstraction means showing the relevent info while hiding the complex info etc.

//like for making a coffee abstraction is put in water, coffee and press the button.
// we are unaware of the internal complex implementation for making the coffee.

// same concept is applied here in the programming.

// we can't create objects of abstract classes but we can create pointers of abstract classes.

#include<iostream>
using namespace std;

class SmartPhone{
    public:
        virtual void takeSelfie() = 0;
        virtual void MakeCall() = 0;
};

class Android : public SmartPhone{

    public:
    void takeSelfie(){
        cout<<"Android Selfie"<<endl;

    }
    void MakeCall()
    {
        cout << "Android Calling" << endl;
    }
};
class IPhone: public SmartPhone
{

public:
    void takeSelfie()
    {
        cout << "Iphone Selfie"<<endl;
    }
    void MakeCall()
    {
        cout << "Iphone Calling" << endl;
    }
};
int main()
{
    SmartPhone * s1 = new Android();
    s1->takeSelfie();
    s1->MakeCall();

    SmartPhone *s2 = new IPhone();
    s2->takeSelfie();
    system("pause>0");
    

}

