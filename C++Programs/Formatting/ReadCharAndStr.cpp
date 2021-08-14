// You can use the methods get() and put() to read or write single characters.

//The get() method reads the next character from a stream and stores it in the given char variable.
// Example : char ch;
// cin.get(ch);

// If the character is a white space character, such as a newline, it will still be stored in the ch variable.

// To prevent this from happening you can use cin >> ch;  to read the first non - white space character.


// The get() method can also be called without any arguments.In this case, get()
//returns the character code of type int.Example : int c = cin.get();

//-----------------------------------------------------------------------

// The put() method can be used for unformatted output of a character. The character to be output is passed to put() as an argument.

// Example: cout.put('A');
// This statement is equivalent to cout << 'A';


//  Reading a Line

// The >> operator can only be used to read one word into a string.If you need to read a whole line of text, you can use the global function getline(), which was introduced earlier in this chapter.

//Example : getline(cin, text);


// This statement reads characters from cin and stores them in the string variable text
//     until a new line character occurs.However,


//you can specify a different delimiting character by passing the character to the getline() function as a third argument.

//Example : getline(cin, s, '.');
// The delimiting character is read, but not stored in the string.Any characters subsequent
// to the first period will remain in the input buffer of the stream.



#include<iostream>
using namespace std;

// int main()
// {
//     char ch1,ch2;
//     cout<<"enter ch1 : ";
//     cin.get(ch1);
//     // ch1 = cin.get()
    
//     //how ever the above get() will store the newline or whitespace also in ch.

//     //to read firstNonWhite space character we use cin>>ch;

//     cout<<"enter ch2 : ";
//     cin>>ch2;
//     // cout << "ch1 is : " << ch1;
//     cout<<"ch1 is :";
//     cout.put(ch1);
//     cout<<"\nch2 is : "<<ch2;

    
// }

int main()
{
    /* reaing a line */

    string s;
    cout << "enter a string : ";
    // cin>>s;
    // cout<<"using the cin : s is : "<<s;

    // getline(cin, s);
    getline(cin,s,'#');
    cout << "string s is : " << s;
}