/*
When you assign a value to a string, the current contents are replaced by a new character
sequence. You can assign the following to a string object:
■ another string
■ a string constant or
■ a single character.
The memory space required is adjusted automatically.
*/
#include <iostream>
#include <string>
using namespace std;
string line(30,'-');
int main()
{
    string st1("Hello"),st2("HeLLo");
    const string st3 = "Good";

    cout<<"str1 : "<<st1<<"\nstr2 : "<<st2<<"\nstr3 : "<<st3<<endl;

    cout<<line<<endl;

    //assigning another string
    st1 = st2;
    cout<<"st1 now is : "<<st1<<endl;

    // assingning str const 
    st1 = st3;
    cout<<"st1 now is : "<<st1<<endl;

    //assigning a character
    st1 = 'C';
    cout<<"st1 now is : "<<st1<<endl;


}