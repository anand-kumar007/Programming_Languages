// A function that calls itself is said to be recursive
/*
 Practical Usage
The logic of various solutions to common problems results in a recursive structure, for
example, browsing directory trees, using binary trees for data management, or some sorting algorithms, such as the quick sort algorithm. Recursive functions allow you to formulate this kind of logic in an efficient and elegant manner. However, always make sure
that sufficient memory is available for the stack.
*/
/*
#include <iostream>
using namespace std;
void getput(void);
int main()
{
    cout << "Please enter a line of text:\n";
    getput();
    cout << "\nBye bye!" << endl;
    return 0;
}
void getput()
{
    char c;
    if (cin.get(c) && c != '\n')
        getput();
    cout.put(c);
}

*/