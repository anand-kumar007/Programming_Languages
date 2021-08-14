// constructor is special method.
// its name has to be same as that of class.
// constructor doesn't have any return type.
// constructor is invoked automatically whenever you create the object of any class.

#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitle;
    
    YouTubeChannel(string name, string owner){
        Name = name;
        OwnerName = owner;
        SubscriberCount = 0; // at the time of making channel no subscriber are there.
    }

    void getInfo(){
        cout << "channel Name : " << Name << endl;
        cout << "Owner Name : " << OwnerName << endl;
        cout << "Subscriber count : " << SubscriberCount << endl;

        cout << "published videos : " << endl;
        for (string video : PublishedVideoTitle)
        {
            cout << video << endl;
        }
    }
};

int main()
{
    YouTubeChannel ytChannel1("DeepLizard", "Saldina");
    ytChannel1.PublishedVideoTitle.push_back("C++ for beginners");
    ytChannel1.PublishedVideoTitle.push_back("OOP video1");
    ytChannel1.PublishedVideoTitle.push_back("HTML and CSS video1");
    
    YouTubeChannel ytChannel2("AmmySings", "Ammy");
    ytChannel2.PublishedVideoTitle.push_back("Cheap Thrills cover");
    ytChannel2.PublishedVideoTitle.push_back("Ammi Watto cover");
    ytChannel2.PublishedVideoTitle.push_back("Out of world cover");

    ytChannel1.getInfo();
    ytChannel2.getInfo();

    system("pause>0");
    return 0;
}
