/*
manipulators are functions which can be inserted into input or output stream.

Formatting flags defined in the parent class ios determine how characters are input or
output. 
each flag has default value like integers are displayed as decimal, positive numbers are displayed without sign.

It is possible to modify individual formatting flags. The methods setf() and
unsetf() can be used for this purpose.

or simply we make use of manipulators to carryout the task.

*/
/*
--------------------------------------------
  manipulator   |     effect

  oct                  octal base
  hex                  hexadecimal base
  dec                  decimal base

  showpos              generate + sign with positive numbers
  noshowpos            default, no sign for positive numbers

  uppercase             in hexadecimal output generate uppercase letters
  nouppercase           default, generate lowecase letter in hexadecimal output.

*/

#include<iostream>
using namespace std;

int main()
{
    int number;
    string prompt("Enter a number : ");
    cout<<prompt;

    cin>>number;

    cout<<"\nDecimal \tOct  \tHex \n"
        <<dec<<number<<"  \t\t"
        <<oct<<number<<"  \t"
        <<hex<<uppercase<<number<<" "<<endl;

    cout<<"\n--------\n";
    cout<<showpos<<number;
}
