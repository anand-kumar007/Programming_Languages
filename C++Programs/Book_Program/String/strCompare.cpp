/*
Strings are compared lexicographically, that is character by character, beginning at the
first character. To decide whether a single character is smaller, greater, or identical to
another character, the character codes of the character set are compared. Thus, if you are
using the ASCII character set, the letter 'A' (ASCII code 65) is smaller than the letter
'a' (ASCII code 97).
*/

/*
s1 == s2 is true only if both strings are identical; this requires that both strings
are exactly the same length.

s1 < s2 is true only if the first character in s1 that differs from the corresponding character in s2 is smaller than the corresponding character in s2,
or if s2 is simply an extension of s1
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string line1, line2 , key = "Y";
    int len1,len2;

    cout<<"enter two lines : ";
    while(key == "Y"|| key == "y")
    {
        getline(cin,line1);
        cin.sync();
        cin.clear();
        getline(cin,line2);

        if(line1 == line2)
        cout<<"both lines are same "<<endl;

        else
        {
            cout<<"smaller(dict order ) line is : "<<(line1 < line2 ? line1 : line2)<<endl;
            len1 = line1.length();
            len2 = line2.length();

            if(len1 == len2)
            {
                cout<<"both lines have same length"<<endl;
            }
            else
            {
                cout<<"shorter line is  "<<( len1 < len2 ? line1 : line2 )<<endl;
            }
        }
        cout<<"repear (y/n) : ";
        do {
            getline(cin,key);
        }while(key != "y" && key !="Y" && key !="n" && key !="N");
    }

    return 0;
}