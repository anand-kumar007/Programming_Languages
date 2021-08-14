#include<iostream>
using namespace std;

int main()
{
    //count how many digits a number has
    long  num;
    int totalDigits = 0;
    cout<<"Number : "; cin>>num;

    if(num == 0) cout<<"you have entered 0.\n";
    else
    {
    // to handle the negative numbers
    num = (num>0) ? num : -num;
    while(num>0)
    {
        totalDigits++;
        num = num / 10;

    }

    cout<<"total digits are "<<totalDigits<<endl;
    }
    system("pause>0");
    return 0;
}