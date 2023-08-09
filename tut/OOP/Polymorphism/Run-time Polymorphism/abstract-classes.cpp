#include <bits/stdc++.h>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    // abstract class is a class that has atleast one pure virtual function
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()=0;//do-nothing fun / pure virtual function
    // this ensures that there cannot exist a derived class without redifining/overriding display();
};

class CWHVideo : public CWH
{
    int videoLength;

public:
    CWHVideo(string s, float r, int vl) : CWH(s, r)
    {
        videoLength = vl;
    }

    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " Out of 5 stars" << endl;
        cout << "Length of this video is : " << videoLength << " minutes" << endl;
    }

    // since there is no display function it will call base class display();
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }

    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << endl;
        cout << "No of words in this text tutorial is:" << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // video
    title = "Djang tutorial";
    vlen = 4.56;
    rating = 4.89;

    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    title = "Djang tutorial text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    djText.display();

    CWH *tuts[3];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    // here display() of the respective objects will be called

    // if there were no virtual keyword in the base class,these both
    // commands will call base class display()

    // rules for virtual functions
    // 1.they cannot be static;
    // 2.they are acessed by object pointers;
    // 3.virtual functions can be a friend of another class;
    // 4.a virtual function in base class might not be used;
    // 5. a virtual function defined in the base class, there is no
    // necessity of redefining it in the derived class;

    return 0;
}