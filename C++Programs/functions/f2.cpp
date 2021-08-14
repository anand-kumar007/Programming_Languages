#include <iostream>
using namespace std;
void details(string name, int age=0, string address="Mumbai")
{
    cout <<"name : "<<name<<endl;
    cout <<"age : "<<age<<endl;
    cout <<"address : "<<address<<endl;
}
int main()
{
    string name;
    cout << "Your name : ";
    cin >> name;
    details(name);
    system("pause>0");
    return 0;
}


// defualt arg can be given only when all its right side arg have default value.
// bcz this creates ambiguity in understanding for the compiler as well