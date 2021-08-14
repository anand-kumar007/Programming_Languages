/*
reads several lines and output them in the reverse order
*/
/*
Within the string class the operators + and += are defined for concatenating, 

and the operators ==, !=, <, <=, >, and >= are defined for comparing strings.
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string text, temp;
    cout<<"Enter a line and terminate with an empty line : ";
    
    while(true)
    {
        getline(cin,temp);
        if(temp.length() == 0)
         break;
        //add the newly entered line at the begininng(concatination)
        text = temp + "\n" + text; 
    }

    cout<<"reversed text : "<<text<<endl;


    //note that str1 = "good"+ "morning" is invalid;
    //atleast one should be string object to carry out concat using + operator.

    string st1 = "good";
    cout<<st1+" morning"<<endl;
    // cout<<("hey " + "there")<<endl; error

}