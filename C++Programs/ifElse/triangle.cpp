/*
User enters side lengths of a triangle (a,b,c)

program should writhe whether that traingle is equilateral,isosceles, scalene traingle

*/

#include<iostream>
using namespace std;

int main()
{
    int s1,s2,s3;
    cout<<"enter three sides of triangle :";
    cin>>s1>>s2>>s3;

    if(s1==s2 && s2==s3)
    {
        cout<<"equilateral triangel"<<endl;
    }
    else if((s1==s2 && s2!=s3)|| (s2==s3 && s1!=s2) ||(s1==s3 && s1!=s2) )
    {
        cout<<"isoscales triangle"<<endl;
    }
    else{
        cout<<"scalene triangle"<<endl;
    }

    return 0;

}