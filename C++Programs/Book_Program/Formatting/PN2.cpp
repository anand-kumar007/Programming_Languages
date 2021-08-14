#include<iostream>
using namespace std;

int main()
{
    //reading,writing the character, using get and put
    char ch1;
    cout<<"enter ch1 : "; 
    // cin.get(ch1);
    ch1 = cin.get();

    cout<<"ch1 is : ";
    cout.put(ch1);


    //reading a line using getline() 
    cin.sync();  //clear the buffer and wait for the next input
    // cin.clear();  //clear the error flag

    string s1;
    cout<<"\npress newline : ";
    cin.get(); //read the newline without saving it.

    cout<<"enter a string : ";
    getline(cin,s1);
    // getline(cin,s1,'@');

    cout<<"s1 is : "<<s1;

    //taking multiple input for the numbers

    int n1,n2,n3;
    cout<<"\nenter three numbers : ";
    cin>>n1>>n2>>n3; //pls don't make any mistake while entering these three values

    cout<<"n1 is : "<<n1<<"\nn2 is : "<<n2<<"\nn3 is : "<<n3<<endl;

}

// The operators ::(scope resolution), .(member access), .*(member access through pointer to member), and?: (ternary conditional)cannot be overloaded.

// What is the purpose of 'default' keyword in C++ 11 ? 
// It instruct the compiler to generate the default implementation

// In C++ only synchronous exception can be handled