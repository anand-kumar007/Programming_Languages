#include<iostream>
using namespace std;

int main()
{
    int grade = 0, sum =0;
    
    for(int i =0; i<3; i++)
    {
        do{
            cout<<"enter grade "<<i+1<<" : ";
            cin>>grade;
        }while(grade<0 || grade>5);

        sum += grade;
    }

    cout<<"averge grade : "<<sum/3.0;
    system("pause>0");
    return 0 ;

}