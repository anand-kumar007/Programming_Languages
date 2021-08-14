//inheritance
// suppose a new Youtube channel i want to create which has some exta fields as well.
#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
private:
    string Name;
    int SubscriberCount;
    list<string> PublishedVideoTitle;
protected :
    string OwnerName;

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
        if (SubscriberCount > 0)
            SubscriberCount--;
    }

    void publishVideo(string title)
    {
        PublishedVideoTitle.push_back(title);
    }
};


class cookingYouTubeChannel : public YouTubeChannel {


    public:
        cookingYouTubeChannel(string name, string owner): YouTubeChannel(name,owner){
        }

        void practice()
        {
            cout<<OwnerName<<" practices with mixing of spices, learning new recipes etc.";
            // see OwnerName was protected that's why accessible here.
        }
};

int main()
{
   cookingYouTubeChannel CookingChannel1("HappyKitchen","Annie");
    
   CookingChannel1.getInfo();

   CookingChannel1.publishVideo("Apple pie");
   CookingChannel1.publishVideo("Pizza recipy");
   CookingChannel1.publishVideo("Ice Cream recipy");

   CookingChannel1.practice();

   cout<<"\n-----------\n"; 
   CookingChannel1.getInfo();

   system("pause>0");
   return 0;
}
