#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void set_data(int i, float value)
    {
        id = i;
        price = value;
    }
    void getData(void)
    {
        cout << "Code of this item is  " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{
    int size=3;
    Shop *ptr=new Shop[size];
    int p,i;
    float q;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the id and price of the item: "<<endl;
        cin>>p>>q;
        (ptr+i)->set_data(p,q);
    }

    for(i=0;i<size;i++)
    {
        cout<<"Item number "<<i+1<<endl;
        (ptr+i)->getData();
        cout<<endl;
    }
    return 0;
}