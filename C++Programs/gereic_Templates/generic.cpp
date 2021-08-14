/*
when the logic is same but the data type is different then we make use of generic

also in function types of parameters used had to be hardcoded but it's not that efficient.
instead make use of generic.
generic are implemented in c++ using templates
*/

#include<iostream>
using namespace std;

template <class T> //like i am defining a new type T
// template <typename T> either of the two can be used.
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
// now the above function is a generic function which can be used with different data types.

int main()
{
    int a = 5, b = 10 ;
    cout<<a<<" - "<<b<<endl;
    // Swap(a,b);  or
    Swap<int>(a,b);
    cout << a << " - " << b << endl;

    char c = 'c', d = 'd';
    cout << c << " - " << d << endl;
    Swap(c,d);
    cout << c << " - " << d << endl;

    system("pause>0");
    return 0;
}