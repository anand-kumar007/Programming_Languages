#include <iostream>
using namespace std;
void introduceMe(string name)
{
    cout<<"Hey ! "<<name<<" How are you ?";
}
int main()
{
    string name;
    cout<<"Your name : "; cin>>name;
    introduceMe(name);
    system("pause>0");
    return 0;
}