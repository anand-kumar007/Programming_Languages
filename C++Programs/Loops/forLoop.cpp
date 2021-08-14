#include<iostream>
using namespace std;

int main()
{
    int number;  //6
    long long int factorial=1; //6*(6-1)*(6-1-1)....*1
    int i;
    cout<<"number : "; cin>>number;
    int temp = number;
    // for(; number!=1;)
    // {
    // factorial = factorial *number;
    // number--;

    // }

    for(int i =1 ; i<=number;i++)
        factorial = factorial*i;
        
    cout<<"factorial : "<<factorial;

    system("pause>0");
    return 0;
}