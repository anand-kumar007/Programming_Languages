
#include <iostream> // Declaration of cin, cout
#include <string>   // Declaration of class string
using namespace std;
int main()
{
    // Defines four strings:
    string prompt("What is your name: "),
        name,             // An empty
        line(40, '-'),    // string with 40 '-'
        total = "Hello "; 

    cout << prompt;       // Request for input.

    getline(cin, name);   // Inputs a name in one line

    total = total + name; // Concatenates and assigns strings.

    cout << line << endl 
         << total << endl;

    cout << "Your name is " // Outputs length
         << name.length() << " characters long!" << endl;
    cout << line << endl;
    return 0;
}



//The main aim of the namespace is to understand the logical units of the program and to make the program so robust.

// Namespace allow you to group class, objects and functions.It is used to divide the global scope into the sub - scopes.

/*
We are not allowed to do addition operation on cin.

What is the output of this program?

#include < iostream >

using namespace std;

int main ()

{

int i;

cout << "Please enter an integer value: ";

cin >> i + 4;

return 0;

}
*/