// C++ has a simple mechanism for naming constants or sequences of commands, that is for
// defining macros. You simply use the preprocessor’s #define directive.
// Syntax: #define name substitutetext

// sintab.cpp
// Creates a sine function table
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define PI 3.1415926536
#define START 0.0       // Lower limit
#define END (2.0 * PI)  // Upper limit
#define STEP (PI / 8.0) // Step width
#define HEADER (cout << " ***** Sine Function Table *****\n\n")
int main()
{
    HEADER; // Title
    // Table Head:
    cout << setw(16) << "x" << setw(20) << "sin(x)\n"
         << " -----------------------------------------"
         << fixed << endl;
    double x;
    for (x = START; x < END + STEP / 2; x += STEP)
        cout << setw(20) << x << setw(16) << sin(x)
             << endl;
    cout << endl
         << endl;
    return 0;
}

// If the substitute text is longer than one line, you can terminate the line with a backslash \ and continue the substitute text in the next line, as is illustrated by the macro HEADER on the opposite page

// The rules that apply to naming variables also apply to naming macros.

// However, it is standard practice to capitalize symbolic constants to distinguish them from the names of variables in a program.

// good readability : You can name a macro to indicate the use of the macro 2. easy to modify : If you need to change the value of a constant throughout a program, you simply change the value of the symbolic constant in the #define directive.
