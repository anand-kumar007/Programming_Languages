/*
find() -->locate first occurance of string to be searched
rfind() -->loacte last occurance of string to be searched
*/

/*
When replacing in strings, a string overwrites a substring. The string lengths need not be
identical.
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string st1 = "This was an easy ride. This is so good.";
    int i = st1.find("This");
    cout<<i<<endl;
    //if not found -1 would be returned and character by character comparison happens so case sensitive also.

    i = st1.rfind("This");
    cout<<"--\n"<<i<<endl;


    //replace

    string s1("Here comes Mike!"),
        s2("my love?");
    s1.replace(11, 4, s2, 0, 7);  // look carefully ! and ? replacement

    cout<<"s1 now is : "<<s1;
}