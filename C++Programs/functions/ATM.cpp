#include<iostream>
using namespace std;

void showMenu()
{
    cout << "*******Menu*******"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout << "2. Deposit" << endl;
    cout<<"3. Withdraw"<<endl;
    cout << "*******************" << endl;
}

int main()
{
    int option;
    double balance = 500;
    char choice;

    while(1)
    {
    showMenu();
    cout<<"choose option : ";
    cin>>option;
    switch (option)
    {
    case 1: 
            cout<<"balance is "<<balance<<"$"<<endl;
            break;
    case 2: 
        double depositAmount;
        cout<<"deposit amount :";
        cin>>depositAmount;
        balance += depositAmount;

        cout<<"your new balance is  : "<<balance<<endl;
        break;
    case 3 :
        double withdrawAmount;
        cout<<"withdraw amount : ";
        cin>>withdrawAmount;
        if(withdrawAmount <= balance)
        balance -= withdrawAmount;  
        else
        cout<<"sorry not enough amount in your account.";
        cout << "your new balance is  : " << balance << endl;

        break;  
    default:
        cout<<"invalid choice";
        break;
    }

    cout<<"want to continue(y/n) : ";
    cin>>choice;
    if(choice =='y'|| choice =='Y')
     continue;
     else
     break;
    }

    cout<<"Thanks for using the ATM. Have a good day !!";
    system("pause>0");
    return 0;
}