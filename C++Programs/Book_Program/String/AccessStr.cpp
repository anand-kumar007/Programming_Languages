/*
s[s.length() –1] = 'g';
overwrites the last character in the string s
*/
/*
In contrast to the subscript operator, the at() method performs range checking.
If an invalid index is found an exception occurs and 
the program will normally be terminated at this point. 

s.at(i) = 'X'; is equivalent to s[i] = 'X';
*/

#include <iostream>
#include <string>
#include <cctype> // Macro isspace()
using namespace std;
int main()
{
    string header(" **** Counts words ****\n"),
        prompt("Enter a text and terminate"
               " with a period and return:"),
        line(60, '-'),
        text; // Empty string
    cout << header << endl
         << prompt << endl
         << line << endl;
   
    getline(cin, text, '.'); // Reads a text up to
    // the first '.'
    
    // Counts words and white space characters
    int i,              // Index
        nSpace = 0,     // Number of white spaces
        nWord = 0;      // Number of words
    bool fSpace = true; // Flag for white space


    for (i = 0; i < text.length(); ++i)
    {
        if (isspace(text[i])) // white space?
        {
            ++nSpace;
            fSpace = true;
        }
        else if (fSpace) // At the beginning of a word?
        {
            ++nWord;
            fSpace = false;
        }
    }

    cout << line // Outputs the result.
         << "\nYour text contains (without periods)"
         << "\n characters: " << text.length()
         << "\n words: " << nWord
         << "\n white spaces: " << nSpace
         << endl;
    return 0;
}