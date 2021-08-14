#include <iostream>
using namespace std;

void checkPrime(int number)
{
    if(number <=0 || number ==1)
    {
        cout<<"not a prime";
        return ;
    }
    bool flag = false;
    for(int i =2; i<number; i++)
    {
        if(number % i == 0)
        {
            flag = true;
            break;
        }
    }

    if(flag==false)
    cout<<number<<" is prime "<<endl;
    else
    cout<<number<<" is not prime"<<endl;
}

int main()
{
    int number;
   cout<<"enter number : "; cin>>number;
   checkPrime(number);
    system("pause>0");
    return 0;
}
