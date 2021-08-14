// function overloading arg diff or return type diff.
// name should be the same and the arguments should be different.

#include <iostream>
using namespace std;
int sum(int a, int b)
{ 
    return a+b ;
}

int sum(double a, double b)
{
    return a + b ;
}


int main()
{
   cout<<sum(10,102)<<endl;
   cout<< sum(10.2,20.34);
    system("pause>0");
    return 0;
}
