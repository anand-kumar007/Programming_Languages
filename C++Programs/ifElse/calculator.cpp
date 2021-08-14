#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation, choice;
    cout<<"*****Sam Calculator *******"<<endl;
    
    do
    {
        cout << "Enter the numbers and operations between them in order :";
        cin >> num1 >> operation >> num2;
        cout << endl;
        switch (operation)
        {
        case '+':
            cout << num1 << operation << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << operation << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << operation << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << operation << num2 << " = " << num1 / num2;
            break;
        case '%':
            bool isnum1Int, isnum2Int;
            isnum1Int = ((int)num1 == num1);
            isnum2Int = ((int)num2 == num2); //5==5.0

            if (isnum1Int && isnum2Int)
                cout << num1 << operation << num2 << " = " << (int)num1 % (int)num2;
            else
                cout << "Both numbers should be intergers to perform % operation";

            break;
        default:
            cout << "Invalid operation";
            break;
        }
        cout <<endl<<"Want to do more calculation(y/n) ? :";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout<<"Thanks for using the calculator !!";
    system("pause>0");

    return 0;
}