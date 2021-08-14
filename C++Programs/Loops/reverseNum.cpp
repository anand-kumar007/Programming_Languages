#include<iostream>
using namespace std;

int main()
{
    int num;
    int rnum=0,digit=0; // rnum 0 -- 0*10+3=3 , 3*10+2=32 , 32*10+1 = 321

    cout<<"Number : "; cin>>num; //123
    int temp = num;
    if(num == 0) cout<<"you entered zero ";
    else
    {   
        num = (num>0)? num : -num;
        while(num>0)
        {
            digit = num % 10;  //last digit
            rnum = rnum * 10 + digit;
            num = num / 10;
        }
    }
    if(temp<0)
    cout<<"reversed number : "<<-rnum;
    else
    cout << "reversed number : " << rnum;

    system("pause>0");
    return 0;
}