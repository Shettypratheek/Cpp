#include <iostream>
using namespace std;

class CHW
{
protected:
    string title;
    float rating;

public:
    CHW(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {
        cout<<"Dummy code";
    }
};
class CHWVideo : public CHW
{
    float videoLength;

public:
    CHWVideo(string s, float r, int vL) : CHW(s, r)
    {
        videoLength = vL;
    }
    // void display()
    // {
    //     cout << endl;
    //     cout << "This is an amazing video with title: " << title << endl;
    //     cout << "Ratings: " << rating << " out of 5 stars." << endl;
    //     cout << "Length of this vedio is " << videoLength << " minutes." << endl;
    //     cout << endl;
    // }
};
class CHWText : public CHW
{
    int words;

public:
    CHWText(string s, float r, int wC) : CHW(s, r)
    {
        words = wC;
    }
    void display() 
    {
        cout << endl;
        cout << "This is an amazing text tutorial with title: " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars." << endl;
        cout << "No of words in this text tutorial is: " << words << " words." << endl;
    }
};
int main()
{
    string title;
    float rating, vLen;
    int words;

    title = "Namma Tulunadu";
    vLen = 4.56;
    rating = 4.5;
    CHWVideo myVideo(title, rating, vLen);
    // myVideo.display();

    title = "Namma Tutorial Text";
    words = 348;
    rating = 4.53;
    CHWText myText(title, rating, words);
    // myText.display();

    CHW *tuts[2];
    tuts[0] = &myVideo;
    tuts[1] = &myText;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

/*
-> They cannot be static.
-> They are accessed by object pointers.
-> Virtual functions can be a friend of another class.
-> A Virtual function in base class might not be used.
-> If a virtual function is defined in a base class,there is no necessity of redefining it in 
    the derived class.
*/