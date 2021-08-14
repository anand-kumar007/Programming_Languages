// pointers with array



#include<iostream>
using namespace std;

int main()
{
    // int luckyNumbers[5] = {1, 5, 15, 40, 35};
    int luckyNumbers[5] ;

    // cout << luckyNumbers << endl;
    // cout << &luckyNumbers[0] << endl;  // same thing.

    // cout <<  luckyNumbers[2]  << endl;
    // cout<< *(luckyNumbers + 2) <<endl;  //both are same.

    for(int i =0 ; i<5;i++)
    {
        cout<<"number : ";
        cin>>luckyNumbers[i];
    }

    cout<<"\n------Numbers are-----\n";
    for (int i = 0; i < 5; i++)
    {
        cout << *(luckyNumbers + i)<<" ";
        
    }

    system("pause>0");

}