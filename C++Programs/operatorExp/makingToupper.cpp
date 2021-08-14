#include<iostream>
#include<cctype>
using std::cout;
using std::cin;
#define TOUPPER(c) \
        (islower(c)) ? ((c)-'a' + 'A') : ((c))

int main()
{
    char ch1;
    cout<<"enter ch1 : ";
    cin>>ch1;
    char ch2 = TOUPPER(ch1);
    cout<< "uppercase of ch1 is : " <<ch2 ;
}

// logic here is that lowecase and uppercase differ by a constant.

// b = 68;  B=98;  so b -'a' + 'A' ((68-67) + 97 ) = 98;