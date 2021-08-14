// How is an expression with multiple operators evaluated ?
// using the precedence 


//opertor precedence determines order of evaluation. How operators and operands ar grouped.

//when two operators have the same precedence then we see the associativity.

// Multiple assignments, which are always evaluated from right to left, are also possible.
// Example : i = j = 9;
// In this case the value 9 is first assigned to j and then to i

#include<iostream>
using namespace std;
int main()
{
    int x, y;
    x = 5;
    y = ++x * ++x;
    cout << x << y;
    x = 5;
    y = x++ * ++x;
    cout << x << y;
    return 0;
}

// A.749736B. 736749C. 367497D. none of the mentioned

// A 
