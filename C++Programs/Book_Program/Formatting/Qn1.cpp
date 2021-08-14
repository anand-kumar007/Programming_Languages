#include <iostream>
using namespace std;

int main()
{
    char Text[] = "Cpp@Buzz";

    for (int I = 0; Text[I] != '\0'; I++)
    {
        if (!isalpha(Text[I]))
            Text[I] = '*';
        else if (isupper(Text[I]))
            Text[I] = Text[I] + 1;
        else
            Text[I] = Text[I + 1];
    }
    cout << Text;

    return 0;
}

// What is the best way to convert int to string according to C++ standard?
//(A) char *intStr = itoa(a); string str = string(intStr);
// (B) std::string s = std::to_string(42);

// Answer: (B)

// What is true ? when we explicitly declare a function to use the __fastcall convention.

// (A) Arguments are placed in registers
// (B) Arguments are placed in stack
// (C) Arguments are placed in Heap

// Answer(A)