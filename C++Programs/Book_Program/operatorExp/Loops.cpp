// for (; expression;)
// the loop header is equivalent to while (expression).The loop body is executed as long as the test expression is true.

// for (;;)
// This statement causes an infinite loop, since the controlling expression is assumed to be true if expression2 is missing.In the following

// he comma operator has the lowest precedence of all operators — even lower than
//  the assignment operators

// Loops can be nested, that is, the loop body can also contain a loop.The ANSI standard stipulates a maximum depth of 256 nested loops.

#include <iostream>
using namespace std;
const long delay = 10000000L;
int main()
{
    int tic;
    cout << "\nHow often should the tone be output? ";
    cin >> tic;
    do
    {
        for (long i = 0; i < delay; ++i)
            ;
        cout << "Now the tone! \a" << endl;
    } while (--tic > 0);
    cout << "End of the acoustic interlude!\n";
    return 0;
}

// if (int x = func())
// {
//     ...
// } // Here to work with x.

// The return value of the function, func(), is used to initialize the variable x.If this value is not 0, the statements in the next block are executed.The variable x no longer exists after leaving the if statement