//like you are given 3 chances to unlock your phone then it asks you to wait to some times if you make three unsuccessfull attemps

#include<iostream>
using namespace std;

int main()
{
    int pin,userPin=1993,wrongAttempts=0;

    do{
        cout<<"PIN : "; cin>>pin;
        if(userPin != pin)
        wrongAttempts++;
        
    }while(wrongAttempts<3 && userPin != pin);

   
    if(wrongAttempts>=3) cout<<"try again later";
    else
    {
        cout << "welocome pin is correct";
    }

    system("pause>0");

    return 0;
}