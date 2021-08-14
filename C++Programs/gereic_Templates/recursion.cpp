// a function which calls itself is called recursive function.
#include<iostream>
using namespace std;

//sum the numbers btwn m - n ;
void sumNum(int m , int n)
{
    int sum = 0;
    for(int i = m+1; i<n; i++)
    {
        sum += i;
    }

    cout<<"sum of numbers btwn "<<m <<" and "<<n<<" is : "<<sum;
}

// recursive function for the same task
int RsumNum(int m, int n)
{
    if(m==n)
    return m;

    return m + RsumNum(m+1,n);

    
}

int main()
{
    sumNum(10,15);
    cout<<endl;
    cout<<"usign Recursive function the sum is : "<<RsumNum(20,30);
    system("pause>0");
    return 0;
}