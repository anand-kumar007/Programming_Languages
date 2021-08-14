//pointer stores memory address in contrast to normal variables.
// uses of pointers
// --> to pass value by value by references.
// -->  to return multiple value from a function.
// -->  for dynamic memory allocation.
// --> pointer of base class to access methods of derived class.
// --> smart pointer.

//1. void pointer.

#include<iostream>
using namespace std;

void printNumber(int * number)
{
    cout<<"number : "<<*number<<endl;
}

void printNumber(char *letter)
{
    cout << "letter : " << *letter << endl;
}

void printNumber(void * number, char type){

    switch (type)
    {
    case 'i': cout<<"Number : "<<(int *)number<<endl;
              break;
    case 'f':
        cout << "Number : " << (float *)number << endl;
        // cout << "Number : " << (bool *)number << endl; this won't show any error but it's a logical error.
        // so be careful when using the void pointer.
        break;
    case 'c':
        cout << "Letter : " << (char *)number << endl;
        break;

        default: cout<<"invalid type "; 
    }
}
int main()
{
    //void pointer can point to any data type but we can't directly derefernce a void pointer(disadvantage).
    int a = 10;
    char ch = 'a';
    printNumber(&a);
    printNumber(&ch);

    printNumber(&ch,'c');
    
    system("pause>0");

}