// speed.cpp
// Output the fine for driving too fast.
#include <iostream>
using namespace std;
int main()
{
    float limits, speed, toofast;
    cout << "\nSpeed limit: ";
    cin >> limits;
    cout << "\nSpeed: ";
    cin >> speed;
    
    if ((toofast = speed - limits) < 10)
        cout << "You were lucky!" << endl;
    else if (toofast < 20)
        cout << "Fine payable: 40,-. Dollars" << endl;
    else if (toofast < 30)
        cout << "Fine payable: 80,-. Dollars" << endl;
    else
        cout << "Hand over your driver's license!" << endl;
    return 0;
}