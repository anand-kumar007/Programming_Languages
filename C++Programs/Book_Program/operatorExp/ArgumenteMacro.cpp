#include<iostream>
using std :: cout;
using std :: cin ;
#define PROMPT (cout<<"Enter the Number : ")
# define CUBE(a) (a*a*a)

void fun1()
{
    #define OK (cout<<"OK all is fine")

}

int main()
{
    int number;
    PROMPT;

    cin>>number;

    cout<<"Cube is : "<<CUBE(number);

    // now no warning would be shown.
    #undef OK
    // #define OK (cout<<"OK all is well");
    // OK;
}

// You can use it inside a function, but it is not scoped to the function.So, in your example, the second definitions of a macro will be a redefinition and generate an error.You need to use #undef to clear them first