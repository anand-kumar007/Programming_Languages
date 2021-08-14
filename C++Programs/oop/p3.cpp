// encapsulation in OOP
//give your user a method to subscribe unsubsribe the channel not just simply assiging the SubscribeCount
#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
private:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitle;
public:
    YouTubeChannel(string name, string owner)
    {
        Name = name;
        OwnerName = owner;
        SubscriberCount = 0; // at the time of making channel no subscriber are there.
    }

    void getInfo()
    {
        cout << "channel Name : " << Name << endl;
        cout << "Owner Name : " << OwnerName << endl;
        cout << "Subscriber count : " << SubscriberCount << endl;

        cout << "published videos : " << endl;
        for (string video : PublishedVideoTitle)
        {
            cout << video << endl;
        }
    }

    void subscribe()
    {
        SubscriberCount++;
    }
    void Unsubscribe()
    {   
        if(SubscriberCount > 0)
        SubscriberCount--;
    }

    void publishVideo(string title)
    {
        PublishedVideoTitle.push_back(title);
    }
};

int main()
{
    YouTubeChannel ytChannel1("DeepLizard", "Saldina");
    ytChannel1.publishVideo("C++ for beginners");
    ytChannel1.publishVideo("OOP video1");
    ytChannel1.publishVideo("HTML and CSS video1");

    ytChannel1.subscribe();
    ytChannel1.subscribe();
    ytChannel1.subscribe();
    ytChannel1.subscribe();
    ytChannel1.getInfo();

    cout<<"\n----------\n";
    ytChannel1.Unsubscribe();
    ytChannel1.getInfo();
    

    system("pause>0");
    return 0;
}
