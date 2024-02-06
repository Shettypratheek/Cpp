// defining function outside the class using scope resolution operator ::

#include <iostream>
using namespace std;

class Geeks{
    public:
        string geeksname;
        int id;
        void printname();
        void printid()
        {
            cout<<"The ID of the geek is "<<id<<endl;
        }
};
void Geeks::printname()
{
    cout<<"The name of the geek is "<<geeksname<<endl;
}
int main()
{

    Geeks ob;
    cout<<"Enter the geeksname and geeks id"<<endl;
    cin>>ob.geeksname>>ob.id;
    ob.printname();
    ob.printid();

    return 0;
}