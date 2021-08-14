#include<iostream>
using namespace std;

int main()
{
    //list out all numbers btwn 100-500 divisible by 3 and 5
    int num=100;
    while(num<=500)
    {
        if(num%15 == 0) cout<<num<<" ";
        num++;
    }

    system("pause>0");

    return 0;

}