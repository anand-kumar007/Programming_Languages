// ball1.cpp
// Simulates a bouncing ball
//Macros for Screen Control
// ---------------------------------------------------
#include <iostream>
#include <string>
using namespace std;
#define DELAY 10000000L         // Output delay
#define CLS (cout << "\033[2J") // Clear screen
#define LOCATE(z, s) (cout << "\033[" << z << ';' << s << 'H')
// Position the cursor in row z and column s
int main()
{
    int x = 2, y = 3, dx = 1, speed = 0;
    string floor(79, '-'),
        header = "**** JUMPING BALL ****";
    CLS;
    LOCATE(1, 25);
    cout << header;
    LOCATE(25, 1);
    cout << floor;
    while (true) // Let the ball "always" bounce
    {            // Terminate by interrupt key (^C)
        LOCATE(y, x);
        cout << 'o' << endl; // Show the ball
        for (long wait = 0; wait < DELAY; ++wait)
            ;
        if (x == 1 || x == 79)
            dx = -dx; // Bounce off
        // a wall?
        if (y == 24) // On the floor?
        {
            speed = -speed;
            if (speed == 0)
                speed = -7; // Restart
        }
        speed += 1; // Acceleration = 1
        LOCATE(y, x);
        cout << ' '; // Clear output
        y += speed;
        x += dx; // New Position
    }
}

// #define SQUARE(a) ((a) * (a))
// This defines a macro called SQUARE() with a parameter a. The name of the macro must
// be followed immediately by a left bracket. When the macro is called, for example
// z = SQUARE(x + 1); o/p 
// z = ((x + 1) * (x + 1));

/*
The program opposite uses macros to change the appearance of the screen. Peripheral
devices, such as the screen or printers, can be controlled by special character sequences
that normally begin with the ESC character (decimal 27, octal 033) and are thus known
as escape sequences. A number of ANSI standard escape sequences exists for screen control.1 See the appendix on Escape Sequences for Screen Control for an overview of the
most important sequences.
CLS is a macro without any parameters that uses the escape sequence \033[2J to
clear the screen. LOCATE is just one example of a macro with two parameters. LOCATE
uses the escape sequence \033[z;sH to place the cursor at the position of the next
screen output. The values z for the line and s for the column require decimal input with
z=1, s = 1 representing the top left corner of the screen or window.
The ball is “thrown in” at the coordinates x = 2, y = 3 and bounces off the “floor”
and the “walls.” In direction x (horizontally) the ball has a constant speed of dx = 1 or
-1. In direction y (vertically) the ball is subject to a constant acceleration of 1,
expressed as speed += 1 
*/