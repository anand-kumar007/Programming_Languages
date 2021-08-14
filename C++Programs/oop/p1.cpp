/*
OOP allows you to represent real world objects in the programming.
those real world objects are represented with their attributes and their behaviour as well.

class represent the template or blue print. and the object is an instance or example of that class.
Like--> fruit is class and apple,mango,banana etc. are its object
        car is class and volvo,ford,bmw etc are its objects.
        attributes of class car would be 
        ->name,maxspeed,color,price etc.
        behaviours of car class would be
        ->drive,brake
*/

#include<iostream>
#include<list>
using namespace std;

class YouTubeChannel{
    public:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitle;
};

int main()
{
    YouTubeChannel ytChannel1;
    ytChannel1.Name = "DeepLizard";
    ytChannel1.OwnerName = "Saldina";
    ytChannel1.SubscriberCount = 19000;
    ytChannel1.PublishedVideoTitle = {"C++ for beginners","OOP video1","HTML and CSS video1"};

    cout << "channel Name : " << ytChannel1.Name << endl;
    cout << "Owner Name : " << ytChannel1.OwnerName << endl;
    cout << "Subscriber count : " << ytChannel1.SubscriberCount << endl;

    cout << "published videos : "<<endl;
     for (string video : ytChannel1.PublishedVideoTitle)
    {
        cout<<video<<endl;
    }

    system("pause>0");
    return 0;
}
