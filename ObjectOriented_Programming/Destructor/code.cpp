#include <iostream>
using namespace std;
int count=0;
class Num{
    
    public:
    Num(){
        count++;
        cout<<"Constructor is called with my id "<<count<<endl;
    }
    ~Num()
    {
        cout<<"Destructor is called with id "<<count<<endl;
        count--;

    }
};
int main()
{
    cout<<"Hello im in main  function "<<endl;
    Num n1;
    {
        cout<<"Hey i have entered the block code "<<endl;
        cout<<"Creating new objects "<<endl;
        Num n1,n2;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"Back to  main function "<<endl;
    return 0;
}