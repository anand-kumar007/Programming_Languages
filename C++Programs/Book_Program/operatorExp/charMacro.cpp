/* charcter macro
  macro   |   meaning
isalpha(c) -- c is a letter
islower(c) -- c is lowecase letter
isupper(c) -- c is uppercase letter
isdigit(c) -- c is a decimal digit
isalnum(c) -- c is a letter or digit
isspace(c) -- c is a space letter
isprint(c) -- c is printable letter
toupper(c) --  name suggests
tolower(c) -- name suggests
following macros are defined in header file "ctype.h" and "cctype".

*/

#include<iostream>
#include<cctype>
using std :: cout;
using std :: cin;

int main()
{
    char ch1;
    cout<<"enter the ch1 : ";
    // cin>>ch1;
    cin.get(ch1);  //to take space also
    char temp;
    temp = toupper(ch1);
               
    cout<<temp;
    cout<<"\n---islower--\n";
    //returns 0 if not true otherwise some positive number
    cout<<islower(ch1);
    cout << "\n---isupper--\n";

    cout<<isupper(ch1);

    cout << "\n---isdigit--\n";
    cout<<isdigit(ch1);

    cout << "\n---isspace--\n";
    cout << isspace(ch1);

    cout << "\n---isprint--\n";
    cout << isprint(ch1);
}
