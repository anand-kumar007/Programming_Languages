// object of class string do not necessarily contains '\0' character at the end as in case of C 
#include<iostream>
#include<string>
using namespace std;

string prompt("Enter a line : "), line(30,'*');
int main()
{
    string text;
    cout<<line<<endl<<prompt<<endl;
    getline(cin,text);

    cout<<line<<endl<<text<<endl;
    cout<<"string is : "<<text.size()<<" character long !"<<endl;

    // create two new string from text str 
    string copy1(text), start(text,0,10);

    cout<<"copy of your text is : "<<copy1<<endl;
    cout<<"first 10 character of string are : "<<start<<endl;


  return 0;

  
}

// string class is defined in string.h header file 