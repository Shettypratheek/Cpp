//how to use arrays in class

#include <iostream>
using namespace std;

class Shop{
    int itemid[100];
    int itemPrice[100];
    int counter;
public:
    void initCounter(){counter=0;}
    void setPrice();
    void display();

};
void Shop::setPrice()
{
    cout<<"Enter Id of your item no "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter the price of the item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop::display()
{
    for(int i=0;i<counter;i++)
        cout<<"Price of item with item id "<<itemid[i]<<" is "<<itemPrice[i]<<endl;
}
int main()
{
    Shop anagadi;
    anagadi.initCounter();
    anagadi.setPrice();
    anagadi.setPrice();
    anagadi.setPrice();
    anagadi.setPrice();
    anagadi.display();
    return 0;
}