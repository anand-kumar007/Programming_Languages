#include <iostream> // Declaration of cin, cout
#include <iomanip>  // For manipulators being called
// with arguments.
#include <string>
using namespace std;
int main()
{
    int number = ' ';
    cout << "The white space code is as follows: "
         << number << endl;
    char ch;
    string prompt =
        "\nPlease enter a character followed by "
        " <return>: ";
    cout << prompt;
    cin >> ch; // Read a character
    number = ch;
    cout << "The character " << ch
         << " has code : " << number << endl;
    cout << uppercase // For hex-digits
         << " octal \tdecimal hexadecimal\n "
         << oct << setw(8)<<left << number
         << dec << setw(8) << left<< number
         << hex << setw(8) <<left<< number << endl;

    // """ outputting string values """

    string s("spring flowers ");
    cout<<right<< setfill('?')   // Fill character ?
         << setw(20) << s; // Field width 20

    // boolean values outputting << generally output bool values as integer 0 being false and 1 as true.
    // to change this behaviour either cout.setf(ios::boolalpha) or boolalpha manipulator directly

    cout<<"\n----------\n";
    bool ok = true;
    cout << ok << endl               // 1
         << boolalpha << ok << endl; // true
    return 0;
}