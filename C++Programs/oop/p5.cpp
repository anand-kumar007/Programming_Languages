// polymorphism
// ability of an object to have multiple forms.

//practise function here behaves differently.

#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
private:
    string Name;
    int SubscriberCount;
    list<string> PublishedVideoTitle;

protected:
    string OwnerName;
    int ContentQuality;

public:
    YouTubeChannel(string name, string owner)
    {
        Name = name;
        OwnerName = owner;
        SubscriberCount = 0; // at the time of making channel no subscriber are there.
        ContentQuality = 0;
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

    void CheckAnalytic()
    {
        if(ContentQuality < 5)
        cout<<Name<<" has bad content Quality."<<endl;
        else
        cout<<Name<<" has great content Quality "<<endl;
    }
};

class cookingYouTubeChannel : public YouTubeChannel
{

public:
    cookingYouTubeChannel(string name, string owner) : YouTubeChannel(name, owner)
    {
    }

    void practice()
    {
        cout << OwnerName << " practices with mixing of spices, learning new recipes etc.";
        ContentQuality++;

        // see OwnerName was protected that's why accessible here.
    }
};

class singersYouTubeChannel : public YouTubeChannel
{
    public:
    singersYouTubeChannel(string name, string owner): YouTubeChannel(name,owner){

    }

    void practice()
    {
        cout<<OwnerName<<" making new songs, learning dance ";
        ContentQuality++;
    }
};

int main()
{
   singersYouTubeChannel SingerChannel1("GeetMP3","Guri");
   cookingYouTubeChannel cookingChannel1("Heaven Kitchen","Annie");

   cookingChannel1.practice();
   cookingChannel1.practice();
   cookingChannel1.practice();
   cookingChannel1.practice();
   cookingChannel1.practice();
   cookingChannel1.practice();
   cookingChannel1.practice();

   cout<<endl;
   SingerChannel1.practice();
   SingerChannel1.practice();
   SingerChannel1.practice();
   SingerChannel1.practice();

   YouTubeChannel *yt1 = &SingerChannel1;
   YouTubeChannel *yt2 = &cookingChannel1;  // base class pointer can point to derived classes.


   //now i can access the methods of derived classes using the pointers.

   cout<<"\n------------\n";

   yt1->CheckAnalytic();

   yt2->CheckAnalytic();

   //    SingerChannel1.subscribe();
   //    SingerChannel1.subscribe();
   //    SingerChannel1.subscribe();

   //    SingerChannel1.publishVideo("YaarBelli");
   //    SingerChannel1.publishVideo("Millo Na");
   //    SingerChannel1.publishVideo("Sikandar 2 cover");

   //    SingerChannel1.getInfo();

   //    SingerChannel1.Unsubscribe();

   //    cout << "\n-----------\n";
   //    SingerChannel1.getInfo();
   //    SingerChannel1.practice();

   system("pause>0");
   return 0;
}
