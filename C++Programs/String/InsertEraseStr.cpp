/*
If you need to insert only part of a string into another string, 
you can pass two additional arguments to the insert() method, 
the starting position and the length of the
string.

*/
/*
You can use the erase() method to delete a given number of characters 
from a string.The starting position is supplied as the first argument 
and the number of characters to be
erased is the second argumen
*/

#include<iostream>
#include<string>
    using namespace std;

int main()
{
    string str1, str2 ="AwesomeNews";
    str1 = "Miss Summer";
    
    str1.insert(5,"Siya ");
    // The string "Siya " is inserted into the string str1 at position 5, that is in front of the
    // 'S' character in "Summer".
    cout<<"str1 now is : "<<str1<<endl;

    //only a part of string to be inserted into str1
    str1.insert(5,str2, 0,7);   // from 0-7 character to be inserted from str2 to str1
    cout<<"str1 now is : "<<str1<<endl;


    //erasing the charactes

    str2.erase(3,4); //would erase 4 characters from 3th position(from s----of AwesomeNews)
    cout<<"str2 now is : "<<str2<<endl;

    // would erase from 10th position to last
    str1.erase(10);
    cout<<"str1 now is : "<<str1<<endl;
}