#include<iostream>
using namespace std;

int main()
{
    int n = 15;
    int space = n;
    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<space-1;j++)
        cout<<" ";

        for(int j =0; j<i+1; j++)
        cout<<"* ";
        space--;
        printf("\n");

    }

    return 0;
}