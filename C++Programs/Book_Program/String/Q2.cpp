#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str("steve jobs is legend");
    string::iterator it;
    str.erase(str.begin() + 5, str.end() - 7);
    cout << str << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str("Microsoft");
    for (size_t i = 0; i < str.length();)
    {
        cout << str.at(i - 1);
    }
    return 0;
}

//runntime error.
// This program will terminate because the cout element is out of range.