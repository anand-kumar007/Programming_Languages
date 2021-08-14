#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int length;
    char symbol;
    cout << "length : ";
    cin >> length;

    cout << "symbol : ";
    cin >> symbol;

    for (int i = 1; i <= length; i++)
    {
        for(int j = 1; j<=i;j++)
        cout<<setw(3)<<symbol;

        cout<<endl;
    }

    cout<<endl;
    for (int i = length; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << setw(3) << symbol;

        cout << endl<<endl;
    }

    system("pause>0");
    return 0;
}

/*
we know that for creating
=====================
+
+ +
+ + +
+ + + +
+ + + + +
====================
our inner loop  is running only till the current value of the outer loop.
1 time
2 time
3 time
4 times respectively.

*/

/*
=====================
+ + + + +
+ + + +
+ + +
+ +
+
====================
for drawing this simply logic is n times then inner loop will run only till current value of outer loop but we will initialize the first one with the highest val first then decrement.
*/

