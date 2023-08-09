#include<iostream>
#include<list>
using namespace std;

class YoutubeChannel{
public:
    string name;
    string ownername;
    int subscribercount;
    list<string> publishedvideotitles;
};

int main(int argc, char** argv){
    YoutubeChannel ytChannel;
    ytChannel.name="codebeauty";
    ytChannel.ownername="vinayak";
    ytChannel.subscribercount=10000;
    ytChannel.publishedvideotitles={"cpp for beginners","html and css","oop"};
    cout<<ytChannel.name<<endl;
    cout<<ytChannel.ownername<<endl;
    cout<<ytChannel.subscribercount<<endl;
    cout<<"videos:"<<endl;
    for(string videotitle:ytChannel.publishedvideotitles){
        cout<<videotitle<<endl;
    }
}