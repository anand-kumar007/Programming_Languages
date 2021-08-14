#include <iostream>
using namespace std;

// recursive function for factorial of a number
long long Rfactorial(int number)
{
    if (number==1)
    return number;
    return number * Rfactorial(number-1);
       
}

int main()
{
    int number;
    cout<<"number : "; cin>>number;
    cout<<"factorial using recursion is : "<<Rfactorial(number)<<endl;
    
    system("pause>0");
    return 0;
}