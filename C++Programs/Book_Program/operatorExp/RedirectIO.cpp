// lines.cpp
// A filter that numbers lines.
// The program, reads characters from standard input, processes
// them, and sends them to standard output.Programs of this type are known as filters

#include <iostream>
#include <iomanip>
#include <string>
          using namespace std;
int main()
{
    string line;
    int number = 0;
    while (getline(cin, line)) // As long as a line
    {                          // can be read.
        cout << setw(5) << ++number << ": "
             << line << endl;
    }
    return 0;
}