#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int height, width;
    char symbol;
    cout<<"height : "; cin>>height;
    cout<<"width : "; cin>>width;
    cout<<"symbol : "; cin>>symbol;

    for(int i=0; i<height;i++)
    {
        for(int j=0; j<width;j++)
           cout<<setw(2)<<symbol;
           cout<<endl;
    }

    system("pause>0");
    return 0;
}

// setw --> sets the width of item that comes after it like 4 width for the sybmol etcetra.